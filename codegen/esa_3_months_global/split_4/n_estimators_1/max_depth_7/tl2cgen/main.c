
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
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001743039640132337809) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6864930689334869385) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1098809279501438141) ) ) {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3185180723667144775) ) ) {
                result[0] += 0.9974426514589674;
                result[1] += 0.002557348541032657;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    } else {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001832863199524581432) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1994618251919746399) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
                result[0] += 0.7228464419475655;
                result[1] += 0.27715355805243447;
              } else {
                result[0] += 0.9939465719173576;
                result[1] += 0.006053428082642453;
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
                result[0] += 0.8063900810681927;
                result[1] += 0.19360991893180735;
              } else {
                result[0] += 0.28417721518987343;
                result[1] += 0.7158227848101266;
              }
            }
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
              if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001712674275040626526) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9995843724023276;
                result[1] += 0.00041562759767248546;
              }
            } else {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
                result[0] += 0.42320441988950275;
                result[1] += 0.5767955801104973;
              } else {
                result[0] += 0.2870855148342059;
                result[1] += 0.712914485165794;
              }
            }
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3085954785346984863) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                result[0] += 0.7926421404682275;
                result[1] += 0.20735785953177258;
              } else {
                result[0] += 0.5036674816625917;
                result[1] += 0.4963325183374083;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2987119108438491821) ) ) {
                result[0] += 0.0019128296215329963;
                result[1] += 0.9980871703784671;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7156386375427246094) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3444691747426986694) ) ) {
                result[0] += 0.11425073956951953;
                result[1] += 0.8857492604304804;
              } else {
                result[0] += 0.024847428073234524;
                result[1] += 0.9751525719267655;
              }
            }
          }
        }
      } else {
        if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8274533748626708984) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1449268683791160583) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2024775072932243347) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2677823752164840698) ) ) {
                result[0] += 0.3083511777301927;
                result[1] += 0.6916488222698073;
              } else {
                result[0] += 0.9988814317673378;
                result[1] += 0.0011185682326621924;
              }
            } else {
              if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.8068341612815856934) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.25675675675675674;
                result[1] += 0.7432432432432432;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1546342372894287109) ) ) {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
                result[0] += 0.9197166469893743;
                result[1] += 0.08028335301062574;
              } else {
                result[0] += 0.0014727540500736377;
                result[1] += 0.9985272459499264;
              }
            } else {
              if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.993042677640914917) ) ) {
                result[0] += 0.3225806451612903;
                result[1] += 0.6774193548387096;
              } else {
                result[0] += 0.008161044613710556;
                result[1] += 0.9918389553862894;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_4/test_data.csv", "r");
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
