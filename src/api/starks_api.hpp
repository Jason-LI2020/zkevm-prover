#ifndef LIB_API_H
#define LIB_API_H
    #include <stdint.h>

    // FRI Proof
    // ========================================================================================
    void save_proof(void* pStarkInfo, void *pFriProof, unsigned long numPublicInputs, void *pPublicInputs, char* publicsOutputFile, char* filePrefix);

    // FRIProof
    // ========================================================================================
    void *fri_proof_new(void *pStarks);
    void *fri_proof_get_root(void *pFriProof, uint64_t root_index, uint64_t root_subindex);
    void *fri_proof_get_tree_root(void *pFriProof, uint64_t tree_index, uint64_t root_index);
    void fri_proof_free(void *pFriProof);

    // Config
    // ========================================================================================
    void *config_new(char* filename);
    void config_free(void *pConfig);

    // Stark Info
    // ========================================================================================
    void *starkinfo_new(char* filename);
    uint64_t get_mapTotalN(void *pStarkInfo);
    void set_mapOffsets(void *pStarkInfo, void *pChelpers);
    uint64_t get_map_offsets(void *pStarkInfo, char *stage, bool flag);
    uint64_t get_map_sections_n(void *pStarkInfo, char *stage);
    void starkinfo_free(void *pStarkInfo);

    // Starks
    // ========================================================================================
    void *starks_new(void *pConfig, void *starkInfo, void *cHelpers, void *constPols, void *pAddress);

    void *starks_new_default(void *starkInfo, void *cHelpers, void *constPols, void *pAddress);

    void *get_stark_info(void *pStarks);
    void starks_free(void *pStarks);

    void *chelpers_new(char* cHelpers);
    void chelpers_free(void *pChelpers);

    void init_hints();

    void *steps_params_new(void *pPols, void*pConstPols, void *pChallenges, void *pSubproofValues, void *pEvals, void *pPublicInputs);
    void steps_params_free(void *pStepsParams);
    void extend_and_merkelize(void *pStarks, uint64_t step, void *pParams, void *proof);
    void treesGL_get_root(void *pStarks, uint64_t index, void *root);

    void calculate_quotient_polynomial(void *pStarks, void *pParams, void *pChelpersSteps);
    void calculate_impols_expressions(void* pStarks, uint64_t step, void *pParams, void *pChelpersSteps);

    void compute_stage_expressions(void *pStarks, uint32_t elementType, uint64_t step, void *pParams, void *pProof, void *pChelpersSteps);
    void commit_stage(void *pStarks, uint32_t elementType, uint64_t step, void *pParams, void *pProof);
    void compute_evals(void *pStarks, void *pParams, void *pProof);

    void *compute_fri_pol(void *pStarks, uint64_t step, void *pParams, void *cHelpersSteps);
    void *get_fri_pol(void *pStarks, void *pParams);
    void compute_fri_folding(void *pStarks, void *pProof, void *pFriPol, uint64_t step, void *pChallenge);
    void compute_fri_queries(void *pStarks, void *pProof, uint64_t* friQueries);

    void *get_proof_root(void *pProof, uint64_t stage_id, uint64_t index);

    void resize_vector(void *pVector, uint64_t newSize, bool value);
    void set_bool_vector_value(void *pVector, uint64_t index, bool value);

    void calculate_hash(void *pStarks, void *pHhash, void *pBuffer, uint64_t nElements);
    
    // CommitPolsStarks
    // ========================================================================================
    void *commit_pols_starks_new(void *pAddress, uint64_t degree, uint64_t nCommitedPols);
    void commit_pols_starks_free(void *pCommitPolsStarks);

    // ConstPols
    // ========================================================================================
    void *const_pols_new(void *pStarkInfo, char* constPolsFile);
    void *const_pols_new(void *pStarkInfo, char* constPolsFile, char* constTreeFile);
    void const_pols_free(void * pConstPols);

    // Circom
    // ========================================================================================
    void circom_get_commited_pols(void *pCommitPolsStarks, char* zkevmVerifier, char* execFile, void* zkin, uint64_t N, uint64_t nCols);
    void circom_recursive1_get_commited_pols(void *pCommitPolsStarks, char* zkevmVerifier, char* execFile, void* zkin, uint64_t N, uint64_t nCols);

    // zkin
    // ========================================================================================
    void *zkin_new(void* pStarkInfo, void *pFriProof, unsigned long numPublicInputs, void *pPublicInputs, unsigned long numRootC, void *pRootC);

    // Transcript
    // =================================================================================
    void *transcript_new(uint32_t elementType, uint64_t arity, bool custom);
    void transcript_add(void *pTranscript, void *pInput, uint64_t size);
    void transcript_add_polinomial(void *pTranscript, void *pPolinomial);
    void transcript_free(void *pTranscript, uint32_t elementType);
    void get_challenge(void *pStarks, void *pTranscript, void *pElement);
    void get_permutations(void *pTranscript, uint64_t *res, uint64_t n, uint64_t nBits);

    // CHelpersSteps
    
    void *chelpers_steps_new(void *pStarkInfo, void *pChelpers, void* pParams);
    bool verify_constraints(void *pCHelpersSteps, uint64_t step);
    void set_commit_calculated(void *pCHelpersSteps, uint64_t id);
    void can_stage_be_calculated(void *pCHelpersSteps, uint64_t step);
    void can_impols_be_calculated(void *pCHelpersSteps, uint64_t step);
    void *get_hint_field(void *pChelpersSteps, uint64_t hintId, char* hintFieldName, bool dest);
    void set_hint_field(void *pChelpersSteps, void *values, uint64_t hintId, char* hintFieldName);
    void chelpers_steps_free(void *pCHelpersSteps);

    // Polinomial
    // =================================================================================
    void *polinomial_new(uint64_t degree, uint64_t dim, char* name);
    void *polinomial_get_p_element(void *pPolinomial, uint64_t index);
    void polinomial_free(void *pPolinomial);

    // Poseidon
    // =================================================================================
    void goldilocks_linear_hash(void *pInput, void *pOutput);

#endif