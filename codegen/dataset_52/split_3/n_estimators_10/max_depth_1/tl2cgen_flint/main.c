
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
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e94115e))) ) ) {
    result[0] += 0.6363636363636364;
    result[1] += 0.36363636363636365;
  } else {
    result[0] += 0.2621951219512195;
    result[1] += 0.7378048780487805;
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f101c2e))) ) ) {
    result[0] += 0.9259259259259259;
    result[1] += 0.07407407407407407;
  } else {
    result[0] += 0.2796610169491525;
    result[1] += 0.7203389830508474;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.25462962962962965;
    result[1] += 0.7453703703703703;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.30666666666666664;
    result[1] += 0.6933333333333334;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 0.9622641509433962;
    result[1] += 0.03773584905660377;
  } else {
    result[0] += 0.21904761904761905;
    result[1] += 0.780952380952381;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e691d15))) ) ) {
    result[0] += 0.9661016949152542;
    result[1] += 0.03389830508474576;
  } else {
    result[0] += 0.23529411764705882;
    result[1] += 0.7647058823529411;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9454545454545454;
    result[1] += 0.05454545454545454;
  } else {
    result[0] += 0.23076923076923078;
    result[1] += 0.7692307692307693;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    result[0] += 0.6551724137931034;
    result[1] += 0.3448275862068966;
  } else {
    result[0] += 0.21022727272727273;
    result[1] += 0.7897727272727273;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 0.18333333333333332;
    result[1] += 0.8166666666666667;
  } else {
    result[0] += 0.8433734939759037;
    result[1] += 0.1566265060240964;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 0.9454545454545454;
    result[1] += 0.05454545454545454;
  } else {
    result[0] += 0.22596153846153846;
    result[1] += 0.7740384615384616;
  }
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_3/test_data.csv", "r");
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
