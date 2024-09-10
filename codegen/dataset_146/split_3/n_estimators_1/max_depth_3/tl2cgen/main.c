
#include "header.h"


static const int32_t num_class[] = {  6, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 36;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9705882352941176;
        result[5] += 0.029411764705882353;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.007822685788787484;
        result[3] += 0.024771838331160364;
        result[4] += 0.03780964797913951;
        result[5] += 0.9295958279009127;
      } else {
        result[0] += 0.03823529411764706;
        result[1] += 0.03235294117647059;
        result[2] += 0.05;
        result[3] += 0.3411764705882353;
        result[4] += 0.07352941176470588;
        result[5] += 0.4647058823529412;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9611872146118722;
        result[2] += 0;
        result[3] += 0.02511415525114155;
        result[4] += 0.0136986301369863;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
        result[0] += 0.4069940476190476;
        result[1] += 0.049107142857142856;
        result[2] += 0.06770833333333333;
        result[3] += 0.17410714285714285;
        result[4] += 0.17633928571428573;
        result[5] += 0.12574404761904762;
      } else {
        result[0] += 0.3585564610011641;
        result[1] += 0.005238649592549476;
        result[2] += 0.5180442374854481;
        result[3] += 0.0640279394644936;
        result[4] += 0.007566938300349243;
        result[5] += 0.046565774155995346;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 1;
  result[1] /= 1;
  result[2] /= 1;
  result[3] /= 1;
  result[4] /= 1;
  result[5] /= 1;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
