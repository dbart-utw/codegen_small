#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


#if defined(__clang__) || defined(__GNUC__)
#define LIKELY(x)   __builtin_expect(!!(x), 1)
#define UNLIKELY(x) __builtin_expect(!!(x), 0)
#else
#define LIKELY(x)   (x)
#define UNLIKELY(x) (x)
#endif

#define N_TARGET 1
#define MAX_N_CLASS 2

union Entry {
  int missing;
  float fvalue;
  int qvalue;
};

int32_t get_num_target(void);
void get_num_class(int32_t* out);
int32_t get_num_feature(void);
const char* get_threshold_type(void);
const char* get_leaf_output_type(void);
void predict(union Entry* data, int pred_margin, uint32_t* result);
void postprocess(uint32_t* result);

#define TEST_DATA_ROWS 65521
#define TEST_DATA_COLS 87
