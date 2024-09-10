
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
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.0009850000496953725815) ) ) {
    result[0] += 0.5982905982905983;
    result[1] += 0.4017094017094017;
  } else {
    result[0] += 0.15753424657534246;
    result[1] += 0.8424657534246576;
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7966699898242950439) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.2857142857142857;
    result[1] += 0.7142857142857143;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22596153846153846;
    result[1] += 0.7740384615384616;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3620689655172414;
    result[1] += 0.6379310344827587;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1515449956059455872) ) ) {
    result[0] += 0.6761904761904762;
    result[1] += 0.3238095238095238;
  } else {
    result[0] += 0.24050632911392406;
    result[1] += 0.759493670886076;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_4/test_data.csv", "r");
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
