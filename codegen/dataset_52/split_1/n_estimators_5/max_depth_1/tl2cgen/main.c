
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.25213675213675213;
    result[1] += 0.7478632478632479;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
    result[0] += 0.9545454545454546;
    result[1] += 0.045454545454545456;
  } else {
    result[0] += 0.18274111675126903;
    result[1] += 0.817258883248731;
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    result[0] += 0.9743589743589743;
    result[1] += 0.02564102564102564;
  } else {
    result[0] += 0.22767857142857142;
    result[1] += 0.7723214285714286;
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2147799953818321228) ) ) {
    result[0] += 0.90625;
    result[1] += 0.09375;
  } else {
    result[0] += 0.329004329004329;
    result[1] += 0.670995670995671;
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8359499871730804443) ) ) {
    result[0] += 0.2680851063829787;
    result[1] += 0.7319148936170212;
  } else {
    result[0] += 1;
    result[1] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_1/test_data.csv", "r");
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
