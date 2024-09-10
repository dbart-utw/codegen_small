
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
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0.41686746987951806;
        result[1] += 0.0783132530120482;
        result[2] += 0.0036144578313253013;
        result[3] += 0.01325301204819277;
        result[4] += 0.44096385542168676;
        result[5] += 0.046987951807228916;
      } else {
        result[0] += 0.07026143790849673;
        result[1] += 0.021241830065359478;
        result[2] += 0.030501089324618737;
        result[3] += 0.20751633986928106;
        result[4] += 0.09912854030501089;
        result[5] += 0.5713507625272332;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 0.9975845410628019;
        result[2] += 0;
        result[3] += 0.0024154589371980675;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.75;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.25;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0.9835255354200988;
        result[1] += 0;
        result[2] += 0.011532125205930808;
        result[3] += 0.0032948929159802307;
        result[4] += 0.0016474464579901153;
        result[5] += 0;
      } else {
        result[0] += 0.16;
        result[1] += 0;
        result[2] += 0.52;
        result[3] += 0.08;
        result[4] += 0.12;
        result[5] += 0.12;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0.6851851851851852;
        result[1] += 0;
        result[2] += 0.2037037037037037;
        result[3] += 0.09259259259259259;
        result[4] += 0.018518518518518517;
        result[5] += 0;
      } else {
        result[0] += 0.01848249027237354;
        result[1] += 0;
        result[2] += 0.8667315175097277;
        result[3] += 0.08852140077821012;
        result[4] += 0;
        result[5] += 0.026264591439688716;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
