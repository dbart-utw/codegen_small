
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
            result[0] += 0.02109704641350211;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9704641350210971;
            result[5] += 0.008438818565400843;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)54) ) ) {
            result[0] += 0.7538461538461538;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2153846153846154;
            result[5] += 0.03076923076923077;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17307692307692307;
            result[5] += 0.7884615384615384;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.5833333333333334;
            result[5] += 0.20833333333333334;
          } else {
            result[0] += 0;
            result[1] += 0.011658031088082901;
            result[2] += 0;
            result[3] += 0.04533678756476684;
            result[4] += 0.023316062176165803;
            result[5] += 0.9196891191709845;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
            result[0] += 0.012422360248447204;
            result[1] += 0.06832298136645963;
            result[2] += 0.055900621118012424;
            result[3] += 0.16770186335403728;
            result[4] += 0.11180124223602485;
            result[5] += 0.5838509316770186;
          } else {
            result[0] += 0.013245033112582781;
            result[1] += 0.026490066225165563;
            result[2] += 0.013245033112582781;
            result[3] += 0.695364238410596;
            result[4] += 0.013245033112582781;
            result[5] += 0.23841059602649006;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9666666666666667;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8846153846153846;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11538461538461539;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.2878787878787879;
            result[5] += 0.5757575757575758;
          } else {
            result[0] += 0.8338842975206612;
            result[1] += 0.019008264462809916;
            result[2] += 0.0008264462809917355;
            result[3] += 0.009917355371900827;
            result[4] += 0.11735537190082644;
            result[5] += 0.019008264462809916;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
            result[0] += 0.0111731843575419;
            result[1] += 0.0111731843575419;
            result[2] += 0.1005586592178771;
            result[3] += 0.4692737430167598;
            result[4] += 0.00558659217877095;
            result[5] += 0.4022346368715084;
          } else {
            result[0] += 0.75;
            result[1] += 0.008333333333333333;
            result[2] += 0.13333333333333333;
            result[3] += 0.016666666666666666;
            result[4] += 0.08333333333333333;
            result[5] += 0.008333333333333333;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03225806451612903;
            result[4] += 0;
            result[5] += 0.967741935483871;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06896551724137931;
            result[3] += 0.2413793103448276;
            result[4] += 0.13793103448275862;
            result[5] += 0.5517241379310345;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04285714285714286;
            result[3] += 0.9571428571428572;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          } else {
            result[0] += 0.01818181818181818;
            result[1] += 0;
            result[2] += 0.509090909090909;
            result[3] += 0.3181818181818182;
            result[4] += 0.00909090909090909;
            result[5] += 0.14545454545454545;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.6842105263157895;
            result[1] += 0.10526315789473684;
            result[2] += 0.05263157894736842;
            result[3] += 0;
            result[4] += 0.10526315789473684;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.23076923076923078;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6842105263157895;
            result[3] += 0.26842105263157895;
            result[4] += 0;
            result[5] += 0.04736842105263158;
          } else {
            result[0] += 0.013698630136986302;
            result[1] += 0;
            result[2] += 0.904109589041096;
            result[3] += 0.06392694063926942;
            result[4] += 0;
            result[5] += 0.018264840182648404;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.01125703564727955;
            result[1] += 0;
            result[2] += 0.9681050656660413;
            result[3] += 0.020637898686679174;
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
