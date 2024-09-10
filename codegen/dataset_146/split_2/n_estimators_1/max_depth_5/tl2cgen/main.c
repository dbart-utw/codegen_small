
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
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
            result[0] += 0.004629629629629629;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9861111111111112;
            result[5] += 0.009259259259259259;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0.16666666666666666;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0.9;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9285714285714286;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0.0012610340479192938;
            result[2] += 0;
            result[3] += 0.03026481715006305;
            result[4] += 0.031525851197982346;
            result[5] += 0.9369482976040353;
          } else {
            result[0] += 0;
            result[1] += 0.00558659217877095;
            result[2] += 0;
            result[3] += 0.24581005586592178;
            result[4] += 0.13966480446927373;
            result[5] += 0.6089385474860335;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0.029411764705882353;
            result[5] += 0.9117647058823529;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.8;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.005988023952095809;
            result[3] += 0.7245508982035929;
            result[4] += 0;
            result[5] += 0.2694610778443114;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.05;
            result[4] += 0.05;
            result[5] += 0.8;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)50) ) ) {
            result[0] += 0.075;
            result[1] += 0.8;
            result[2] += 0.025;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          } else {
            result[0] += 0.08695652173913043;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0;
            result[4] += 0.7934782608695652;
            result[5] += 0.07608695652173914;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
            result[0] += 0.12280701754385966;
            result[1] += 0.03508771929824562;
            result[2] += 0;
            result[3] += 0.10526315789473685;
            result[4] += 0.6315789473684211;
            result[5] += 0.10526315789473685;
          } else {
            result[0] += 0.08064516129032258;
            result[1] += 0.7258064516129032;
            result[2] += 0;
            result[3] += 0.04838709677419355;
            result[4] += 0.14516129032258066;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8999081726354453;
            result[1] += 0.0036730945821854912;
            result[2] += 0.011937557392102846;
            result[3] += 0.020202020202020204;
            result[4] += 0.048668503213957756;
            result[5] += 0.015610651974288337;
          } else {
            result[0] += 0.3063829787234043;
            result[1] += 0;
            result[2] += 0.06808510638297874;
            result[3] += 0.25106382978723407;
            result[4] += 0.06382978723404256;
            result[5] += 0.3106382978723405;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.09836065573770492;
            result[2] += 0.03278688524590164;
            result[3] += 0.11475409836065574;
            result[4] += 0.2459016393442623;
            result[5] += 0.5081967213114754;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12380952380952381;
            result[3] += 0.7047619047619048;
            result[4] += 0;
            result[5] += 0.17142857142857143;
          } else {
            result[0] += 0.02127659574468085;
            result[1] += 0;
            result[2] += 0.5957446808510638;
            result[3] += 0.23404255319148937;
            result[4] += 0;
            result[5] += 0.14893617021276595;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.4838709677419355;
            result[1] += 0;
            result[2] += 0.45161290322580644;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.06451612903225806;
          } else {
            result[0] += 0.004504504504504505;
            result[1] += 0;
            result[2] += 0.8907657657657658;
            result[3] += 0.09459459459459461;
            result[4] += 0;
            result[5] += 0.010135135135135137;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79) ) ) {
            result[0] += 0.8636363636363636;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0.045454545454545456;
            result[5] += 0;
          } else {
            result[0] += 0.03571428571428571;
            result[1] += 0;
            result[2] += 0.9642857142857143;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
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
    

    FILE* file = fopen("./codegen/dataset_146/split_2/test_data.csv", "r");
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
