#define NOPS_ 22
#define NARGS_ 73
#define NTEMP1_ 7
#define NTEMP3_ 2


uint64_t op2prev[NOPS_] = { 79, 80, 51, 82, 82, 79, 82, 59, 12, 70, 12, 43, 61, 90, 79, 59, 12, 70, 12, 44, 61, 89};


uint64_t args2prev[NARGS_] = { 4, 12, 15, 5, 13, 1, 1024, 15, 6, 12, 15, 13, 1, 1024, 15, 0, 7, 1, 8, 2, 14, 15, 3, 6, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 2, 0, 0, 1, 1, 1, 3, 0, 49152, 12, 1, 1, 0, 11, 15, 0, 4, 0, 1, 5, 0, 0, 0, 1, 1, 6, 0, 0, 1, 49152, 12, 1, 0, 0, 21513, 21, 49152, 12, 1};