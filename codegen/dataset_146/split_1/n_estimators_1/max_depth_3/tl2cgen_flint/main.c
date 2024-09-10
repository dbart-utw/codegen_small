
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0.010238907849829351;
        result[1] += 0.006825938566552901;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9522184300341296;
        result[5] += 0.030716723549488054;
      } else {
        result[0] += 0.05673758865248227;
        result[1] += 0.005673758865248227;
        result[2] += 0.0014184397163120568;
        result[3] += 0.17659574468085107;
        result[4] += 0.059574468085106386;
        result[5] += 0.7;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 0.979498861047836;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02050113895216401;
        result[5] += 0;
      } else {
        result[0] += 0.6429906542056075;
        result[1] += 0.029906542056074768;
        result[2] += 0.09221183800623053;
        result[3] += 0.07227414330218068;
        result[4] += 0.10404984423676013;
        result[5] += 0.058566978193146414;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0.014492753623188406;
        result[1] += 0;
        result[2] += 0.10144927536231885;
        result[3] += 0.13043478260869565;
        result[4] += 0.028985507246376812;
        result[5] += 0.7246376811594203;
      } else {
        result[0] += 0.05128205128205128;
        result[1] += 0.08333333333333333;
        result[2] += 0.42948717948717946;
        result[3] += 0.2948717948717949;
        result[4] += 0.04487179487179487;
        result[5] += 0.09615384615384616;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0.023255813953488372;
        result[1] += 0;
        result[2] += 0.6046511627906976;
        result[3] += 0.27906976744186046;
        result[4] += 0;
        result[5] += 0.09302325581395349;
      } else {
        result[0] += 0.00390625;
        result[1] += 0;
        result[2] += 0.9635416666666666;
        result[3] += 0.03125;
        result[4] += 0;
        result[5] += 0.0013020833333333333;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
