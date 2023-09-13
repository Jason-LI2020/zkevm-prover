#include "database_versions_associtive_cache.hpp"
#include <vector>
#include "goldilocks_base_field.hpp"
#include <nlohmann/json.hpp>
#include <mutex>
#include "zklog.hpp"
#include "zkmax.hpp"
#include "exit_process.hpp"
#include "scalar.hpp"
#include "zkassert.hpp"

DatabaseVersionsAssociativeCache::DatabaseVersionsAssociativeCache()
{
    log2IndexesSize = 0;
    indexesSize = 0;
    log2CacheSize = 0;
    cacheSize = 0;
    indexes = NULL;
    keys = NULL;
    versions = NULL;
    currentCacheIndex = 0;
    attempts = 0;
    hits = 0;
    name = "";
};

DatabaseVersionsAssociativeCache::DatabaseVersionsAssociativeCache(int log2IndexesSize_, int cacheSize_, string name_)
{
    postConstruct(log2IndexesSize_, cacheSize_, name_);
};

DatabaseVersionsAssociativeCache::~DatabaseVersionsAssociativeCache()
{
    if (indexes != NULL)
        delete[] indexes;
    if (keys != NULL)
        delete[] keys;
    if (versions != NULL)
        delete[] versions;

};

void DatabaseVersionsAssociativeCache::postConstruct(int log2IndexesSize_, int log2CacheSize_, string name_)
{
    lock_guard<recursive_mutex> guard(mlock);
    log2IndexesSize = log2IndexesSize_;
    if (log2IndexesSize_ > 32)
    {
        zklog.error("DatabaseVersionsAssociativeCache::DatabaseVersionsAssociativeCache() log2IndexesSize_ > 32");
        exitProcess();
    }
    indexesSize = 1 << log2IndexesSize;

    log2CacheSize = log2CacheSize_;
    if (log2CacheSize_ > 32)
    {
        zklog.error("DatabaseVersionsAssociativeCache::DatabaseVersionsAssociativeCache() log2CacheSize_ > 32");
        exitProcess();
    }
    cacheSize = 1 << log2CacheSize_;

    if(indexes != NULL) delete[] indexes;
    indexes = new uint32_t[indexesSize];
    //initialization of indexes array
    uint32_t initValue = UINT32_MAX-cacheSize-(uint32_t)1;
    #pragma omp parallel for schedule(static) num_threads(4)
    for (size_t i = 0; i < indexesSize; i++)
    {
        indexes[i] = initValue;
    }
    if(keys != NULL) delete[] keys;
    keys = new Goldilocks::Element[4 * cacheSize];

    if(versions != NULL) delete[] versions;
    versions = new uint64_t[2 * cacheSize];

    currentCacheIndex = 0;
    attempts = 0;
    hits = 0;
    name = name_;
    
    //masks for fast module, note cache size and indexes size must be power of 2
    cacheMask = cacheSize - 1;
    indexesMask = indexesSize - 1;
};

void DatabaseVersionsAssociativeCache::addKeyVersion(const Goldilocks::Element (&key)[4], const uint64_t version)
{
    
    lock_guard<recursive_mutex> guard(mlock);
    bool emptySlot = false;
    bool present = false;
    uint32_t cacheIndex;
    uint32_t tableIndexEmpty=0;

    //
    // Check if present in one of the four slots
    //
    Goldilocks::Element key_hashed[4];
    hashKey(key_hashed, key);
    for (int i = 0; i < 4; ++i)
    {
        uint32_t tableIndex = (uint32_t)(key_hashed[i].fe & indexesMask);
        uint32_t cacheIndexRaw = indexes[tableIndex];
        cacheIndex = cacheIndexRaw & cacheMask;
        uint32_t cacheIndexKey = cacheIndex * 4;

        if (!emptyCacheSlot(cacheIndexRaw)){
            if( keys[cacheIndexKey + 0].fe == key[0].fe &&
                keys[cacheIndexKey + 1].fe == key[1].fe &&
                keys[cacheIndexKey + 2].fe == key[2].fe &&
                keys[cacheIndexKey + 3].fe == key[3].fe){
                    if(versions[cacheIndex] != version){
                        zklog.error("DatabaseVersionsAssociativeCache::addKeyVersion() version mismatch");
                        exitProcess();
                    }
                    return;
                    //rick: assert no error
            }
        }else if (emptySlot == false){
            emptySlot = true;
            tableIndexEmpty = tableIndex;
        }
    }

    //
    // Evaluate cacheIndexKey and 
    //
    if(!present){
        if(emptySlot == true){
            indexes[tableIndexEmpty] = currentCacheIndex;
        }
        cacheIndex = (uint32_t)(currentCacheIndex & cacheMask);
        currentCacheIndex = (currentCacheIndex == UINT32_MAX) ? 0 : (currentCacheIndex + 1);
    }
    uint64_t cacheIndexKey, cacheIndexValue;
    cacheIndexKey = cacheIndex * 4;
    cacheIndexValue = cacheIndex;
    
    //
    // Add value
    //
    keys[cacheIndexKey + 0].fe = key[0].fe;
    keys[cacheIndexKey + 1].fe = key[1].fe;
    keys[cacheIndexKey + 2].fe = key[2].fe;
    keys[cacheIndexKey + 3].fe = key[3].fe;
    versions[cacheIndexValue ] = version;         

    //
    // Forced index insertion
    //
    if(!present && !emptySlot){
        int iters = 0;
        uint32_t usedRawCacheIndexes[10];
        usedRawCacheIndexes[0] = currentCacheIndex-1;
        forcedInsertion(usedRawCacheIndexes, iters);
    }
}

void DatabaseVersionsAssociativeCache::forcedInsertion(uint32_t (&usedRawCacheIndexes)[10], int &iters)
{
    uint32_t inputRawCacheIndex = usedRawCacheIndexes[iters];
    //
    // avoid infinite loop
    //
    iters++;
    if (iters > 9)
    {
        zklog.error("forcedInsertion() more than 10 iterations required. Index: " + to_string(inputRawCacheIndex));
        exitProcess();
    }    
    //
    // find a slot into my indexes
    //
    Goldilocks::Element key_hashed[4];
    hashKey_p(key_hashed, &keys[(inputRawCacheIndex & cacheMask) * 4]);
    Goldilocks::Element *inputKey = &key_hashed[0];    
    uint32_t minRawCacheIndex = UINT32_MAX;
    int pos = -1;

    for (int i = 0; i < 4; ++i)
    {
        uint32_t tableIndex_ = (uint32_t)(inputKey[i].fe & indexesMask);
        uint32_t rawCacheIndex_ = (uint32_t)(indexes[tableIndex_]);
        if (emptyCacheSlot(rawCacheIndex_))
        {
            indexes[tableIndex_] = inputRawCacheIndex;
            return;
        }
        else
        {
            //consider minimum not used rawCacheIndex_
            bool used = false;
            for(int k=0; k<iters; k++){
                if(usedRawCacheIndexes[k] == rawCacheIndex_){
                    used = true;
                    break;
                }
            }
            if (!used && rawCacheIndex_ < minRawCacheIndex)
            {
                minRawCacheIndex = rawCacheIndex_;
                pos = i;
            }
        }
    }

    if (pos < 0)
    {
        zklog.error("forcedInsertion() could not continue the recursion: " + to_string(inputRawCacheIndex));
        exitProcess();
    } 
    indexes[(uint32_t)(inputKey[pos].fe & indexesMask)] = inputRawCacheIndex;
    usedRawCacheIndexes[iters] = minRawCacheIndex; //new cache element to add in the indexes table
    forcedInsertion(usedRawCacheIndexes, iters);
    
}

bool DatabaseVersionsAssociativeCache::findKey(const Goldilocks::Element (&key)[4], uint64_t &version)
{
    lock_guard<recursive_mutex> guard(mlock);
    attempts++; 
    //
    //  Statistics
    //
    if (attempts<<40 == 0)
    {
        zklog.info("DatabaseVersionsAssociativeCache::findKey() name=" + name + " indexesSize=" + to_string(indexesSize) + " cacheSize=" + to_string(cacheSize) + " attempts=" + to_string(attempts) + " hits=" + to_string(hits) + " hit ratio=" + to_string(double(hits) * 100.0 / double(zkmax(attempts, 1))) + "%");
    }
    //
    // Find the value
    //
    Goldilocks::Element key_hashed[4];
    hashKey(key_hashed, key);
    for (int i = 0; i < 4; i++)
    {
        uint32_t cacheIndexRaw = indexes[key_hashed[i].fe & indexesMask];
        if (emptyCacheSlot(cacheIndexRaw)) continue;
        
        uint32_t cacheIndex = cacheIndexRaw  & cacheMask;
        uint32_t cacheIndexKey = cacheIndex * 4;

        if (keys[cacheIndexKey + 0].fe == key[0].fe &&
            keys[cacheIndexKey + 1].fe == key[1].fe &&
            keys[cacheIndexKey + 2].fe == key[2].fe &&
            keys[cacheIndexKey + 3].fe == key[3].fe)
        {
            ++hits;
            version = versions[cacheIndex];
            return true;
        }
    }
    return false;
}