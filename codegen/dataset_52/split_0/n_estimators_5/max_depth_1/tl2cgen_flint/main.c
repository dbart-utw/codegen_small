
#include "header.h"


static const int32_t num_class[] = {  2, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 34;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f784285))) ) ) {
    result[0] += 0.96;
    result[1] += 0.04;
  } else {
    result[0] += 0.23109243697478993;
    result[1] += 0.7689075630252101;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3162393162393162;
    result[1] += 0.6837606837606838;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3da7ea60))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2132701421800948;
    result[1] += 0.7867298578199052;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78d50))) ) ) {
    result[0] += 0.9672131147540983;
    result[1] += 0.03278688524590164;
  } else {
    result[0] += 0.15346534653465346;
    result[1] += 0.8465346534653465;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 0.22842639593908629;
    result[1] += 0.7715736040609137;
  } else {
    result[0] += 0.8787878787878788;
    result[1] += 0.12121212121212122;
  }
  
  // Average tree outputs
  result[0] /= 5;
  result[1] /= 5;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
  // Apply postprocessor
  if (!pred_margin) { postprocess(result); }
}

void postprocess(float* result) {
  // Do nothing
}


int main() {
    float result[MAX_N_CLASS];
    union Entry input[TEST_DATA_COLS];
    char line[1024];
    

    FILE* file = fopen("./codegen/dataset_52/split_0/test_data.csv", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        char *ptr = line;
        for (int i = 0; i < TEST_DATA_COLS; i++) {
            sscanf(ptr, "%f", &(input[i].fvalue));
            input[i].missing = -1;
            while (*ptr != ',' && *ptr != '\n' && *ptr != '\0') ptr++;  // Skip to next comma
            if (*ptr == ',') ptr++;  // Move past the comma
        }
        predict(input, 0, result);
        
    }
    

    return 0;
}
