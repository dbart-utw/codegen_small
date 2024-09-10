
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1142599992454051971) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.09899500012397766113) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.09732999652624130249) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.01539499999489635229) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.1339749991893768311) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9832650125026702881) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1002099998295307159) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.3047449961304664612) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.11538461538461539;
          result[1] += 0.8846153846153846;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.9337299764156341553) ) ) {
          result[0] += 0.022556390977443608;
          result[1] += 0.9774436090225563;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9098950028419494629) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0.8571428571428571;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 1;
  result[1] /= 1;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_2/test_data.csv", "r");
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
