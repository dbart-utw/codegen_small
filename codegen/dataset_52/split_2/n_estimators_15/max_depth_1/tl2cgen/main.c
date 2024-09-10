
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
  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9580449759960174561) ) ) {
    result[0] += 0.3220338983050847;
    result[1] += 0.6779661016949152;
  } else {
    result[0] += 0.9629629629629629;
    result[1] += 0.037037037037037035;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    result[0] += 0.26;
    result[1] += 0.74;
  } else {
    result[0] += 0.8095238095238095;
    result[1] += 0.19047619047619047;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.0569800008088350296) ) ) {
    result[0] += 0.7291666666666666;
    result[1] += 0.2708333333333333;
  } else {
    result[0] += 0.19760479041916168;
    result[1] += 0.8023952095808383;
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.006335000041872262955) ) ) {
    result[0] += 0.7076923076923077;
    result[1] += 0.2923076923076923;
  } else {
    result[0] += 0.26262626262626265;
    result[1] += 0.7373737373737373;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
    result[0] += 0.9571428571428572;
    result[1] += 0.04285714285714286;
  } else {
    result[0] += 0.18652849740932642;
    result[1] += 0.8134715025906736;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22935779816513763;
    result[1] += 0.7706422018348624;
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1070350036025047302) ) ) {
    result[0] += 0.6862745098039216;
    result[1] += 0.3137254901960784;
  } else {
    result[0] += 0.21739130434782608;
    result[1] += 0.782608695652174;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24285714285714285;
    result[1] += 0.7571428571428571;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.22;
    result[1] += 0.78;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.26424870466321243;
    result[1] += 0.7357512953367875;
  } else {
    result[0] += 0.8;
    result[1] += 0.2;
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.31277533039647576;
    result[1] += 0.6872246696035242;
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.24880382775119617;
    result[1] += 0.7511961722488039;
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.07243000157177448273) ) ) {
    result[0] += 0.7126436781609196;
    result[1] += 0.28735632183908044;
  } else {
    result[0] += 0.1875;
    result[1] += 0.8125;
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    result[0] += 0.24257425742574257;
    result[1] += 0.7574257425742574;
  } else {
    result[0] += 0.8524590163934426;
    result[1] += 0.14754098360655737;
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6467750072479248047) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    result[0] += 0.3305439330543933;
    result[1] += 0.6694560669456067;
  }
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  
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
