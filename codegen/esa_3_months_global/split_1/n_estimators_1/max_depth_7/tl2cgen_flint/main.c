
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
  return 87;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec44c73))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea37dec))) ) ) {
                result[0] += 0.9993614303959132;
                result[1] += 0.0006385696040868455;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e878fb0))) ) ) {
                result[0] += 0.6068559185859668;
                result[1] += 0.39314408141403323;
              } else {
                result[0] += 0.9926376440460948;
                result[1] += 0.00736235595390525;
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
                result[0] += 0.8664192949907236;
                result[1] += 0.13358070500927643;
              } else {
                result[0] += 0.9915040906230334;
                result[1] += 0.008495909376966647;
              }
            }
          }
        }
      } else {
        if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40745c))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e85a166))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1ef9e))) ) ) {
                result[0] += 0.9672131147540983;
                result[1] += 0.03278688524590164;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.7658833768494343;
                result[1] += 0.23411662315056572;
              }
            } else {
              if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea446e))) ) ) {
                result[0] += 0.034038542103058234;
                result[1] += 0.9659614578969418;
              } else {
                result[0] += 0.5642317380352645;
                result[1] += 0.4357682619647355;
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1e5870))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9ace84))) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              } else {
                result[0] += 0.008215962441314555;
                result[1] += 0.9917840375586855;
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
                result[0] += 0.9997115661955581;
                result[1] += 0.00028843380444188056;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0bd498))) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea0ca6a))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e94b0f9))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0fca30))) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebf8a5d))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb73dc0))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0b0981))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e988e00))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea861ee))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.75;
                result[1] += 0.25;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_1/test_data.csv", "r");
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
