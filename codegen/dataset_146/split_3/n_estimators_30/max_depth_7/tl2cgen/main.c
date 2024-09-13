
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
  if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)55) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)95.5) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2857142857142857;
                result[5] += 0.7142857142857143;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)79) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)105.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)67.5) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          } else {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)55) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.02702702702702703;
                result[5] += 0.972972972972973;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.8;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)69) ) ) {
            if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)62.5) ) ) {
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.005128205128205128;
                result[4] += 0.005128205128205128;
                result[5] += 0.9897435897435898;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0.25;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)67) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0.6;
              }
            }
          } else {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.056451612903225805;
                result[4] += 0.04032258064516129;
                result[5] += 0.9032258064516129;
              } else {
                result[0] += 0;
                result[1] += 0.03703703703703704;
                result[2] += 0;
                result[3] += 0.14814814814814817;
                result[4] += 0.4444444444444445;
                result[5] += 0.3703703703703704;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06;
                result[3] += 0.54;
                result[4] += 0.02;
                result[5] += 0.38;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.17391304347826086;
                result[4] += 0.021739130434782608;
                result[5] += 0.8043478260869565;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.14285714285714285;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0.7142857142857143;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.020202020202020204;
                result[4] += 0.020202020202020204;
                result[5] += 0.9595959595959596;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)83.5) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0.9;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.007352941176470589;
                result[3] += 0.948529411764706;
                result[4] += 0;
                result[5] += 0.04411764705882354;
              }
            }
          } else {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)76.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0.8571428571428571;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0.5555555555555556;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)70) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)54.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
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
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)50.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)81) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)100.5) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.016666666666666666;
                result[2] += 0.016666666666666666;
                result[3] += 0;
                result[4] += 0.9666666666666667;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
                result[0] += 0.16666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8333333333333334;
                result[5] += 0;
              } else {
                result[0] += 0.09090909090909091;
                result[1] += 0.7272727272727273;
                result[2] += 0.18181818181818182;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)60.5) ) ) {
                result[0] += 0;
                result[1] += 0.8;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)110.5) ) ) {
                result[0] += 0.12371134020618559;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08247422680412372;
                result[4] += 0.7628865979381444;
                result[5] += 0.030927835051546396;
              } else {
                result[0] += 0.125;
                result[1] += 0.3125;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0.0625;
                result[5] += 0.25;
              }
            }
          } else {
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)105) ) ) {
                result[0] += 0.06451612903225806;
                result[1] += 0.2903225806451613;
                result[2] += 0;
                result[3] += 0.03225806451612903;
                result[4] += 0.5483870967741935;
                result[5] += 0.06451612903225806;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
                result[0] += 0.9653304442036836;
                result[1] += 0.0010834236186348862;
                result[2] += 0;
                result[3] += 0.0021668472372697724;
                result[4] += 0.0314192849404117;
                result[5] += 0;
              } else {
                result[0] += 0.36363636363636365;
                result[1] += 0;
                result[2] += 0.056818181818181816;
                result[3] += 0.11363636363636363;
                result[4] += 0.1590909090909091;
                result[5] += 0.3068181818181818;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
            if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
                result[0] += 0.05128205128205128;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.15384615384615385;
                result[4] += 0.1794871794871795;
                result[5] += 0.6153846153846154;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.024691358024691357;
                result[3] += 0.7037037037037037;
                result[4] += 0.024691358024691357;
                result[5] += 0.24691358024691357;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)116) ) ) {
                result[0] += 0.06818181818181818;
                result[1] += 0;
                result[2] += 0.3409090909090909;
                result[3] += 0.045454545454545456;
                result[4] += 0.022727272727272728;
                result[5] += 0.5227272727272727;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)104.5) ) ) {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)109.5) ) ) {
                result[0] += 0.037037037037037035;
                result[1] += 0.1111111111111111;
                result[2] += 0.7037037037037037;
                result[3] += 0.07407407407407407;
                result[4] += 0;
                result[5] += 0.07407407407407407;
              } else {
                result[0] += 0.5217391304347827;
                result[1] += 0;
                result[2] += 0.2173913043478261;
                result[3] += 0.04347826086956522;
                result[4] += 0.2173913043478261;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9591836734693877;
                result[1] += 0;
                result[2] += 0.04081632653061224;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.8;
              } else {
                result[0] += 0;
                result[1] += 0.017857142857142856;
                result[2] += 0;
                result[3] += 0.7678571428571429;
                result[4] += 0;
                result[5] += 0.21428571428571427;
              }
            } else {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)96) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.10526315789473684;
                result[3] += 0.7894736842105263;
                result[4] += 0;
                result[5] += 0.10526315789473684;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.375;
                result[3] += 0.375;
                result[4] += 0;
                result[5] += 0.25;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0625;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.9375;
              }
            }
          } else {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)103.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.38461538461538464;
                result[2] += 0.15384615384615385;
                result[3] += 0.07692307692307693;
                result[4] += 0.38461538461538464;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)115.5) ) ) {
                result[0] += 0.01639344262295082;
                result[1] += 0.03278688524590164;
                result[2] += 0.8032786885245902;
                result[3] += 0.09836065573770492;
                result[4] += 0.04918032786885246;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)97.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)92.5) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)115.5) ) ) {
                result[0] += 0.010723860589812333;
                result[1] += 0;
                result[2] += 0.8123324396782842;
                result[3] += 0.1742627345844504;
                result[4] += 0;
                result[5] += 0.002680965147453083;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.006968641114982578;
                result[1] += 0;
                result[2] += 0.9512195121951219;
                result[3] += 0.04006968641114982;
                result[4] += 0;
                result[5] += 0.0017421602787456446;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)63) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9655172413793104;
                result[5] += 0.034482758620689655;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)62.5) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)57.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)56) ) ) {
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
                result[4] += 0.8214285714285714;
                result[5] += 0.17857142857142858;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)65.5) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)61) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
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
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)56) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)104) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
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
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)59) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.00516795865633075;
                result[2] += 0;
                result[3] += 0.02454780361757106;
                result[4] += 0.029715762273901807;
                result[5] += 0.9405684754521964;
              }
            } else {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0.008064516129032258;
                result[2] += 0.008064516129032258;
                result[3] += 0.16129032258064516;
                result[4] += 0.11290322580645161;
                result[5] += 0.7096774193548387;
              } else {
                result[0] += 0;
                result[1] += 0.024390243902439025;
                result[2] += 0;
                result[3] += 0.5121951219512195;
                result[4] += 0.024390243902439025;
                result[5] += 0.43902439024390244;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06896551724137931;
                result[3] += 0.41379310344827586;
                result[4] += 0;
                result[5] += 0.5172413793103449;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9067796610169492;
                result[4] += 0;
                result[5] += 0.09322033898305085;
              }
            }
          } else {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)76) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)64) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.027777777777777776;
                result[3] += 0.1111111111111111;
                result[4] += 0;
                result[5] += 0.8611111111111112;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)83.5) ) ) {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
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
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
            if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)87) ) ) {
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
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)52.5) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.09090909090909091;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9090909090909091;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0.023809523809523808;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9761904761904762;
                result[5] += 0;
              } else {
                result[0] += 0.14285714285714288;
                result[1] += 0.28571428571428575;
                result[2] += 0;
                result[3] += 0.28571428571428575;
                result[4] += 0.28571428571428575;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.034482758620689655;
                result[2] += 0.017241379310344827;
                result[3] += 0.15517241379310345;
                result[4] += 0.1724137931034483;
                result[5] += 0.6206896551724138;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
                result[0] += 0.03846153846153846;
                result[1] += 0.42307692307692296;
                result[2] += 0.07692307692307691;
                result[3] += 0.03846153846153846;
                result[4] += 0.3846153846153845;
                result[5] += 0.03846153846153846;
              } else {
                result[0] += 0.9162956366874444;
                result[1] += 0.010685663401602851;
                result[2] += 0.007123775601068567;
                result[3] += 0.005342831700801426;
                result[4] += 0.04363312555654498;
                result[5] += 0.01691896705253785;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)88.5) ) ) {
            if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0125;
                result[3] += 0.1375;
                result[4] += 0.1625;
                result[5] += 0.6875;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06611570247933884;
                result[3] += 0.5619834710743802;
                result[4] += 0.01652892561983471;
                result[5] += 0.35537190082644626;
              }
            } else {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
                result[0] += 0.01639344262295082;
                result[1] += 0.03278688524590164;
                result[2] += 0.04918032786885246;
                result[3] += 0.6065573770491803;
                result[4] += 0.22950819672131148;
                result[5] += 0.06557377049180328;
              } else {
                result[0] += 0.12962962962962962;
                result[1] += 0.07407407407407407;
                result[2] += 0.5277777777777778;
                result[3] += 0.1574074074074074;
                result[4] += 0.06481481481481481;
                result[5] += 0.046296296296296294;
              }
            }
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)86) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0.6666666666666666;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)92) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.9;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)87) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
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
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)87) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.90625;
                result[4] += 0;
                result[5] += 0.09375;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)98.5) ) ) {
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
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)100) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
            if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9375;
                result[4] += 0;
                result[5] += 0.0625;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8461538461538461;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.15384615384615385;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7692307692307693;
                result[3] += 0.07692307692307693;
                result[4] += 0;
                result[5] += 0.15384615384615385;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9230769230769231;
                result[3] += 0.07692307692307693;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)116.5) ) ) {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)76.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7787610619469026;
                result[3] += 0.18584070796460178;
                result[4] += 0;
                result[5] += 0.035398230088495575;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0.7777777777777778;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)109.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)98) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)111.5) ) ) {
                result[0] += 0.00930232558139535;
                result[1] += 0;
                result[2] += 0.9023255813953489;
                result[3] += 0.07906976744186048;
                result[4] += 0;
                result[5] += 0.00930232558139535;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)69.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0020533880903490765;
                result[1] += 0;
                result[2] += 0.9856262833675565;
                result[3] += 0.012320328542094458;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
            if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)76) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)99.5) ) ) {
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
                result[4] += 0.5;
                result[5] += 0.5;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          } else {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)52) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)80) ) ) {
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
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
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
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9615384615384616;
                result[5] += 0.038461538461538464;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)67.5) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7777777777777778;
                result[5] += 0.2222222222222222;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.025;
                result[4] += 0.013888888888888888;
                result[5] += 0.9611111111111111;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8888888888888888;
                result[5] += 0.1111111111111111;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.18633540372670807;
                result[4] += 0.07453416149068323;
                result[5] += 0.7391304347826086;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)72) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.35714285714285715;
                result[4] += 0.21428571428571427;
                result[5] += 0.42857142857142855;
              } else {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.041666666666666664;
                result[4] += 0.7083333333333334;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4;
                result[4] += 0.6;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.04938271604938271;
                result[3] += 0.19753086419753085;
                result[4] += 0;
                result[5] += 0.7530864197530864;
              }
            }
          } else {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4878048780487805;
                result[4] += 0.07317073170731707;
                result[5] += 0.43902439024390244;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9365079365079365;
                result[4] += 0;
                result[5] += 0.06349206349206349;
              }
            } else {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
                result[0] += 0.12;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.04;
                result[5] += 0.84;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7142857142857143;
                result[4] += 0;
                result[5] += 0.2857142857142857;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)94.5) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)98) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
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
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)52.5) ) ) {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9705882352941176;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.029411764705882353;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)51) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9333333333333333;
                result[5] += 0.06666666666666667;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)92) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
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
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0.043478260869565216;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.08695652173913043;
                result[5] += 0.8695652173913043;
              } else {
                result[0] += 0;
                result[1] += 0.1891891891891892;
                result[2] += 0;
                result[3] += 0.4594594594594595;
                result[4] += 0.05405405405405406;
                result[5] += 0.2972972972972973;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
                result[0] += 0.9377289377289377;
                result[1] += 0.005494505494505495;
                result[2] += 0;
                result[3] += 0.0009157509157509158;
                result[4] += 0.05036630036630037;
                result[5] += 0.005494505494505495;
              } else {
                result[0] += 0.45454545454545453;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2727272727272727;
                result[4] += 0.24242424242424243;
                result[5] += 0.030303030303030304;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)104.5) ) ) {
                result[0] += 0.15384615384615385;
                result[1] += 0.046153846153846156;
                result[2] += 0.09230769230769231;
                result[3] += 0.23076923076923078;
                result[4] += 0.1076923076923077;
                result[5] += 0.36923076923076925;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0.4166666666666667;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5833333333333334;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.060810810810810814;
                result[3] += 0.3918918918918919;
                result[4] += 0.02027027027027027;
                result[5] += 0.527027027027027;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
                result[0] += 0.20833333333333334;
                result[1] += 0;
                result[2] += 0.1875;
                result[3] += 0.16666666666666666;
                result[4] += 0.4375;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.08823529411764706;
                result[2] += 0.6470588235294118;
                result[3] += 0.058823529411764705;
                result[4] += 0;
                result[5] += 0.20588235294117646;
              }
            }
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)110.5) ) ) {
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)59.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16666666666666666;
                result[4] += 0.3333333333333333;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.014705882352941178;
                result[3] += 0.8823529411764707;
                result[4] += 0.04411764705882354;
                result[5] += 0.05882352941176471;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07142857142857142;
                result[3] += 0.5714285714285714;
                result[4] += 0;
                result[5] += 0.35714285714285715;
              }
            }
          } else {
            if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0.25;
                result[2] += 0.05;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.6538461538461539;
                result[4] += 0;
                result[5] += 0.09615384615384616;
              }
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0.6666666666666666;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8235294117647058;
                result[3] += 0.058823529411764705;
                result[4] += 0;
                result[5] += 0.11764705882352941;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)72) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
                result[0] += 0.1;
                result[1] += 0.03333333333333333;
                result[2] += 0.03333333333333333;
                result[3] += 0.1;
                result[4] += 0.23333333333333334;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.45454545454545453;
                result[3] += 0.5454545454545454;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)108.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
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
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8947368421052632;
                result[3] += 0.10526315789473684;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)76.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)80.5) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)50.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)113.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)114.5) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)85.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0.875;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.42857142857142855;
                result[3] += 0.5714285714285714;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.14285714285714285;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8571428571428571;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)74.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5555555555555556;
                result[3] += 0.4444444444444444;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9761904761904762;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.023809523809523808;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
            if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)111.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)94.5) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)92) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)91) ) ) {
                result[0] += 0.0036496350364963502;
                result[1] += 0;
                result[2] += 0.8996350364963503;
                result[3] += 0.0948905109489051;
                result[4] += 0;
                result[5] += 0.0018248175182481751;
              } else {
                result[0] += 0.004424778761061947;
                result[1] += 0;
                result[2] += 0.9867256637168141;
                result[3] += 0.008849557522123894;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
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
          }
        } else {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)95) ) ) {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)58) ) ) {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9;
                result[5] += 0.1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.18181818181818182;
                result[5] += 0.8181818181818182;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.21428571428571427;
                result[3] += 0;
                result[4] += 0.5714285714285714;
                result[5] += 0.21428571428571427;
              }
            }
          } else {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)39) ) ) {
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
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.9487179487179487;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.05128205128205128;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.16666666666666666;
                result[2] += 0;
                result[3] += 0.08333333333333333;
                result[4] += 0.25;
                result[5] += 0.5;
              }
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.010174418604651164;
                result[4] += 0.005813953488372093;
                result[5] += 0.9840116279069767;
              } else {
                result[0] += 0.011695906432748537;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07602339181286549;
                result[4] += 0.13450292397660818;
                result[5] += 0.7777777777777778;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)57.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.13580246913580246;
                result[4] += 0;
                result[5] += 0.8641975308641975;
              }
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.75;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8934426229508197;
                result[4] += 0.00819672131147541;
                result[5] += 0.09836065573770492;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05263157894736842;
                result[3] += 0.47368421052631576;
                result[4] += 0;
                result[5] += 0.47368421052631576;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)41.5) ) ) {
              result[0] += 0;
              result[1] += 1;
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
        } else {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)88.5) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)91) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)54) ) ) {
                result[0] += 0;
                result[1] += 1;
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
            } else {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)57.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.875;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.125;
                result[5] += 0;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)83.5) ) ) {
                result[0] += 0.9148936170212766;
                result[1] += 0.02127659574468085;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.06382978723404255;
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
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)78) ) ) {
                result[0] += 0;
                result[1] += 0.11764705882352941;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8823529411764706;
                result[5] += 0;
              } else {
                result[0] += 0.5384615384615384;
                result[1] += 0.07692307692307693;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3076923076923077;
                result[5] += 0.07692307692307693;
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.24074074074074073;
                result[1] += 0.037037037037037035;
                result[2] += 0;
                result[3] += 0.05555555555555555;
                result[4] += 0.5185185185185185;
                result[5] += 0.14814814814814814;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
                result[0] += 0.35714285714285715;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.30952380952380953;
                result[4] += 0.16666666666666666;
                result[5] += 0.16666666666666666;
              } else {
                result[0] += 0.949317738791423;
                result[1] += 0;
                result[2] += 0.003898635477582846;
                result[3] += 0.004873294346978557;
                result[4] += 0.038011695906432746;
                result[5] += 0.003898635477582846;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.019801980198019802;
                result[3] += 0.297029702970297;
                result[4] += 0.009900990099009901;
                result[5] += 0.6732673267326733;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.5076923076923077;
                result[4] += 0;
                result[5] += 0.2923076923076923;
              }
            } else {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)101.5) ) ) {
                result[0] += 0.20224719101123598;
                result[1] += 0.03370786516853933;
                result[2] += 0.24719101123595508;
                result[3] += 0.26966292134831465;
                result[4] += 0.20224719101123598;
                result[5] += 0.04494382022471911;
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
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)105) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)79) ) ) {
                result[0] += 0.6;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0.8888888888888888;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9552238805970149;
                result[1] += 0;
                result[2] += 0.04477611940298507;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)88) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)76.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8888888888888888;
                result[5] += 0.1111111111111111;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)109.5) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)55) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1111111111111111;
                result[4] += 0.7777777777777778;
                result[5] += 0.1111111111111111;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.14285714285714285;
                result[3] += 0.17857142857142858;
                result[4] += 0;
                result[5] += 0.6785714285714286;
              } else {
                result[0] += 0.058823529411764705;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7058823529411765;
                result[4] += 0;
                result[5] += 0.23529411764705882;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.014492753623188406;
                result[3] += 0.9565217391304348;
                result[4] += 0;
                result[5] += 0.028985507246376812;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)100.5) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4067796610169492;
                result[3] += 0.423728813559322;
                result[4] += 0;
                result[5] += 0.1694915254237288;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0.1;
              }
            } else {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.23076923076923078;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.7692307692307693;
              }
            }
          } else {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.76875;
                result[3] += 0.21875;
                result[4] += 0;
                result[5] += 0.0125;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)95.5) ) ) {
                result[0] += 0.6666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9380530973451328;
                result[3] += 0.061946902654867256;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)82) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)86) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)110.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)75) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8198198198198198;
                result[3] += 0.16216216216216217;
                result[4] += 0;
                result[5] += 0.018018018018018018;
              } else {
                result[0] += 0.025;
                result[1] += 0;
                result[2] += 0.975;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)123.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9781021897810219;
                result[3] += 0.021897810218978103;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.03508771929824561;
                result[1] += 0;
                result[2] += 0.9649122807017544;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)47) ) ) {
            if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)70) ) ) {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)105.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
                result[0] += 0.004651162790697674;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9953488372093023;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7837837837837838;
                result[5] += 0.21621621621621623;
              }
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
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)62) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)105.5) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
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
                result[4] += 0.26666666666666666;
                result[5] += 0.7333333333333333;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)72.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)70.5) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.027359781121751026;
                result[4] += 0.019151846785225718;
                result[5] += 0.9534883720930233;
              } else {
                result[0] += 0.07142857142857142;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0.42857142857142855;
                result[5] += 0.35714285714285715;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)74) ) ) {
                result[0] += 0.08333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9166666666666666;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.28169014084507044;
                result[4] += 0.014084507042253521;
                result[5] += 0.704225352112676;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9090909090909091;
                result[5] += 0.09090909090909091;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0.011235955056179775;
                result[2] += 0;
                result[3] += 0.3146067415730337;
                result[4] += 0.10112359550561797;
                result[5] += 0.5730337078651685;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.012345679012345678;
                result[3] += 0.16049382716049382;
                result[4] += 0.012345679012345678;
                result[5] += 0.8148148148148148;
              }
            }
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
                result[0] += 0.23076923076923078;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6153846153846154;
                result[5] += 0.15384615384615385;
              } else {
                result[0] += 0.010752688172043012;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3763440860215054;
                result[4] += 0;
                result[5] += 0.6129032258064516;
              }
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)69) ) ) {
                result[0] += 0.625;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.375;
              } else {
                result[0] += 0;
                result[1] += 0.004830917874396135;
                result[2] += 0.014492753623188406;
                result[3] += 0.8019323671497585;
                result[4] += 0.00966183574879227;
                result[5] += 0.16908212560386474;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)79) ) ) {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)98.5) ) ) {
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)56.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.7727272727272727;
                result[2] += 0;
                result[3] += 0.015151515151515152;
                result[4] += 0.18181818181818182;
                result[5] += 0.030303030303030304;
              }
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
                result[0] += 0.8571428571428571;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0;
              } else {
                result[0] += 0.13253012048192772;
                result[1] += 0.060240963855421686;
                result[2] += 0;
                result[3] += 0.012048192771084338;
                result[4] += 0.7710843373493976;
                result[5] += 0.024096385542168676;
              }
            }
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)72) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
                result[0] += 0.9166666666666666;
                result[1] += 0.08333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0625;
                result[1] += 0.15625;
                result[2] += 0;
                result[3] += 0.0625;
                result[4] += 0.6875;
                result[5] += 0.03125;
              }
            } else {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4;
                result[4] += 0.26666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0.9641350210970464;
                result[1] += 0.0031645569620253164;
                result[2] += 0;
                result[3] += 0.0031645569620253164;
                result[4] += 0.028481012658227847;
                result[5] += 0.0010548523206751054;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)82) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.05263157894736842;
                result[4] += 0.05263157894736842;
                result[5] += 0.8947368421052632;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.16666666666666666;
                result[4] += 0.3333333333333333;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0.75;
                result[4] += 0.013888888888888888;
                result[5] += 0.125;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2857142857142857;
                result[3] += 0.35714285714285715;
                result[4] += 0.023809523809523808;
                result[5] += 0.3333333333333333;
              }
            }
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
                result[0] += 0.09523809523809523;
                result[1] += 0.14285714285714285;
                result[2] += 0.3333333333333333;
                result[3] += 0.23809523809523808;
                result[4] += 0;
                result[5] += 0.19047619047619047;
              } else {
                result[0] += 0.7951807228915663;
                result[1] += 0.012048192771084338;
                result[2] += 0.08433734939759036;
                result[3] += 0;
                result[4] += 0.10843373493975904;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.014084507042253523;
                result[1] += 0;
                result[2] += 0.8732394366197184;
                result[3] += 0.04225352112676057;
                result[4] += 0;
                result[5] += 0.07042253521126762;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)91) ) ) {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)79) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8571428571428571;
                result[4] += 0;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          } else {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.75;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.04761904761904762;
                result[3] += 0.8571428571428572;
                result[4] += 0;
                result[5] += 0.09523809523809525;
              }
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)122.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
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
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)91.5) ) ) {
            if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)77.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 1;
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
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0625;
                result[3] += 0.375;
                result[4] += 0;
                result[5] += 0.5625;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5555555555555556;
                result[3] += 0.4444444444444444;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)105) ) ) {
                result[0] += 0.021739130434782608;
                result[1] += 0;
                result[2] += 0.8043478260869565;
                result[3] += 0.10869565217391304;
                result[4] += 0;
                result[5] += 0.06521739130434782;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)112) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)77.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7348484848484849;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.015151515151515152;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9296875;
                result[3] += 0.0703125;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)90.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9667250437828371;
                result[3] += 0.03327495621716287;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)74) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
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
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)59) ) ) {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.10526315789473684;
                result[5] += 0.8947368421052632;
              } else {
                result[0] += 0.11111111111111112;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666667;
                result[5] += 0.22222222222222224;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)74) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
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
            if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)86) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
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
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)59.5) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)55.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.16666666666666666;
                result[5] += 0.8333333333333334;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)105) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
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
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)67.5) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.017001545595054096;
                result[4] += 0.010819165378670788;
                result[5] += 0.9721792890262752;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)90.5) ) ) {
                result[0] += 0.007722007722007722;
                result[1] += 0.007722007722007722;
                result[2] += 0.003861003861003861;
                result[3] += 0.13513513513513514;
                result[4] += 0.11969111969111969;
                result[5] += 0.7258687258687259;
              } else {
                result[0] += 0.05555555555555555;
                result[1] += 0.3888888888888889;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0.1111111111111111;
                result[5] += 0.1111111111111111;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)77.5) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0.25;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77.5) ) ) {
                result[0] += 0.0625;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0.03125;
                result[5] += 0.65625;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.6;
                result[4] += 0;
                result[5] += 0.2;
              }
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9212598425196851;
                result[4] += 0;
                result[5] += 0.07874015748031496;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)60) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.4444444444444444;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5555555555555556;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)107) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)101.5) ) ) {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)69.5) ) ) {
                result[0] += 0.011627906976744188;
                result[1] += 0.011627906976744188;
                result[2] += 0;
                result[3] += 0.023255813953488375;
                result[4] += 0.9069767441860466;
                result[5] += 0.04651162790697675;
              } else {
                result[0] += 0;
                result[1] += 0.11764705882352941;
                result[2] += 0.23529411764705882;
                result[3] += 0.17647058823529413;
                result[4] += 0.17647058823529413;
                result[5] += 0.29411764705882354;
              }
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 0.2857142857142857;
                result[2] += 0;
                result[3] += 0.21428571428571427;
                result[4] += 0.35714285714285715;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0;
                result[1] += 0.9230769230769231;
                result[2] += 0;
                result[3] += 0.05128205128205128;
                result[4] += 0.02564102564102564;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)66.5) ) ) {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
                result[0] += 0.8997289972899729;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1002710027100271;
                result[5] += 0;
              } else {
                result[0] += 0.27350427350427353;
                result[1] += 0;
                result[2] += 0.07692307692307693;
                result[3] += 0.07692307692307693;
                result[4] += 0.42735042735042733;
                result[5] += 0.1452991452991453;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
                result[0] += 0.04377104377104377;
                result[1] += 0.003367003367003367;
                result[2] += 0.08417508417508418;
                result[3] += 0.3838383838383838;
                result[4] += 0.07744107744107744;
                result[5] += 0.4074074074074074;
              } else {
                result[0] += 0.32142857142857145;
                result[1] += 0.017857142857142856;
                result[2] += 0.4642857142857143;
                result[3] += 0.10714285714285714;
                result[4] += 0;
                result[5] += 0.08928571428571429;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
                result[0] += 0.7868852459016393;
                result[1] += 0.01092896174863388;
                result[2] += 0;
                result[3] += 0.01092896174863388;
                result[4] += 0.17486338797814208;
                result[5] += 0.01639344262295082;
              } else {
                result[0] += 0.994140625;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.005859375;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)92) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0.2222222222222222;
                result[4] += 0.1111111111111111;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
        if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)69) ) ) {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
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
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
                result[0] += 0;
                result[1] += 0.058823529411764705;
                result[2] += 0.058823529411764705;
                result[3] += 0.7843137254901961;
                result[4] += 0;
                result[5] += 0.09803921568627451;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2727272727272727;
                result[3] += 0.09090909090909091;
                result[4] += 0.18181818181818182;
                result[5] += 0.45454545454545453;
              }
            } else {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)101) ) ) {
                result[0] += 0.038461538461538464;
                result[1] += 0.038461538461538464;
                result[2] += 0.25;
                result[3] += 0.40384615384615385;
                result[4] += 0;
                result[5] += 0.2692307692307692;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)104.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)116.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)103.5) ) ) {
                result[0] += 0.005494505494505496;
                result[1] += 0;
                result[2] += 0.7967032967032968;
                result[3] += 0.18681318681318684;
                result[4] += 0.005494505494505496;
                result[5] += 0.005494505494505496;
              } else {
                result[0] += 0.07692307692307693;
                result[1] += 0;
                result[2] += 0.4230769230769231;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.2857142857142857;
                result[1] += 0;
                result[2] += 0.7142857142857143;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)97) ) ) {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)87) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)90.5) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)114) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)108) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)99) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)111.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)101.5) ) ) {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)121) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9603960396039604;
                result[3] += 0.039603960396039604;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6363636363636364;
                result[3] += 0.36363636363636365;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9932735426008968;
                result[3] += 0.006726457399103139;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)93.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)100) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)62) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)76.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5384615384615384;
                result[5] += 0.46153846153846156;
              } else {
                result[0] += 0.05128205128205128;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8974358974358975;
                result[5] += 0.05128205128205128;
              }
            }
          } else {
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)63) ) ) {
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
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)63) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)53.5) ) ) {
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
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)52.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9;
                result[5] += 0.1;
              }
            } else {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
                result[0] += 0.002805049088359046;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.02244039270687237;
                result[4] += 0.008415147265077139;
                result[5] += 0.9663394109396914;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5833333333333334;
                result[5] += 0.4166666666666667;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)61) ) ) {
                result[0] += 0.9444444444444444;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.05555555555555555;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4;
                result[5] += 0.6;
              }
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0.010526315789473684;
                result[2] += 0;
                result[3] += 0.031578947368421054;
                result[4] += 0.11578947368421053;
                result[5] += 0.8421052631578947;
              } else {
                result[0] += 0;
                result[1] += 0.044897959183673466;
                result[2] += 0.004081632653061225;
                result[3] += 0.40408163265306124;
                result[4] += 0.053061224489795916;
                result[5] += 0.49387755102040815;
              }
            }
          } else {
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8701298701298701;
                result[4] += 0;
                result[5] += 0.12987012987012986;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)97) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
                result[0] += 0.4090909090909091;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3409090909090909;
                result[5] += 0;
              } else {
                result[0] += 0.058333333333333334;
                result[1] += 0.025;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8833333333333333;
                result[5] += 0.03333333333333333;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0.9714285714285714;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.02857142857142857;
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
          } else {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)47.5) ) ) {
                result[0] += 0.07142857142857142;
                result[1] += 0.9285714285714286;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.1724137931034483;
                result[1] += 0.10344827586206896;
                result[2] += 0;
                result[3] += 0.20689655172413793;
                result[4] += 0.41379310344827586;
                result[5] += 0.10344827586206896;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
                result[0] += 0.938755980861244;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.010526315789473684;
                result[4] += 0.04019138755980861;
                result[5] += 0.010526315789473684;
              } else {
                result[0] += 0.4142857142857143;
                result[1] += 0.04285714285714286;
                result[2] += 0.02857142857142857;
                result[3] += 0.2;
                result[4] += 0.2571428571428571;
                result[5] += 0.05714285714285714;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
                result[0] += 0;
                result[1] += 0.43333333333333335;
                result[2] += 0.03333333333333333;
                result[3] += 0;
                result[4] += 0.5333333333333333;
                result[5] += 0;
              } else {
                result[0] += 0.004016064257028112;
                result[1] += 0.004016064257028112;
                result[2] += 0.060240963855421686;
                result[3] += 0.39357429718875503;
                result[4] += 0.05220883534136546;
                result[5] += 0.4859437751004016;
              }
            } else {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0.7777777777777778;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.08695652173913043;
                result[1] += 0;
                result[2] += 0.782608695652174;
                result[3] += 0.021739130434782608;
                result[4] += 0;
                result[5] += 0.10869565217391304;
              }
            }
          } else {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)91.5) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
                result[0] += 0.1527777777777778;
                result[1] += 0.027777777777777776;
                result[2] += 0.4722222222222222;
                result[3] += 0.05555555555555555;
                result[4] += 0.125;
                result[5] += 0.16666666666666666;
              } else {
                result[0] += 0.8125;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1875;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)104) ) ) {
                result[0] += 0.9074074074074074;
                result[1] += 0;
                result[2] += 0.05555555555555555;
                result[3] += 0;
                result[4] += 0.037037037037037035;
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
          }
        }
      } else {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)111.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06493506493506493;
                result[3] += 0.8961038961038961;
                result[4] += 0;
                result[5] += 0.03896103896103896;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0.4444444444444444;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)113.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)100) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)116.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)95.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)68.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8636363636363636;
                result[3] += 0.13636363636363635;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)110) ) ) {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)107) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          }
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
        if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)103.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5925925925925926;
                result[3] += 0.4074074074074074;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
                result[0] += 0.5714285714285714;
                result[1] += 0;
                result[2] += 0.42857142857142855;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.011152416356877323;
                result[1] += 0;
                result[2] += 0.9070631970260223;
                result[3] += 0.08178438661710037;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          } else {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)124.5) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9705882352941176;
                result[3] += 0.029411764705882353;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)105) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.038461538461538464;
                result[1] += 0;
                result[2] += 0.9615384615384616;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)86) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)55) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)68.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.6;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.4;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)60) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)63) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)77.5) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)72) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.03125;
                result[5] += 0.96875;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)74) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)78) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
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
        }
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61) ) ) {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)60.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)62) ) ) {
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
                result[3] += 0.007233273056057866;
                result[4] += 0.003616636528028933;
                result[5] += 0.9891500904159132;
              }
            }
          } else {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5263157894736842;
                result[4] += 0;
                result[5] += 0.47368421052631576;
              } else {
                result[0] += 0.025;
                result[1] += 0;
                result[2] += 0.025;
                result[3] += 0.075;
                result[4] += 0.075;
                result[5] += 0.8;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)77.5) ) ) {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)62) ) ) {
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
                result[4] += 0.45454545454545453;
                result[5] += 0.5454545454545454;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0.13333333333333333;
                result[5] += 0.5333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07751937984496124;
                result[4] += 0.031007751937984496;
                result[5] += 0.8914728682170543;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          }
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.045454545454545456;
                result[4] += 0.8636363636363636;
                result[5] += 0.09090909090909091;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06896551724137931;
                result[4] += 0.06896551724137931;
                result[5] += 0.8620689655172413;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05;
                result[3] += 0.35;
                result[4] += 0;
                result[5] += 0.6;
              } else {
                result[0] += 0.019230769230769232;
                result[1] += 0.00641025641025641;
                result[2] += 0.02564102564102564;
                result[3] += 0.7564102564102564;
                result[4] += 0;
                result[5] += 0.19230769230769232;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)79.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)114.5) ) ) {
                result[0] += 0.021739130434782608;
                result[1] += 0;
                result[2] += 0.13043478260869565;
                result[3] += 0.043478260869565216;
                result[4] += 0;
                result[5] += 0.8043478260869565;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)90) ) ) {
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
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)99) ) ) {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)115.5) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)48.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.01639344262295082;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9836065573770492;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)56) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)107) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
                result[0] += 0.041666666666666664;
                result[1] += 0.14583333333333334;
                result[2] += 0;
                result[3] += 0.020833333333333332;
                result[4] += 0.08333333333333333;
                result[5] += 0.7083333333333334;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)67) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4444444444444444;
                result[4] += 0.1111111111111111;
                result[5] += 0.4444444444444444;
              } else {
                result[0] += 0;
                result[1] += 0.8888888888888888;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.1111111111111111;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)41.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)104.5) ) ) {
                result[0] += 0.023809523809523808;
                result[1] += 0.09523809523809523;
                result[2] += 0.047619047619047616;
                result[3] += 0.19047619047619047;
                result[4] += 0.6428571428571429;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0;
                result[4] += 0.16666666666666666;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0.9280701754385965;
                result[1] += 0;
                result[2] += 0.0017543859649122807;
                result[3] += 0.013157894736842105;
                result[4] += 0.04824561403508772;
                result[5] += 0.008771929824561403;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
                result[0] += 0.08;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.32;
                result[4] += 0.12;
                result[5] += 0.28;
              } else {
                result[0] += 0.9230769230769231;
                result[1] += 0;
                result[2] += 0.07692307692307693;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4444444444444444;
                result[4] += 0.05555555555555555;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.03225806451612903;
                result[4] += 0;
                result[5] += 0.967741935483871;
              }
            } else {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.03125;
                result[3] += 0.3854166666666667;
                result[4] += 0.03125;
                result[5] += 0.5520833333333334;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16393442622950818;
                result[3] += 0.639344262295082;
                result[4] += 0;
                result[5] += 0.19672131147540983;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
            if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0.017543859649122806;
                result[2] += 0.15789473684210525;
                result[3] += 0.7192982456140351;
                result[4] += 0;
                result[5] += 0.10526315789473684;
              } else {
                result[0] += 0;
                result[1] += 0.375;
                result[2] += 0.375;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.25;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.6;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)91) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)95) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)67) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.17647058823529413;
                result[4] += 0;
                result[5] += 0.8235294117647058;
              }
            } else {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)80) ) ) {
                result[0] += 0.02857142857142857;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.4857142857142857;
                result[4] += 0.22857142857142856;
                result[5] += 0.05714285714285714;
              } else {
                result[0] += 0.14736842105263157;
                result[1] += 0.07368421052631578;
                result[2] += 0.7052631578947368;
                result[3] += 0.031578947368421054;
                result[4] += 0;
                result[5] += 0.042105263157894736;
              }
            }
          } else {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
                result[0] += 0.9666666666666667;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.03333333333333333;
                result[5] += 0;
              } else {
                result[0] += 0.4;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0.8888888888888888;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.10526315789473684;
                result[3] += 0.47368421052631576;
                result[4] += 0;
                result[5] += 0.42105263157894735;
              } else {
                result[0] += 0.020202020202020204;
                result[1] += 0;
                result[2] += 0.6262626262626263;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.020202020202020204;
              }
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9666666666666667;
                result[3] += 0.03333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
                result[0] += 0.6666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0.00432900432900433;
                result[1] += 0;
                result[2] += 0.8701298701298702;
                result[3] += 0.12121212121212123;
                result[4] += 0;
                result[5] += 0.00432900432900433;
              }
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9799554565701559;
                result[3] += 0.0200445434298441;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
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
                result[4] += 0.7777777777777778;
                result[5] += 0.2222222222222222;
              }
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.14285714285714285;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0.7142857142857143;
              }
            }
          } else {
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)61.5) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)48) ) ) {
                result[0] += 0;
                result[1] += 1;
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
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)80) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
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
                result[4] += 0.03225806451612903;
                result[5] += 0.967741935483871;
              }
            } else {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)68.5) ) ) {
                result[0] += 0;
                result[1] += 0.05555555555555555;
                result[2] += 0;
                result[3] += 0.05555555555555555;
                result[4] += 0.5555555555555556;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62) ) ) {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)73) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
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
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.041666666666666664;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9583333333333334;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)92.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)51) ) ) {
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
                result[3] += 0.029754204398447608;
                result[4] += 0.014230271668822769;
                result[5] += 0.9560155239327296;
              }
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.05555555555555555;
                result[4] += 0.05555555555555555;
                result[5] += 0.8888888888888888;
              } else {
                result[0] += 0.038461538461538464;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.46153846153846156;
                result[4] += 0;
                result[5] += 0.5;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)73) ) ) {
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
                result[3] += 0.02631578947368421;
                result[4] += 0;
                result[5] += 0.9736842105263158;
              }
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3448275862068966;
                result[4] += 0;
                result[5] += 0.6551724137931034;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)78) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08333333333333333;
                result[4] += 0;
                result[5] += 0.9166666666666666;
              } else {
                result[0] += 0.02197802197802198;
                result[1] += 0;
                result[2] += 0.02197802197802198;
                result[3] += 0.7802197802197802;
                result[4] += 0;
                result[5] += 0.17582417582417584;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)52.5) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)44.5) ) ) {
            result[0] += 0;
            result[1] += 1;
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
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)60.5) ) ) {
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
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)31.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)113.5) ) ) {
                result[0] += 0;
                result[1] += 1;
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
        }
      } else {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
                result[0] += 0.008264462809917356;
                result[1] += 0.024793388429752067;
                result[2] += 0;
                result[3] += 0.008264462809917356;
                result[4] += 0.9421487603305785;
                result[5] += 0.01652892561983471;
              } else {
                result[0] += 0.38461538461538464;
                result[1] += 0.015384615384615385;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5384615384615384;
                result[5] += 0.06153846153846154;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
                result[0] += 0.9534883720930233;
                result[1] += 0.046511627906976744;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0975609756097561;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2073170731707317;
                result[4] += 0.4146341463414634;
                result[5] += 0.2804878048780488;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
                result[0] += 0.23809523809523808;
                result[1] += 0.23809523809523808;
                result[2] += 0;
                result[3] += 0.11904761904761904;
                result[4] += 0.11904761904761904;
                result[5] += 0.2857142857142857;
              } else {
                result[0] += 0.9294935451837141;
                result[1] += 0.0099304865938431;
                result[2] += 0.00099304865938431;
                result[3] += 0.01092353525322741;
                result[4] += 0.04369414101290964;
                result[5] += 0.00496524329692155;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)68.5) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)49.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0;
                result[4] += 0.16666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2564102564102564;
                result[4] += 0;
                result[5] += 0.7435897435897436;
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
                result[0] += 0.005235602094240838;
                result[1] += 0.02617801047120419;
                result[2] += 0.015706806282722512;
                result[3] += 0.6858638743455497;
                result[4] += 0.010471204188481676;
                result[5] += 0.25654450261780104;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.13513513513513514;
                result[3] += 0.2702702702702703;
                result[4] += 0;
                result[5] += 0.5945945945945946;
              }
            }
          } else {
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)89) ) ) {
                result[0] += 0.3181818181818182;
                result[1] += 0;
                result[2] += 0.13636363636363635;
                result[3] += 0.36363636363636365;
                result[4] += 0.18181818181818182;
                result[5] += 0;
              } else {
                result[0] += 0.8970588235294118;
                result[1] += 0;
                result[2] += 0.04411764705882353;
                result[3] += 0;
                result[4] += 0.058823529411764705;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 0.03773584905660377;
                result[2] += 0.6132075471698113;
                result[3] += 0.11320754716981132;
                result[4] += 0;
                result[5] += 0.2358490566037736;
              } else {
                result[0] += 0.761904761904762;
                result[1] += 0;
                result[2] += 0.14285714285714288;
                result[3] += 0;
                result[4] += 0.09523809523809525;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)81) ) ) {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.171875;
                result[3] += 0.703125;
                result[4] += 0;
                result[5] += 0.125;
              }
            }
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)101) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.045454545454545456;
                result[3] += 0.9545454545454546;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7;
                result[3] += 0.3;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.14285714285714285;
                result[3] += 0.8571428571428571;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8695652173913043;
                result[3] += 0.13043478260869565;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)121) ) ) {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)97) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              }
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)102.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)106) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)115.5) ) ) {
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)71) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)62) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
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
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4814814814814815;
                result[3] += 0.14814814814814817;
                result[4] += 0;
                result[5] += 0.3703703703703704;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8683385579937304;
                result[3] += 0.12539184952978055;
                result[4] += 0;
                result[5] += 0.006269592476489028;
              }
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)85) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)93) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0019267822736030828;
                result[1] += 0;
                result[2] += 0.9788053949903661;
                result[3] += 0.019267822736030827;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)73.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)58.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)83.5) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
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
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)58.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
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
        }
      }
    } else {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
            if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)74.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7777777777777778;
                result[4] += 0;
                result[5] += 0.2222222222222222;
              }
            }
          } else {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)50) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)92) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.014516129032258065;
                result[4] += 0.0032258064516129032;
                result[5] += 0.9822580645161291;
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
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06666666666666667;
                result[4] += 0.9333333333333333;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.09467455621301775;
                result[4] += 0.047337278106508875;
                result[5] += 0.8579881656804734;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.09090909090909091;
                result[4] += 0.09090909090909091;
                result[5] += 0.8181818181818182;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.782608695652174;
                result[4] += 0;
                result[5] += 0.21739130434782608;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)54.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.014705882352941176;
                result[4] += 0.029411764705882353;
                result[5] += 0.9558823529411765;
              } else {
                result[0] += 0;
                result[1] += 0.017857142857142856;
                result[2] += 0;
                result[3] += 0.26785714285714285;
                result[4] += 0.14285714285714285;
                result[5] += 0.5714285714285714;
              }
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)86) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9468085106382979;
                result[4] += 0;
                result[5] += 0.05319148936170213;
              }
            } else {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0.8571428571428571;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9;
                result[5] += 0.1;
              } else {
                result[0] += 0;
                result[1] += 0.017699115044247787;
                result[2] += 0.035398230088495575;
                result[3] += 0.3893805309734513;
                result[4] += 0;
                result[5] += 0.5575221238938053;
              }
            } else {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)107) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.6;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)61.5) ) ) {
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)60.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
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
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)46) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)52.5) ) ) {
                result[0] += 0;
                result[1] += 1;
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
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.015873015873015872;
                result[1] += 0.015873015873015872;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9682539682539683;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)54.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0.4117647058823529;
                result[2] += 0.23529411764705882;
                result[3] += 0.11764705882352941;
                result[4] += 0.23529411764705882;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9642857142857143;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.03571428571428571;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8823529411764706;
                result[5] += 0.11764705882352941;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)87) ) ) {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.975609756097561;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.024390243902439025;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)72.5) ) ) {
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
                result[3] += 0.23076923076923078;
                result[4] += 0.2564102564102564;
                result[5] += 0.5128205128205128;
              }
            } else {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0.02127659574468085;
                result[2] += 0;
                result[3] += 0.7021276595744681;
                result[4] += 0;
                result[5] += 0.2765957446808511;
              } else {
                result[0] += 0;
                result[1] += 0.4;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0.5;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)105.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
                result[0] += 0.2857142857142857;
                result[1] += 0.12244897959183673;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5918367346938775;
                result[5] += 0;
              } else {
                result[0] += 0.9197475202885482;
                result[1] += 0;
                result[2] += 0.008115419296663661;
                result[3] += 0.017132551848512173;
                result[4] += 0.045987376014427414;
                result[5] += 0.009017132551848512;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)116) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0.4166666666666667;
                result[2] += 0.16666666666666666;
                result[3] += 0;
                result[4] += 0.4166666666666667;
                result[5] += 0;
              } else {
                result[0] += 0.03571428571428572;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6071428571428572;
                result[4] += 0.10714285714285715;
                result[5] += 0.25000000000000006;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7857142857142857;
                result[3] += 0.07142857142857142;
                result[4] += 0;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0.8837209302325582;
                result[1] += 0;
                result[2] += 0.11627906976744186;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
        if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.375;
                result[4] += 0.125;
                result[5] += 0.5;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)95) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
                result[0] += 0.021739130434782608;
                result[1] += 0.010869565217391304;
                result[2] += 0.07608695652173914;
                result[3] += 0.6847826086956522;
                result[4] += 0.043478260869565216;
                result[5] += 0.16304347826086957;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4444444444444444;
                result[3] += 0.2222222222222222;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
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
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)79) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05263157894736842;
                result[3] += 0.10526315789473684;
                result[4] += 0;
                result[5] += 0.8421052631578947;
              }
            } else {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)115.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8125;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.1875;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          } else {
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)94.5) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
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
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0.8571428571428571;
              }
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.01834862385321101;
                result[1] += 0.009174311926605505;
                result[2] += 0.7706422018348624;
                result[3] += 0.11926605504587157;
                result[4] += 0.01834862385321101;
                result[5] += 0.06422018348623854;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)92.5) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.2;
                result[4] += 0.4;
                result[5] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)73.5) ) ) {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5245901639344263;
                result[3] += 0.4098360655737705;
                result[4] += 0;
                result[5] += 0.06557377049180328;
              } else {
                result[0] += 0.017543859649122806;
                result[1] += 0;
                result[2] += 0.8099415204678363;
                result[3] += 0.15204678362573099;
                result[4] += 0;
                result[5] += 0.02046783625730994;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)86.5) ) ) {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)118) ) ) {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)118.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9655172413793104;
                result[3] += 0.034482758620689655;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)95.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
                result[0] += 0.02;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.92;
                result[5] += 0.06;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.027777777777777776;
                result[4] += 0.6388888888888888;
                result[5] += 0.3333333333333333;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.006289308176100629;
                result[4] += 0.0047169811320754715;
                result[5] += 0.9889937106918238;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.22807017543859648;
                result[4] += 0;
                result[5] += 0.7719298245614035;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)64.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)72) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0.3;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
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
          } else {
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)57.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.017543859649122806;
                result[2] += 0;
                result[3] += 0.14619883040935672;
                result[4] += 0.05263157894736842;
                result[5] += 0.783625730994152;
              }
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0.07272727272727272;
                result[2] += 0;
                result[3] += 0.18181818181818182;
                result[4] += 0.09090909090909091;
                result[5] += 0.6545454545454545;
              } else {
                result[0] += 0.009708737864077669;
                result[1] += 0.009708737864077669;
                result[2] += 0;
                result[3] += 0.6650485436893204;
                result[4] += 0;
                result[5] += 0.3155339805825243;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)63) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
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
            } else {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0.6666666666666666;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.125;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.625;
              }
            }
          } else {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)123) ) ) {
              result[0] += 0;
              result[1] += 1;
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
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)93) ) ) {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
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
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
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
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)114.5) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)54) ) ) {
                result[0] += 0.8571428571428571;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0;
              } else {
                result[0] += 0.03225806451612904;
                result[1] += 0.021505376344086027;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.913978494623656;
                result[5] += 0.03225806451612904;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
                result[0] += 0.07692307692307693;
                result[1] += 0.5384615384615384;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.07692307692307693;
                result[5] += 0.3076923076923077;
              } else {
                result[0] += 0.5058823529411764;
                result[1] += 0;
                result[2] += 0.03529411764705882;
                result[3] += 0.023529411764705882;
                result[4] += 0.4235294117647059;
                result[5] += 0.011764705882352941;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
                result[0] += 0.13333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.13333333333333333;
                result[4] += 0.13333333333333333;
                result[5] += 0.6;
              } else {
                result[0] += 0.9363449691991786;
                result[1] += 0.006160164271047228;
                result[2] += 0;
                result[3] += 0.026694045174537988;
                result[4] += 0.028747433264887063;
                result[5] += 0.002053388090349076;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)107) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 0.02631578947368421;
                result[2] += 0.02631578947368421;
                result[3] += 0.23684210526315788;
                result[4] += 0.13157894736842105;
                result[5] += 0.5789473684210527;
              } else {
                result[0] += 0;
                result[1] += 0.023952095808383235;
                result[2] += 0.11377245508982035;
                result[3] += 0.592814371257485;
                result[4] += 0.023952095808383235;
                result[5] += 0.24550898203592814;
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
                result[0] += 0.04054054054054054;
                result[1] += 0.02702702702702703;
                result[2] += 0.33783783783783783;
                result[3] += 0.35135135135135137;
                result[4] += 0.13513513513513514;
                result[5] += 0.10810810810810811;
              } else {
                result[0] += 0.09090909090909091;
                result[1] += 0;
                result[2] += 0.9090909090909091;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
                result[0] += 0.0875;
                result[1] += 0.0125;
                result[2] += 0.7875;
                result[3] += 0.025;
                result[4] += 0;
                result[5] += 0.0875;
              } else {
                result[0] += 0.2631578947368421;
                result[1] += 0;
                result[2] += 0.05263157894736842;
                result[3] += 0;
                result[4] += 0.6842105263157895;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
                result[0] += 0.9818181818181818;
                result[1] += 0;
                result[2] += 0.01818181818181818;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.20000000000000004;
                result[1] += 0;
                result[2] += 0.7000000000000001;
                result[3] += 0.10000000000000002;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)87) ) ) {
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)70.5) ) ) {
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
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06060606060606061;
                result[3] += 0.7272727272727273;
                result[4] += 0;
                result[5] += 0.21212121212121213;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          } else {
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)89.5) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)38.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.2777777777777778;
                result[4] += 0;
                result[5] += 0.2222222222222222;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)109) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)80) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9473684210526315;
                result[3] += 0.05263157894736842;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)107.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9512195121951219;
                result[3] += 0.04878048780487805;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)107) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8260869565217391;
                result[3] += 0.13043478260869565;
                result[4] += 0;
                result[5] += 0.043478260869565216;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4722222222222222;
                result[3] += 0.5277777777777778;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8108108108108109;
                result[3] += 0.1891891891891892;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)99) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9509803921568627;
                result[3] += 0.049019607843137254;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)96) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)113) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9384615384615385;
                result[3] += 0.06153846153846154;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0057306590257879654;
                result[1] += 0;
                result[2] += 0.994269340974212;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)82) ) ) {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)45) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.004329004329004329;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9826839826839827;
                result[5] += 0.012987012987012988;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)66) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8888888888888888;
                result[5] += 0;
              } else {
                result[0] += 0.9848484848484849;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.015151515151515152;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.034482758620689655;
                result[5] += 0.9655172413793104;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
                result[0] += 0.04;
                result[1] += 0.08;
                result[2] += 0;
                result[3] += 0.4;
                result[4] += 0.36;
                result[5] += 0.12;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)78.5) ) ) {
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)75) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0.02702702702702703;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9459459459459459;
                result[5] += 0.02702702702702703;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          } else {
            if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.33333333333333337;
                result[4] += 0.5000000000000001;
                result[5] += 0.16666666666666669;
              } else {
                result[0] += 0;
                result[1] += 0.0012642225031605564;
                result[2] += 0;
                result[3] += 0.029077117572692796;
                result[4] += 0.025284450063211124;
                result[5] += 0.9443742098609356;
              }
            } else {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
                result[0] += 0.07142857142857142;
                result[1] += 0.07142857142857142;
                result[2] += 0;
                result[3] += 0.11904761904761904;
                result[4] += 0.6190476190476191;
                result[5] += 0.11904761904761904;
              } else {
                result[0] += 0.13043478260869565;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.391304347826087;
                result[4] += 0;
                result[5] += 0.4782608695652174;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5833333333333334;
                result[4] += 0.25;
                result[5] += 0.16666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1888111888111888;
                result[4] += 0.006993006993006993;
                result[5] += 0.8041958041958042;
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)76) ) ) {
                result[0] += 0.08333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0.75;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.004329004329004329;
                result[3] += 0.8484848484848485;
                result[4] += 0;
                result[5] += 0.1471861471861472;
              }
            } else {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0.0380952380952381;
                result[2] += 0.06666666666666667;
                result[3] += 0.5238095238095238;
                result[4] += 0;
                result[5] += 0.37142857142857144;
              } else {
                result[0] += 0.26666666666666666;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.03333333333333333;
                result[4] += 0.06666666666666667;
                result[5] += 0.43333333333333335;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)100.5) ) ) {
                result[0] += 0.08108108108108109;
                result[1] += 0.06756756756756757;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8513513513513513;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9230769230769231;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.07692307692307693;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
                result[0] += 0.30434782608695654;
                result[1] += 0.2608695652173913;
                result[2] += 0;
                result[3] += 0.043478260869565216;
                result[4] += 0.2608695652173913;
                result[5] += 0.13043478260869565;
              } else {
                result[0] += 0.9383116883116883;
                result[1] += 0.007575757575757576;
                result[2] += 0.0010822510822510823;
                result[3] += 0.006493506493506494;
                result[4] += 0.045454545454545456;
                result[5] += 0.0010822510822510823;
              }
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
                result[0] += 0.0625;
                result[1] += 0;
                result[2] += 0.1875;
                result[3] += 0.59375;
                result[4] += 0.03125;
                result[5] += 0.125;
              } else {
                result[0] += 0.7272727272727273;
                result[1] += 0.11363636363636363;
                result[2] += 0.11363636363636363;
                result[3] += 0;
                result[4] += 0.045454545454545456;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)118.5) ) ) {
            if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.15789473684210525;
                result[4] += 0.3684210526315789;
                result[5] += 0.47368421052631576;
              } else {
                result[0] += 0.014285714285714285;
                result[1] += 0.05714285714285714;
                result[2] += 0.4;
                result[3] += 0.44285714285714284;
                result[4] += 0;
                result[5] += 0.08571428571428572;
              }
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
                result[0] += 0.22727272727272727;
                result[1] += 0.18181818181818182;
                result[2] += 0.09090909090909091;
                result[3] += 0;
                result[4] += 0.4090909090909091;
                result[5] += 0.09090909090909091;
              } else {
                result[0] += 0.12903225806451613;
                result[1] += 0;
                result[2] += 0.7634408602150538;
                result[3] += 0.08602150537634409;
                result[4] += 0;
                result[5] += 0.021505376344086023;
              }
            }
          } else {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)88) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)93.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5555555555555556;
                result[4] += 0;
                result[5] += 0.4444444444444444;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.023255813953488372;
                result[3] += 0.11627906976744186;
                result[4] += 0;
                result[5] += 0.8604651162790697;
              }
            }
          } else {
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
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
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.42857142857142855;
                result[3] += 0.5714285714285714;
                result[4] += 0;
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
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
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
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)86) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.625;
                result[3] += 0.375;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)113.5) ) ) {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.875;
                result[3] += 0.0625;
                result[4] += 0;
                result[5] += 0.0625;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)120.5) ) ) {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)66.5) ) ) {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)87.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)103.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0.10416666666666667;
                result[4] += 0;
                result[5] += 0.0625;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6470588235294118;
                result[3] += 0.35294117647058826;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)107.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.8;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9315068493150684;
                result[3] += 0.0684931506849315;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)106) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5625;
                result[3] += 0.4375;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9876288659793815;
                result[3] += 0.012371134020618556;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)92.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)47) ) ) {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)41) ) ) {
                result[0] += 0;
                result[1] += 1;
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
          } else {
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)73.5) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)53) ) ) {
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
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9565217391304348;
                result[5] += 0.043478260869565216;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 1;
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
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)52) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)66) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)58) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)92.5) ) ) {
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
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)83.5) ) ) {
                result[0] += 0.9;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.38461538461538464;
                result[3] += 0;
                result[4] += 0.46153846153846156;
                result[5] += 0.15384615384615385;
              } else {
                result[0] += 0;
                result[1] += 0.0013175230566534915;
                result[2] += 0;
                result[3] += 0.034255599472990776;
                result[4] += 0.043478260869565216;
                result[5] += 0.9209486166007905;
              }
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.6;
              }
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0.025974025974025976;
                result[2] += 0;
                result[3] += 0.08441558441558442;
                result[4] += 0.09740259740259741;
                result[5] += 0.7922077922077922;
              } else {
                result[0] += 0.12962962962962962;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.018518518518518517;
                result[4] += 0.7777777777777778;
                result[5] += 0.07407407407407407;
              }
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.018691588785046728;
                result[1] += 0.004672897196261682;
                result[2] += 0.04672897196261682;
                result[3] += 0.5467289719626168;
                result[4] += 0.009345794392523364;
                result[5] += 0.37383177570093457;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 1;
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
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)94) ) ) {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)99.5) ) ) {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
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
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
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
            }
          }
        }
      } else {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)48.5) ) ) {
                result[0] += 0;
                result[1] += 0.6666666666666666;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2222222222222222;
                result[5] += 0.1111111111111111;
              } else {
                result[0] += 0.045454545454545456;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9545454545454546;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)78) ) ) {
                result[0] += 0.08333333333333333;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.08333333333333333;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0.08333333333333333;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0.25;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)68.5) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.35714285714285715;
                result[4] += 0.42857142857142855;
                result[5] += 0.21428571428571427;
              } else {
                result[0] += 0;
                result[1] += 0.04;
                result[2] += 0;
                result[3] += 0.08;
                result[4] += 0.04;
                result[5] += 0.84;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
                result[0] += 0.41935483870967744;
                result[1] += 0.1935483870967742;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2903225806451613;
                result[5] += 0.0967741935483871;
              } else {
                result[0] += 0.9384615384615385;
                result[1] += 0.0041025641025641026;
                result[2] += 0.0010256410256410256;
                result[3] += 0.018461538461538463;
                result[4] += 0.03076923076923077;
                result[5] += 0.0071794871794871795;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6;
                result[4] += 0;
                result[5] += 0.4;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1896551724137931;
                result[3] += 0.1206896551724138;
                result[4] += 0.05172413793103448;
                result[5] += 0.6379310344827587;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.014492753623188406;
                result[1] += 0;
                result[2] += 0.09178743961352658;
                result[3] += 0.6763285024154589;
                result[4] += 0;
                result[5] += 0.21739130434782608;
              }
            }
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)98.5) ) ) {
                result[0] += 0.2692307692307692;
                result[1] += 0;
                result[2] += 0.038461538461538464;
                result[3] += 0.19230769230769232;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0.9107142857142857;
                result[1] += 0;
                result[2] += 0.08928571428571429;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)108.5) ) ) {
                result[0] += 0.07339449541284404;
                result[1] += 0.03669724770642202;
                result[2] += 0.7064220183486238;
                result[3] += 0.09174311926605505;
                result[4] += 0.009174311926605505;
                result[5] += 0.08256880733944955;
              } else {
                result[0] += 0.9;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)114.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)85) ) ) {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)73.5) ) ) {
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
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)107) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            }
          } else {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
            if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)76.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          } else {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9444444444444444;
                result[4] += 0;
                result[5] += 0.05555555555555555;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              }
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.8;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
            if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)86.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05555555555555555;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0.7777777777777778;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)88) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9344262295081968;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.06557377049180328;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)110) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)103.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.82;
                result[3] += 0.18;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)107.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)105.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)106.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)112) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)105) ) ) {
            if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)118) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9379310344827586;
                result[3] += 0.04827586206896552;
                result[4] += 0;
                result[5] += 0.013793103448275862;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)113) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.09523809523809523;
                result[3] += 0.9047619047619048;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)113.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)81) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)126.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9527027027027027;
                result[3] += 0.0472972972972973;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)119) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)92) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)44) ) ) {
              result[0] += 0;
              result[1] += 1;
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
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
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
      if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)72) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.16666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0.3333333333333333;
              }
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
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
            }
          } else {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)71.5) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
                result[0] += 0.03125;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.96875;
                result[5] += 0;
              } else {
                result[0] += 0.13157894736842105;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3157894736842105;
                result[5] += 0.5526315789473685;
              }
            } else {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
                result[0] += 0.967741935483871;
                result[1] += 0.03225806451612903;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5833333333333334;
                result[5] += 0.4166666666666667;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)75) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0.8571428571428571;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)57.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.46153846153846156;
                result[5] += 0.5384615384615384;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.03167420814479638;
                result[4] += 0.013574660633484163;
                result[5] += 0.9547511312217195;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0.021739130434782608;
                result[2] += 0;
                result[3] += 0.09782608695652174;
                result[4] += 0.40217391304347827;
                result[5] += 0.4782608695652174;
              } else {
                result[0] += 0.022598870056497175;
                result[1] += 0.022598870056497175;
                result[2] += 0;
                result[3] += 0.12994350282485875;
                result[4] += 0.022598870056497175;
                result[5] += 0.8022598870056498;
              }
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
                result[0] += 0.019801980198019802;
                result[1] += 0.009900990099009901;
                result[2] += 0;
                result[3] += 0.3465346534653465;
                result[4] += 0.0297029702970297;
                result[5] += 0.594059405940594;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.006535947712418301;
                result[3] += 0.803921568627451;
                result[4] += 0;
                result[5] += 0.1895424836601307;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)106.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
                result[0] += 0.21875;
                result[1] += 0.65625;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.125;
                result[5] += 0;
              } else {
                result[0] += 0.09734513274336284;
                result[1] += 0.07079646017699116;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7876106194690267;
                result[5] += 0.044247787610619475;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)83) ) ) {
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
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
                result[0] += 0.38235294117647056;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0.029411764705882353;
                result[5] += 0.08823529411764706;
              } else {
                result[0] += 0.7212121212121212;
                result[1] += 0.006060606060606061;
                result[2] += 0;
                result[3] += 0.024242424242424242;
                result[4] += 0.22424242424242424;
                result[5] += 0.024242424242424242;
              }
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
                result[0] += 0.6862745098039216;
                result[1] += 0.11764705882352941;
                result[2] += 0.0392156862745098;
                result[3] += 0.029411764705882353;
                result[4] += 0.12745098039215685;
                result[5] += 0;
              } else {
                result[0] += 0.9553679131483717;
                result[1] += 0;
                result[2] += 0.003618817852834741;
                result[3] += 0.004825090470446321;
                result[4] += 0.034981905910735835;
                result[5] += 0.0012062726176115804;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)102.5) ) ) {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0.08860759493670886;
                result[2] += 0.08860759493670886;
                result[3] += 0.10126582278481013;
                result[4] += 0.10126582278481013;
                result[5] += 0.620253164556962;
              } else {
                result[0] += 0.011834319526627219;
                result[1] += 0.005917159763313609;
                result[2] += 0.21301775147928995;
                result[3] += 0.5088757396449705;
                result[4] += 0.04142011834319527;
                result[5] += 0.21893491124260356;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)97) ) ) {
                result[0] += 0.42857142857142855;
                result[1] += 0;
                result[2] += 0.14285714285714285;
                result[3] += 0;
                result[4] += 0.42857142857142855;
                result[5] += 0;
              } else {
                result[0] += 0.28205128205128205;
                result[1] += 0;
                result[2] += 0.6282051282051282;
                result[3] += 0.0641025641025641;
                result[4] += 0;
                result[5] += 0.02564102564102564;
              }
            }
          } else {
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)111) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.6521739130434783;
                result[1] += 0;
                result[2] += 0.34782608695652173;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)92) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)91) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)62) ) ) {
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
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07692307692307693;
                result[3] += 0.9230769230769231;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.16666666666666666;
                result[2] += 0.4166666666666667;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0.25;
              }
            }
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7586206896551725;
                result[3] += 0.20689655172413796;
                result[4] += 0.03448275862068966;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.5;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0.1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.24;
                result[3] += 0.76;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)111) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9285714285714286;
                result[3] += 0.07142857142857142;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)86.5) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)78) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)85.5) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)51) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)70) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
              if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6601941747572816;
                result[3] += 0.2815533980582524;
                result[4] += 0;
                result[5] += 0.05825242718446602;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9318181818181818;
                result[3] += 0.06818181818181818;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.974025974025974;
                result[3] += 0.012987012987012988;
                result[4] += 0;
                result[5] += 0.012987012987012988;
              }
            }
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
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
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7777777777777778;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.2222222222222222;
              } else {
                result[0] += 0.003766478342749529;
                result[1] += 0;
                result[2] += 0.9774011299435028;
                result[3] += 0.018832391713747645;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)55) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)71) ) ) {
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
          }
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          } else {
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)50.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
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
                result[4] += 0.5;
                result[5] += 0.5;
              }
            } else {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)61.5) ) ) {
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
                result[3] += 0.032857142857142856;
                result[4] += 0.018571428571428572;
                result[5] += 0.9485714285714286;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)58.5) ) ) {
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
            } else {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)101) ) ) {
                result[0] += 0.10810810810810811;
                result[1] += 0.05405405405405406;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6756756756756757;
                result[5] += 0.16216216216216217;
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
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.007168458781362007;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.24372759856630824;
                result[4] += 0.03225806451612903;
                result[5] += 0.7168458781362007;
              }
            } else {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2564102564102564;
                result[4] += 0;
                result[5] += 0.7435897435897436;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.007751937984496124;
                result[3] += 0.8449612403100775;
                result[4] += 0.007751937984496124;
                result[5] += 0.13953488372093023;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
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
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
            if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)90) ) ) {
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
          } else {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)59) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
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
          }
        }
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)66.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0.26666666666666666;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0.06666666666666667;
              } else {
                result[0] += 0;
                result[1] += 0.02857142857142857;
                result[2] += 0.08571428571428572;
                result[3] += 0;
                result[4] += 0.8285714285714286;
                result[5] += 0.05714285714285714;
              }
            } else {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)69.5) ) ) {
                result[0] += 0.9830508474576272;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.01694915254237288;
                result[5] += 0;
              } else {
                result[0] += 0.125;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.375;
                result[4] += 0.5;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)86) ) ) {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0.013986013986013986;
                result[2] += 0.02097902097902098;
                result[3] += 0.1888111888111888;
                result[4] += 0.25874125874125875;
                result[5] += 0.5174825174825175;
              } else {
                result[0] += 0.038277511961722493;
                result[1] += 0;
                result[2] += 0.18660287081339716;
                result[3] += 0.5311004784688996;
                result[4] += 0.05741626794258374;
                result[5] += 0.18660287081339716;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)79) ) ) {
                result[0] += 0.4;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6;
                result[5] += 0;
              } else {
                result[0] += 0.9642857142857143;
                result[1] += 0;
                result[2] += 0.03571428571428571;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)86) ) ) {
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
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
                result[0] += 0.6;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.058823529411764705;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9411764705882353;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
                result[0] += 0.4444444444444444;
                result[1] += 0.1388888888888889;
                result[2] += 0;
                result[3] += 0.027777777777777776;
                result[4] += 0.3333333333333333;
                result[5] += 0.05555555555555555;
              } else {
                result[0] += 0.9431072210065646;
                result[1] += 0.0032822757111597377;
                result[2] += 0.0065645514223194755;
                result[3] += 0.013129102844638951;
                result[4] += 0.03282275711159738;
                result[5] += 0.0010940919037199126;
              }
            } else {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
                result[0] += 0.06666666666666667;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0.03333333333333333;
                result[4] += 0.1;
                result[5] += 0.7;
              } else {
                result[0] += 0.23655913978494625;
                result[1] += 0;
                result[2] += 0.5806451612903226;
                result[3] += 0.0967741935483871;
                result[4] += 0.021505376344086023;
                result[5] += 0.06451612903225806;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0.9;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.15384615384615385;
                result[4] += 0;
                result[5] += 0.8461538461538461;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)92) ) ) {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)84) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8888888888888888;
                result[3] += 0.1111111111111111;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 1;
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
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)88.5) ) ) {
            if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)114.5) ) ) {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.01015228426395939;
                result[1] += 0;
                result[2] += 0.8730964467005076;
                result[3] += 0.10152284263959391;
                result[4] += 0;
                result[5] += 0.015228426395939087;
              }
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)115.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0.8888888888888888;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)120.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9963636363636363;
                result[3] += 0.0036363636363636364;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.125;
                result[1] += 0;
                result[2] += 0.875;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)49.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.7142857142857143;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2857142857142857;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)64) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0.75;
              }
            } else {
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9411764705882353;
                result[5] += 0.058823529411764705;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
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
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)74.5) ) ) {
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
                result[4] += 0.6666666666666666;
                result[5] += 0.3333333333333333;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.625;
                result[5] += 0.375;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0297029702970297;
                result[4] += 0.021216407355021217;
                result[5] += 0.9490806223479491;
              }
            } else {
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
            if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0.125;
                result[2] += 0;
                result[3] += 0.05;
                result[4] += 0.625;
                result[5] += 0.2;
              } else {
                result[0] += 0;
                result[1] += 0.03205128205128205;
                result[2] += 0;
                result[3] += 0.11538461538461539;
                result[4] += 0.02564102564102564;
                result[5] += 0.8269230769230769;
              }
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.02702702702702703;
                result[3] += 0.32432432432432434;
                result[4] += 0.10810810810810811;
                result[5] += 0.5405405405405406;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8136645962732919;
                result[4] += 0;
                result[5] += 0.18633540372670807;
              } else {
                result[0] += 0.07692307692307693;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.15384615384615385;
                result[4] += 0.038461538461538464;
                result[5] += 0.7307692307692307;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)103.5) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)102) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)104) ) ) {
                result[0] += 0.030612244897959183;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9387755102040817;
                result[5] += 0.030612244897959183;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0.6666666666666666;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)97) ) ) {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)57) ) ) {
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
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)70.5) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
                result[0] += 0.18421052631578946;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.05263157894736842;
                result[4] += 0.2894736842105263;
                result[5] += 0.47368421052631576;
              } else {
                result[0] += 0;
                result[1] += 0.07142857142857142;
                result[2] += 0;
                result[3] += 0.9285714285714286;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
                result[0] += 0.10526315789473684;
                result[1] += 0.05263157894736842;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8421052631578947;
                result[5] += 0;
              } else {
                result[0] += 0.9259911894273127;
                result[1] += 0.001762114537444934;
                result[2] += 0.0052863436123348016;
                result[3] += 0.01145374449339207;
                result[4] += 0.04933920704845815;
                result[5] += 0.006167400881057269;
              }
            }
          } else {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
                result[0] += 0.028169014084507043;
                result[1] += 0;
                result[2] += 0.08450704225352113;
                result[3] += 0.11267605633802817;
                result[4] += 0.09859154929577464;
                result[5] += 0.676056338028169;
              } else {
                result[0] += 0.06153846153846154;
                result[1] += 0.08461538461538462;
                result[2] += 0.12307692307692308;
                result[3] += 0.34615384615384615;
                result[4] += 0.13846153846153847;
                result[5] += 0.24615384615384617;
              }
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0.6;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4;
                result[5] += 0;
              } else {
                result[0] += 0.9642857142857143;
                result[1] += 0;
                result[2] += 0.017857142857142856;
                result[3] += 0;
                result[4] += 0.017857142857142856;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)94.5) ) ) {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9975490196078431;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.0024509803921568627;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
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
          }
        } else {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)105.5) ) ) {
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)124.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)72.5) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)81) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.043478260869565216;
                result[4] += 0;
                result[5] += 0.9565217391304348;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)75) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9444444444444444;
                result[4] += 0;
                result[5] += 0.05555555555555555;
              }
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07936507936507936;
                result[3] += 0.9047619047619048;
                result[4] += 0;
                result[5] += 0.015873015873015872;
              }
            }
          } else {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0.4;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9166666666666666;
                result[3] += 0.08333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07142857142857142;
                result[4] += 0;
                result[5] += 0.9285714285714286;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)64) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5483870967741936;
                result[3] += 0.29032258064516137;
                result[4] += 0;
                result[5] += 0.16129032258064518;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.23076923076923078;
                result[3] += 0.7692307692307693;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)95) ) ) {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5789473684210527;
                result[3] += 0.42105263157894735;
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
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9146341463414634;
                result[3] += 0.06097560975609756;
                result[4] += 0;
                result[5] += 0.024390243902439025;
              }
            }
          } else {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)86) ) ) {
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
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)73) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2692307692307692;
                result[3] += 0.7307692307692307;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)113.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7142857142857143;
                result[3] += 0.2857142857142857;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0.8888888888888888;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)83) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)108.5) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)76.5) ) ) {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)123) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)88.5) ) ) {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9523809523809523;
                result[3] += 0.023809523809523808;
                result[4] += 0.023809523809523808;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.006756756756756757;
                result[1] += 0;
                result[2] += 0.9662162162162162;
                result[3] += 0.02702702702702703;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)122.5) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9966216216216216;
                result[3] += 0.0033783783783783786;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)104.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.058823529411764705;
                result[1] += 0;
                result[2] += 0.9411764705882353;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)97) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
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
                result[4] += 0.6666666666666666;
                result[5] += 0.3333333333333333;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
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
                result[4] += 0.3333333333333333;
                result[5] += 0.6666666666666666;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)84) ) ) {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)79.5) ) ) {
              result[0] += 0;
              result[1] += 1;
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
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)59) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8;
                result[5] += 0.2;
              } else {
                result[0] += 0;
                result[1] += 0.006329113924050633;
                result[2] += 0;
                result[3] += 0.03417721518987342;
                result[4] += 0.02278481012658228;
                result[5] += 0.9367088607594937;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)62) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.18181818181818182;
                result[4] += 0.8181818181818182;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.017857142857142856;
                result[2] += 0;
                result[3] += 0.3392857142857143;
                result[4] += 0.08928571428571429;
                result[5] += 0.5535714285714286;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)94.5) ) ) {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.13559322033898305;
                result[4] += 0.03389830508474576;
                result[5] += 0.8305084745762712;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5882352941176471;
                result[4] += 0.11764705882352941;
                result[5] += 0.29411764705882354;
              }
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8829787234042553;
                result[4] += 0;
                result[5] += 0.11702127659574468;
              }
            }
          } else {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)73) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0.021739130434782608;
                result[2] += 0.021739130434782608;
                result[3] += 0;
                result[4] += 0.13043478260869565;
                result[5] += 0.8260869565217391;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.875;
                result[4] += 0;
                result[5] += 0.125;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)100.5) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)39.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0.0273972602739726;
                result[2] += 0;
                result[3] += 0.0273972602739726;
                result[4] += 0.9452054794520548;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)64.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)69) ) ) {
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
        }
      } else {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)102) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)54.5) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.06666666666666667;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9333333333333333;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)81.5) ) ) {
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
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
                result[0] += 0.18181818181818182;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7272727272727273;
                result[5] += 0.09090909090909091;
              } else {
                result[0] += 0.9092575618698442;
                result[1] += 0.0036663611365719525;
                result[2] += 0.005499541704857928;
                result[3] += 0.015582034830430797;
                result[4] += 0.04857928505957837;
                result[5] += 0.017415215398716773;
              }
            } else {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)111) ) ) {
                result[0] += 0.044444444444444446;
                result[1] += 0.044444444444444446;
                result[2] += 0;
                result[3] += 0.26666666666666666;
                result[4] += 0.4444444444444444;
                result[5] += 0.2;
              } else {
                result[0] += 0.92;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.08;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0.008547008547008548;
                result[2] += 0;
                result[3] += 0.29914529914529914;
                result[4] += 0.07692307692307693;
                result[5] += 0.6153846153846154;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.024390243902439025;
                result[3] += 0.6829268292682927;
                result[4] += 0;
                result[5] += 0.2926829268292683;
              }
            } else {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.15384615384615385;
                result[2] += 0.8461538461538461;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
                result[0] += 0.05;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.05;
                result[4] += 0.8;
                result[5] += 0.1;
              } else {
                result[0] += 0.7021276595744681;
                result[1] += 0.23404255319148937;
                result[2] += 0.02127659574468085;
                result[3] += 0.0425531914893617;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.22727272727272727;
                result[3] += 0.22727272727272727;
                result[4] += 0;
                result[5] += 0.5454545454545454;
              } else {
                result[0] += 0.2077922077922078;
                result[1] += 0;
                result[2] += 0.7012987012987013;
                result[3] += 0.03896103896103896;
                result[4] += 0.03896103896103896;
                result[5] += 0.012987012987012988;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)64.5) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)94) ) ) {
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
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
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
          } else {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)88) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.023255813953488372;
                result[5] += 0.9767441860465116;
              }
            } else {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.25;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0.875;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)82) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0.125;
                result[2] += 0;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0.75;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)75) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.8;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5454545454545454;
                result[3] += 0.45454545454545453;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5454545454545454;
                result[3] += 0.36363636363636365;
                result[4] += 0;
                result[5] += 0.09090909090909091;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9444444444444444;
                result[3] += 0.05555555555555555;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)88.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
                result[0] += 0.13043478260869565;
                result[1] += 0;
                result[2] += 0.2608695652173913;
                result[3] += 0.17391304347826086;
                result[4] += 0.08695652173913043;
                result[5] += 0.34782608695652173;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16;
                result[3] += 0.84;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0.2361111111111111;
                result[4] += 0;
                result[5] += 0.013888888888888888;
              }
            } else {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)112) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)81.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)93) ) ) {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0;
              } else {
                result[0] += 0.043478260869565216;
                result[1] += 0;
                result[2] += 0.782608695652174;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.17391304347826086;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0.25;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9;
                result[3] += 0.09047619047619047;
                result[4] += 0;
                result[5] += 0.009523809523809525;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
                result[0] += 0.011834319526627219;
                result[1] += 0;
                result[2] += 0.9408284023668639;
                result[3] += 0.047337278106508875;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9859154929577465;
                result[3] += 0.014084507042253521;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)47) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)105) ) ) {
            if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)108.5) ) ) {
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
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)68.5) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)83) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)104) ) ) {
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
        if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.05;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9;
                result[5] += 0.05;
              }
            } else {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0.16666666666666666;
                result[2] += 0;
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)62) ) ) {
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
                result[4] += 0.7333333333333333;
                result[5] += 0.26666666666666666;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1724137931034483;
                result[5] += 0.8275862068965517;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0.3333333333333333;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
                result[0] += 0.8648648648648649;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.13513513513513514;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.10000000000000002;
                result[2] += 0;
                result[3] += 0.10000000000000002;
                result[4] += 0.7000000000000001;
                result[5] += 0.10000000000000002;
              }
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
                result[0] += 0.0011961722488038277;
                result[1] += 0.0023923444976076554;
                result[2] += 0;
                result[3] += 0.03110047846889952;
                result[4] += 0.04425837320574163;
                result[5] += 0.9210526315789473;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.020618556701030927;
                result[3] += 0.3402061855670103;
                result[4] += 0.010309278350515464;
                result[5] += 0.6288659793814433;
              }
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.015384615384615385;
                result[3] += 0.15384615384615385;
                result[4] += 0;
                result[5] += 0.8307692307692308;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7777777777777778;
                result[4] += 0;
                result[5] += 0.2222222222222222;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.845360824742268;
                result[4] += 0;
                result[5] += 0.15463917525773196;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)68.5) ) ) {
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)100.5) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)101.5) ) ) {
                result[0] += 0.18309859154929578;
                result[1] += 0.035211267605633804;
                result[2] += 0.02112676056338028;
                result[3] += 0.028169014084507043;
                result[4] += 0.704225352112676;
                result[5] += 0.028169014084507043;
              } else {
                result[0] += 0.058823529411764705;
                result[1] += 0.9411764705882353;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.058823529411764705;
                result[2] += 0.0392156862745098;
                result[3] += 0.35294117647058826;
                result[4] += 0.0784313725490196;
                result[5] += 0.47058823529411764;
              }
            } else {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
                result[0] += 0.921359223300971;
                result[1] += 0.0019417475728155341;
                result[2] += 0.0009708737864077671;
                result[3] += 0.0038834951456310682;
                result[4] += 0.0650485436893204;
                result[5] += 0.00679611650485437;
              } else {
                result[0] += 0.5696202531645569;
                result[1] += 0;
                result[2] += 0.08860759493670885;
                result[3] += 0.21518987341772147;
                result[4] += 0.05063291139240505;
                result[5] += 0.07594936708860758;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0.04;
                result[2] += 0;
                result[3] += 0.8;
                result[4] += 0.12;
                result[5] += 0.04;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.014925373134328358;
                result[3] += 0.31343283582089554;
                result[4] += 0;
                result[5] += 0.6716417910447762;
              }
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8301886792452831;
                result[4] += 0.03773584905660377;
                result[5] += 0.1320754716981132;
              } else {
                result[0] += 0;
                result[1] += 0.02631578947368421;
                result[2] += 0.30701754385964913;
                result[3] += 0.39473684210526316;
                result[4] += 0.11403508771929824;
                result[5] += 0.15789473684210525;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)89) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
                result[0] += 0.11538461538461539;
                result[1] += 0;
                result[2] += 0.11538461538461539;
                result[3] += 0.019230769230769232;
                result[4] += 0.3269230769230769;
                result[5] += 0.4230769230769231;
              } else {
                result[0] += 0.031746031746031744;
                result[1] += 0;
                result[2] += 0.8253968253968254;
                result[3] += 0.06349206349206349;
                result[4] += 0;
                result[5] += 0.07936507936507936;
              }
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)101) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0;
                result[4] += 0.4444444444444444;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)64.5) ) ) {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)71) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
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
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)72.5) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)77.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
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
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)81.5) ) ) {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)88) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.4;
                result[1] += 0;
                result[2] += 0.6;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)65.5) ) ) {
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
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.75;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)106.5) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.875;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5263157894736843;
                result[3] += 0.368421052631579;
                result[4] += 0;
                result[5] += 0.10526315789473685;
              } else {
                result[0] += 0.014492753623188406;
                result[1] += 0;
                result[2] += 0.782608695652174;
                result[3] += 0.2028985507246377;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.010752688172043013;
                result[1] += 0;
                result[2] += 0.9301075268817205;
                result[3] += 0.05376344086021506;
                result[4] += 0;
                result[5] += 0.005376344086021507;
              }
            }
          } else {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.08333333333333333;
                result[3] += 0.9166666666666666;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)112.5) ) ) {
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)100) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)101) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9393939393939394;
                result[3] += 0.06060606060606061;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)114.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.42105263157894735;
                result[3] += 0.5789473684210527;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0.8888888888888888;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)76) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)118.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
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
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9903288201160542;
                result[3] += 0.009671179883945842;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)41) ) ) {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
              result[0] += 0;
              result[1] += 1;
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
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)62) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)57.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0.75;
              } else {
                result[0] += 0.03125;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.90625;
                result[5] += 0.0625;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
              if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)67.5) ) ) {
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
                result[4] += 0.5;
                result[5] += 0.5;
              }
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)56) ) ) {
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
                result[4] += 0.03225806451612903;
                result[5] += 0.967741935483871;
              }
            }
          } else {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)64) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
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
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)79) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)60) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8;
                result[5] += 0.2;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.024630541871921183;
                result[4] += 0.014778325123152709;
                result[5] += 0.9605911330049262;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.09615384615384616;
                result[4] += 0.09615384615384616;
                result[5] += 0.8076923076923077;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6;
                result[4] += 0.16666666666666666;
                result[5] += 0.23333333333333334;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.125;
                result[4] += 0.03125;
                result[5] += 0.84375;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8;
                result[4] += 0;
                result[5] += 0.2;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8571428571428571;
                result[4] += 0;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7142857142857143;
                result[5] += 0.2857142857142857;
              }
            }
          } else {
            if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0.6;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8549618320610687;
                result[4] += 0;
                result[5] += 0.1450381679389313;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0.2857142857142857;
                result[2] += 0;
                result[3] += 0.7142857142857143;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)96) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
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
          } else {
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
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
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
            if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)45) ) ) {
                result[0] += 0;
                result[1] += 0.7777777777777778;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2222222222222222;
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
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)48) ) ) {
              result[0] += 0;
              result[1] += 1;
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
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)50.5) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)88) ) ) {
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
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)55.5) ) ) {
                result[0] += 0.6296296296296297;
                result[1] += 0.14814814814814814;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2222222222222222;
                result[5] += 0;
              } else {
                result[0] += 0.024691358024691357;
                result[1] += 0.037037037037037035;
                result[2] += 0;
                result[3] += 0.024691358024691357;
                result[4] += 0.8641975308641975;
                result[5] += 0.04938271604938271;
              }
            }
          } else {
            if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.09302325581395349;
                result[2] += 0.023255813953488372;
                result[3] += 0.3953488372093023;
                result[4] += 0.11627906976744186;
                result[5] += 0.37209302325581395;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
                result[0] += 0.42857142857142866;
                result[1] += 0;
                result[2] += 0.015873015873015876;
                result[3] += 0.07936507936507937;
                result[4] += 0.33333333333333337;
                result[5] += 0.14285714285714288;
              } else {
                result[0] += 0.9344587884806356;
                result[1] += 0.00893743793445879;
                result[2] += 0.003972194637537239;
                result[3] += 0.005958291956305859;
                result[4] += 0.039721946375372394;
                result[5] += 0.006951340615690168;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
                result[0] += 0;
                result[1] += 0.18181818181818182;
                result[2] += 0.09090909090909091;
                result[3] += 0;
                result[4] += 0.7272727272727273;
                result[5] += 0;
              } else {
                result[0] += 0.03508771929824561;
                result[1] += 0;
                result[2] += 0.05263157894736842;
                result[3] += 0.2631578947368421;
                result[4] += 0.05263157894736842;
                result[5] += 0.5964912280701754;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)103.5) ) ) {
                result[0] += 0.10526315789473685;
                result[1] += 0.5789473684210528;
                result[2] += 0;
                result[3] += 0.15789473684210528;
                result[4] += 0.052631578947368425;
                result[5] += 0.10526315789473685;
              } else {
                result[0] += 0.8981481481481481;
                result[1] += 0;
                result[2] += 0.05555555555555555;
                result[3] += 0;
                result[4] += 0.046296296296296294;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.6;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0.06666666666666667;
              } else {
                result[0] += 0;
                result[1] += 0.0064516129032258064;
                result[2] += 0.0967741935483871;
                result[3] += 0.567741935483871;
                result[4] += 0.03870967741935484;
                result[5] += 0.2903225806451613;
              }
            } else {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)95) ) ) {
                result[0] += 0.007194244604316547;
                result[1] += 0.007194244604316547;
                result[2] += 0.6618705035971223;
                result[3] += 0.2517985611510791;
                result[4] += 0;
                result[5] += 0.07194244604316546;
              } else {
                result[0] += 0.75;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0;
                result[4] += 0.125;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
        if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)109.5) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
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
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)106.5) ) ) {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)107.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)57) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.05555555555555555;
                result[4] += 0;
                result[5] += 0.9444444444444444;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            } else {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)106) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0.4166666666666667;
                result[4] += 0;
                result[5] += 0.4166666666666667;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7368421052631579;
                result[3] += 0.10526315789473684;
                result[4] += 0;
                result[5] += 0.15789473684210525;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)92) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.0234375;
                result[1] += 0.00390625;
                result[2] += 0.81640625;
                result[3] += 0.12890625;
                result[4] += 0.0078125;
                result[5] += 0.01953125;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)73) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)109.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.72;
                result[3] += 0.28;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9523809523809523;
                result[3] += 0.047619047619047616;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)119) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9571428571428572;
                result[3] += 0.04285714285714286;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.994475138121547;
                result[3] += 0.0055248618784530384;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)39.5) ) ) {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)80) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)51.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)94) ) ) {
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
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)78) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6538461538461539;
                result[5] += 0.34615384615384615;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.023977433004231313;
                result[4] += 0.012693935119887164;
                result[5] += 0.9633286318758815;
              } else {
                result[0] += 0;
                result[1] += 0.046875;
                result[2] += 0.0234375;
                result[3] += 0.171875;
                result[4] += 0.1015625;
                result[5] += 0.65625;
              }
            }
          } else {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0.011560693641618497;
                result[2] += 0;
                result[3] += 0.23121387283236994;
                result[4] += 0.017341040462427744;
                result[5] += 0.7398843930635838;
              } else {
                result[0] += 0;
                result[1] += 0.1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.55;
                result[5] += 0.35;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
                result[0] += 0.043478260869565216;
                result[1] += 0.08695652173913043;
                result[2] += 0;
                result[3] += 0.043478260869565216;
                result[4] += 0.21739130434782608;
                result[5] += 0.6086956521739131;
              } else {
                result[0] += 0.006666666666666667;
                result[1] += 0;
                result[2] += 0.013333333333333334;
                result[3] += 0.7933333333333333;
                result[4] += 0;
                result[5] += 0.18666666666666668;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
          if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)95) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)70.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)41.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.016666666666666666;
                result[1] += 0.016666666666666666;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9666666666666667;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)87) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
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
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
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
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)56.5) ) ) {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)121.5) ) ) {
                result[0] += 0;
                result[1] += 0.9302325581395349;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.046511627906976744;
                result[5] += 0.023255813953488372;
              } else {
                result[0] += 0;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)108.5) ) ) {
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
          }
        }
      } else {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)105.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
                result[0] += 0.8235294117647058;
                result[1] += 0.058823529411764705;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.11764705882352941;
                result[5] += 0;
              } else {
                result[0] += 0.027777777777777776;
                result[1] += 0.08333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8888888888888888;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
                result[0] += 0.09523809523809525;
                result[1] += 0.04761904761904762;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.761904761904762;
                result[5] += 0.09523809523809525;
              } else {
                result[0] += 0.9172794117647058;
                result[1] += 0.0055147058823529415;
                result[2] += 0.0027573529411764708;
                result[3] += 0.01838235294117647;
                result[4] += 0.042279411764705885;
                result[5] += 0.013786764705882353;
              }
            }
          } else {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)68) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)111.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)83) ) ) {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3783783783783784;
                result[4] += 0.009009009009009009;
                result[5] += 0.6126126126126126;
              } else {
                result[0] += 0.02380952380952381;
                result[1] += 0.04761904761904762;
                result[2] += 0.09523809523809525;
                result[3] += 0.5952380952380953;
                result[4] += 0.16666666666666669;
                result[5] += 0.07142857142857144;
              }
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0.09090909090909091;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.9090909090909091;
              } else {
                result[0] += 0.02564102564102564;
                result[1] += 0;
                result[2] += 0.717948717948718;
                result[3] += 0.15384615384615385;
                result[4] += 0;
                result[5] += 0.10256410256410256;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
                result[0] += 0.3076923076923077;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6923076923076923;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)118.5) ) ) {
                result[0] += 0.18181818181818182;
                result[1] += 0;
                result[2] += 0.7272727272727273;
                result[3] += 0.045454545454545456;
                result[4] += 0.045454545454545456;
                result[5] += 0;
              } else {
                result[0] += 0.8666666666666667;
                result[1] += 0;
                result[2] += 0.13333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
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
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0.2;
                result[5] += 0.3;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)104) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0.75;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.02127659574468085;
                result[2] += 0.06382978723404255;
                result[3] += 0.7978723404255319;
                result[4] += 0;
                result[5] += 0.11702127659574468;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
            if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)65.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)96) ) ) {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)108) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)80.5) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)66) ) ) {
            if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)106.5) ) ) {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)85) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)107) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.14634146341463414;
                result[3] += 0.7317073170731707;
                result[4] += 0;
                result[5] += 0.12195121951219512;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.16666666666666666;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)89) ) ) {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)86) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
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
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9473684210526316;
                result[3] += 0.026315789473684213;
                result[4] += 0;
                result[5] += 0.026315789473684213;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)97) ) ) {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
                result[0] += 0.007042253521126762;
                result[1] += 0;
                result[2] += 0.7816901408450705;
                result[3] += 0.1971830985915493;
                result[4] += 0;
                result[5] += 0.014084507042253523;
              } else {
                result[0] += 0.018691588785046728;
                result[1] += 0;
                result[2] += 0.9345794392523364;
                result[3] += 0.037383177570093455;
                result[4] += 0;
                result[5] += 0.009345794392523364;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7352941176470589;
                result[3] += 0.2647058823529412;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9263157894736842;
                result[3] += 0.042105263157894736;
                result[4] += 0;
                result[5] += 0.031578947368421054;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
                result[0] += 0.08;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.12;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.001968503937007874;
                result[1] += 0;
                result[2] += 0.9862204724409449;
                result[3] += 0.011811023622047244;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
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
                result[4] += 0.8571428571428571;
                result[5] += 0.14285714285714285;
              }
            }
          } else {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)76.5) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7692307692307693;
                result[5] += 0.23076923076923078;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.08333333333333333;
                result[5] += 0.9166666666666666;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)75) ) ) {
                result[0] += 0;
                result[1] += 0.02857142857142857;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9714285714285714;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5833333333333334;
                result[5] += 0.4166666666666667;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
            if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)66) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.875;
                result[5] += 0.125;
              } else {
                result[0] += 0;
                result[1] += 0.0038860103626943004;
                result[2] += 0;
                result[3] += 0.019430051813471502;
                result[4] += 0.029792746113989636;
                result[5] += 0.9468911917098446;
              }
            } else {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9;
                result[4] += 0;
                result[5] += 0.1;
              } else {
                result[0] += 0;
                result[1] += 0.024793388429752067;
                result[2] += 0;
                result[3] += 0.24793388429752067;
                result[4] += 0.049586776859504134;
                result[5] += 0.6776859504132231;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)76) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.06666666666666667;
                result[2] += 0;
                result[3] += 0.03333333333333333;
                result[4] += 0.5;
                result[5] += 0.4;
              }
            } else {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.017543859649122806;
                result[4] += 0.03508771929824561;
                result[5] += 0.9473684210526315;
              } else {
                result[0] += 0.043478260869565216;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2391304347826087;
                result[4] += 0.15217391304347827;
                result[5] += 0.5652173913043478;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.20833333333333334;
                result[4] += 0;
                result[5] += 0.7916666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9;
                result[4] += 0;
                result[5] += 0.1;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.20512820512820512;
                result[4] += 0;
                result[5] += 0.7948717948717948;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)75.5) ) ) {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)58.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)40.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9701492537313433;
                result[5] += 0.029850746268656716;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)55.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)74.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)56) ) ) {
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
            } else {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)60) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9285714285714286;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.07142857142857142;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)54) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 0.9565217391304348;
                result[2] += 0;
                result[3] += 0.043478260869565216;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.4;
                result[1] += 0.6;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)75) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.2857142857142857;
                result[1] += 0.2857142857142857;
                result[2] += 0;
                result[3] += 0.42857142857142855;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)100) ) ) {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)68) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
                result[0] += 0.038461538461538464;
                result[1] += 0.038461538461538464;
                result[2] += 0.038461538461538464;
                result[3] += 0.15384615384615385;
                result[4] += 0.19230769230769232;
                result[5] += 0.5384615384615384;
              } else {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0.05;
                result[3] += 0.65;
                result[4] += 0.1;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
                result[0] += 0.9229357798165138;
                result[1] += 0.007339449541284404;
                result[2] += 0;
                result[3] += 0.007339449541284404;
                result[4] += 0.05321100917431193;
                result[5] += 0.009174311926605505;
              } else {
                result[0] += 0.3723404255319149;
                result[1] += 0.11702127659574468;
                result[2] += 0.07446808510638298;
                result[3] += 0.06382978723404255;
                result[4] += 0.3191489361702128;
                result[5] += 0.05319148936170213;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)89.5) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)52.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.00392156862745098;
                result[1] += 0;
                result[2] += 0.09019607843137255;
                result[3] += 0.3843137254901961;
                result[4] += 0.047058823529411764;
                result[5] += 0.4745098039215686;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)94) ) ) {
                result[0] += 0.6666666666666667;
                result[1] += 0;
                result[2] += 0.11111111111111112;
                result[3] += 0;
                result[4] += 0.22222222222222224;
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
          } else {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)88) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.875;
                result[4] += 0;
                result[5] += 0.125;
              } else {
                result[0] += 0.13888888888888892;
                result[1] += 0;
                result[2] += 0.7500000000000001;
                result[3] += 0.09722222222222224;
                result[4] += 0;
                result[5] += 0.01388888888888889;
              }
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
                result[0] += 0.46153846153846156;
                result[1] += 0;
                result[2] += 0.23076923076923078;
                result[3] += 0;
                result[4] += 0.3076923076923077;
                result[5] += 0;
              } else {
                result[0] += 0.9615384615384616;
                result[1] += 0;
                result[2] += 0.038461538461538464;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
        if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)107) ) ) {
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)99) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9629629629629629;
                result[4] += 0;
                result[5] += 0.037037037037037035;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.26;
                result[3] += 0.64;
                result[4] += 0;
                result[5] += 0.1;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)98) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)98) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
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
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5384615384615384;
                result[3] += 0.46153846153846156;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0.9;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)83) ) ) {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)97.5) ) ) {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8450704225352113;
                result[3] += 0.14084507042253522;
                result[4] += 0;
                result[5] += 0.014084507042253521;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)104.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7;
                result[3] += 0.3;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9111111111111111;
                result[3] += 0.08888888888888889;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.009920634920634922;
                result[1] += 0;
                result[2] += 0.9801587301587302;
                result[3] += 0.009920634920634922;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)58.5) ) ) {
            if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)111) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
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
                result[4] += 0.96;
                result[5] += 0.04;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)67) ) ) {
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          }
        } else {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)67.5) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)63.5) ) ) {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7333333333333333;
                result[5] += 0.26666666666666666;
              } else {
                result[0] += 0.09090909090909091;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.09090909090909091;
                result[5] += 0.8181818181818182;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)48) ) ) {
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
          }
        }
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)57.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9090909090909091;
                result[5] += 0.09090909090909091;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.027377521613832854;
                result[4] += 0.01440922190201729;
                result[5] += 0.9582132564841499;
              } else {
                result[0] += 0;
                result[1] += 0.038461538461538464;
                result[2] += 0;
                result[3] += 0.14835164835164835;
                result[4] += 0.10989010989010989;
                result[5] += 0.7032967032967034;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)94) ) ) {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
                result[0] += 0.030303030303030304;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0.8787878787878788;
              } else {
                result[0] += 0.08;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.32;
                result[4] += 0;
                result[5] += 0.6;
              }
            } else {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0.75;
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
          } else {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9210526315789473;
                result[4] += 0;
                result[5] += 0.07894736842105263;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.17391304347826086;
                result[4] += 0;
                result[5] += 0.8260869565217391;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)74.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0.875;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.125;
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
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)102) ) ) {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
                result[0] += 0.029411764705882353;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9705882352941176;
                result[5] += 0;
              } else {
                result[0] += 0.4230769230769231;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4807692307692308;
                result[5] += 0.09615384615384616;
              }
            } else {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)55.5) ) ) {
                result[0] += 0;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
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
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
                result[0] += 0.19607843137254902;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.23529411764705882;
                result[4] += 0.21568627450980393;
                result[5] += 0.35294117647058826;
              } else {
                result[0] += 0.9424242424242424;
                result[1] += 0.00808080808080808;
                result[2] += 0;
                result[3] += 0.0030303030303030303;
                result[4] += 0.044444444444444446;
                result[5] += 0.00202020202020202;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
                result[0] += 0.12222222222222222;
                result[1] += 0;
                result[2] += 0.044444444444444446;
                result[3] += 0.2222222222222222;
                result[4] += 0.28888888888888886;
                result[5] += 0.32222222222222224;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)105) ) ) {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)99) ) ) {
                result[0] += 0.017482517482517484;
                result[1] += 0.013986013986013986;
                result[2] += 0.15034965034965034;
                result[3] += 0.38461538461538464;
                result[4] += 0.07342657342657342;
                result[5] += 0.36013986013986016;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)104.5) ) ) {
                result[0] += 0.053763440860215055;
                result[1] += 0.021505376344086023;
                result[2] += 0.6236559139784946;
                result[3] += 0.0967741935483871;
                result[4] += 0;
                result[5] += 0.20430107526881722;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)89) ) ) {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)97) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.14814814814814814;
                result[1] += 0;
                result[2] += 0.8518518518518519;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9285714285714286;
                result[4] += 0;
                result[5] += 0.07142857142857142;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)110) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)74) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)109.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
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
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)74) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)98) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.25;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.08333333333333333;
                result[3] += 0.9166666666666666;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8604651162790697;
                result[3] += 0.11627906976744186;
                result[4] += 0;
                result[5] += 0.023255813953488372;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)114.5) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0.75;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0.8888888888888888;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)99) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8465608465608465;
                result[3] += 0.15343915343915343;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)87) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0015060240963855422;
                result[1] += 0;
                result[2] += 0.9623493975903614;
                result[3] += 0.03614457831325301;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)104) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)53.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)76.5) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)91) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)67.5) ) ) {
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
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)87) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.04;
                result[5] += 0.96;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
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
      if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)52.5) ) ) {
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
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)77) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)58) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8181818181818182;
                result[5] += 0.18181818181818182;
              } else {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0.0011695906432748538;
                result[2] += 0;
                result[3] += 0.04327485380116959;
                result[4] += 0.021052631578947368;
                result[5] += 0.9345029239766082;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.11111111111111112;
                result[4] += 0.6666666666666667;
                result[5] += 0.22222222222222224;
              }
            }
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1111111111111111;
                result[4] += 0;
                result[5] += 0.8888888888888888;
              }
            } else {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)68.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0.25;
              } else {
                result[0] += 0.08695652173913043;
                result[1] += 0.782608695652174;
                result[2] += 0.043478260869565216;
                result[3] += 0.043478260869565216;
                result[4] += 0.043478260869565216;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8888888888888888;
                result[4] += 0;
                result[5] += 0.1111111111111111;
              }
            } else {
              if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)78) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.12962962962962962;
                result[4] += 0;
                result[5] += 0.8703703703703703;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9655172413793104;
                result[4] += 0;
                result[5] += 0.034482758620689655;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
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
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.03333333333333333;
                result[4] += 0;
                result[5] += 0.9666666666666667;
              }
            }
          } else {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)118) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)40) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)58) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0.023529411764705882;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.011764705882352941;
                result[4] += 0.9647058823529412;
                result[5] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)63) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)126) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)75) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)52.5) ) ) {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)113.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
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
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0.08108108108108109;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8648648648648649;
                result[5] += 0.05405405405405406;
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
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
                result[0] += 0.656;
                result[1] += 0.016;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.312;
                result[5] += 0.016;
              } else {
                result[0] += 0.946259220231823;
                result[1] += 0.005268703898840885;
                result[2] += 0.009483667017913594;
                result[3] += 0.014752370916754479;
                result[4] += 0.018967334035827187;
                result[5] += 0.005268703898840885;
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
                result[0] += 0.04081632653061224;
                result[1] += 0.04081632653061224;
                result[2] += 0;
                result[3] += 0.22448979591836735;
                result[4] += 0.30612244897959184;
                result[5] += 0.3877551020408163;
              } else {
                result[0] += 0.8461538461538461;
                result[1] += 0.07692307692307693;
                result[2] += 0.038461538461538464;
                result[3] += 0.038461538461538464;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0.08695652173913045;
                result[2] += 0.04347826086956522;
                result[3] += 0.13043478260869568;
                result[4] += 0.5217391304347827;
                result[5] += 0.2173913043478261;
              } else {
                result[0] += 0.023255813953488372;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5813953488372093;
                result[4] += 0.03488372093023256;
                result[5] += 0.36046511627906974;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.625;
                result[3] += 0.125;
                result[4] += 0.25;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.826923076923077;
                result[1] += 0;
                result[2] += 0.03846153846153847;
                result[3] += 0;
                result[4] += 0.13461538461538464;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)80.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.09523809523809523;
                result[1] += 0;
                result[2] += 0.9047619047619048;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)79) ) ) {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
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
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)112) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
                result[0] += 0.017543859649122806;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.14035087719298245;
                result[5] += 0.8421052631578947;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.02127659574468085;
                result[3] += 0.3191489361702128;
                result[4] += 0;
                result[5] += 0.6595744680851063;
              }
            } else {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)111) ) ) {
                result[0] += 0.125;
                result[1] += 0.375;
                result[2] += 0.5;
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
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)84) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0.9;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.19658119658119658;
                result[3] += 0.6837606837606838;
                result[4] += 0.008547008547008548;
                result[5] += 0.1111111111111111;
              }
            }
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2222222222222222;
                result[4] += 0;
                result[5] += 0.7777777777777778;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7045454545454546;
                result[3] += 0.18181818181818182;
                result[4] += 0;
                result[5] += 0.11363636363636363;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)113.5) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)68) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)68.5) ) ) {
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
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)98) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.21428571428571427;
                result[3] += 0.5714285714285714;
                result[4] += 0;
                result[5] += 0.21428571428571427;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7894736842105263;
                result[3] += 0.18421052631578946;
                result[4] += 0;
                result[5] += 0.02631578947368421;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)110.5) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)112.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9259259259259259;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.07407407407407407;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6826923076923077;
                result[3] += 0.3173076923076923;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)88.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9291784702549575;
                result[3] += 0.0708215297450425;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7142857142857143;
                result[3] += 0.2857142857142857;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.003076923076923077;
                result[1] += 0;
                result[2] += 0.9938461538461538;
                result[3] += 0.003076923076923077;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)111) ) ) {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)46.5) ) ) {
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
            }
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)58.5) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)58.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0.25;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.10810810810810811;
                result[5] += 0.8918918918918919;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6;
                result[4] += 0.4;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)61) ) ) {
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
                result[3] += 0.0106951871657754;
                result[4] += 0.0053475935828877;
                result[5] += 0.983957219251337;
              }
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.10606060606060606;
                result[4] += 0.022727272727272728;
                result[5] += 0.8712121212121212;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0625;
                result[4] += 0.875;
                result[5] += 0.0625;
              } else {
                result[0] += 0;
                result[1] += 0.8181818181818182;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.18181818181818182;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06097560975609756;
                result[4] += 0.07317073170731707;
                result[5] += 0.8658536585365854;
              } else {
                result[0] += 0.010416666666666666;
                result[1] += 0.052083333333333336;
                result[2] += 0;
                result[3] += 0.3125;
                result[4] += 0.03125;
                result[5] += 0.59375;
              }
            }
          } else {
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)62.5) ) ) {
                result[0] += 0.18181818181818182;
                result[1] += 0.18181818181818182;
                result[2] += 0;
                result[3] += 0.18181818181818182;
                result[4] += 0.2727272727272727;
                result[5] += 0.18181818181818182;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.18055555555555555;
                result[4] += 0.013888888888888888;
                result[5] += 0.8055555555555556;
              }
            } else {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9;
                result[4] += 0;
                result[5] += 0.1;
              } else {
                result[0] += 0;
                result[1] += 0.07692307692307693;
                result[2] += 0;
                result[3] += 0.07692307692307693;
                result[4] += 0.3076923076923077;
                result[5] += 0.5384615384615384;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)52.5) ) ) {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)45) ) ) {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)38.5) ) ) {
                result[0] += 0;
                result[1] += 1;
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
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)85) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)97.5) ) ) {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
                result[0] += 0.023529411764705882;
                result[1] += 0.023529411764705882;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9411764705882353;
                result[5] += 0.011764705882352941;
              } else {
                result[0] += 0.37096774193548393;
                result[1] += 0.06451612903225808;
                result[2] += 0.01612903225806452;
                result[3] += 0.11290322580645162;
                result[4] += 0.32258064516129037;
                result[5] += 0.11290322580645162;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0.9565217391304348;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.043478260869565216;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
                result[0] += 0.3055555555555556;
                result[1] += 0.027777777777777776;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6111111111111112;
                result[5] += 0.05555555555555555;
              } else {
                result[0] += 0.13157894736842105;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.3684210526315789;
              }
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
                result[0] += 0.3076923076923077;
                result[1] += 0.19230769230769232;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.46153846153846156;
                result[5] += 0.038461538461538464;
              } else {
                result[0] += 0.9287037037037038;
                result[1] += 0.0027777777777777783;
                result[2] += 0.0009259259259259261;
                result[3] += 0.01851851851851852;
                result[4] += 0.04166666666666667;
                result[5] += 0.0074074074074074086;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.019230769230769232;
                result[3] += 0.16346153846153846;
                result[4] += 0.15384615384615385;
                result[5] += 0.6634615384615384;
              } else {
                result[0] += 0.08000000000000002;
                result[1] += 0.24000000000000002;
                result[2] += 0;
                result[3] += 0.6000000000000001;
                result[4] += 0.08000000000000002;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
                result[0] += 0.01675977653631285;
                result[1] += 0.0111731843575419;
                result[2] += 0.11731843575418995;
                result[3] += 0.5418994413407822;
                result[4] += 0;
                result[5] += 0.3128491620111732;
              } else {
                result[0] += 0.023255813953488372;
                result[1] += 0;
                result[2] += 0.5581395348837209;
                result[3] += 0.2558139534883721;
                result[4] += 0.023255813953488372;
                result[5] += 0.13953488372093023;
              }
            }
          } else {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.13333333333333333;
                result[4] += 0;
                result[5] += 0.4666666666666667;
              } else {
                result[0] += 0.8333333333333334;
                result[1] += 0.030303030303030304;
                result[2] += 0.07575757575757576;
                result[3] += 0.015151515151515152;
                result[4] += 0.045454545454545456;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.05952380952380953;
                result[1] += 0;
                result[2] += 0.8214285714285715;
                result[3] += 0.011904761904761906;
                result[4] += 0.011904761904761906;
                result[5] += 0.09523809523809525;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.02857142857142857;
                result[3] += 0.02857142857142857;
                result[4] += 0.02857142857142857;
                result[5] += 0.9142857142857143;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.42857142857142855;
                result[4] += 0;
                result[5] += 0.5714285714285714;
              }
            }
          } else {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)77.5) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)111.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)89.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5909090909090909;
                result[3] += 0.4090909090909091;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)94.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)109.5) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)66.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.18181818181818182;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8181818181818182;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)67.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)113.5) ) ) {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.8;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.8333333333333334;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8888888888888888;
                result[3] += 0.09523809523809523;
                result[4] += 0;
                result[5] += 0.015873015873015872;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3076923076923077;
                result[3] += 0.6923076923076923;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)118.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9789473684210527;
                result[3] += 0.021052631578947368;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8260869565217391;
                result[3] += 0.17391304347826086;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)103.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9523809523809523;
                result[3] += 0.047619047619047616;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.625;
                result[3] += 0.375;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)68) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)74) ) ) {
                result[0] += 0.005076142131979695;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9898477157360406;
                result[5] += 0.005076142131979695;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0.6666666666666666;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)72) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)95.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
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
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8181818181818182;
                result[5] += 0.18181818181818182;
              } else {
                result[0] += 0.1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0.8;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)58.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.006527415143603133;
                result[2] += 0.0026109660574412533;
                result[3] += 0.03524804177545692;
                result[4] += 0.015665796344647518;
                result[5] += 0.9399477806788512;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)70) ) ) {
                result[0] += 0;
                result[1] += 0.125;
                result[2] += 0;
                result[3] += 0.375;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.17073170731707318;
                result[4] += 0;
                result[5] += 0.8292682926829268;
              }
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.017241379310344827;
                result[3] += 0.27586206896551724;
                result[4] += 0.05172413793103448;
                result[5] += 0.6551724137931034;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8305084745762712;
                result[4] += 0;
                result[5] += 0.1694915254237288;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)46.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)99.5) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)99) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
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
        }
      } else {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)88) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.09090909090909091;
                result[1] += 0.8181818181818182;
                result[2] += 0;
                result[3] += 0.030303030303030304;
                result[4] += 0.06060606060606061;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)52.5) ) ) {
                result[0] += 0.875;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.125;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.011111111111111112;
                result[2] += 0;
                result[3] += 0.022222222222222223;
                result[4] += 0.9555555555555556;
                result[5] += 0.011111111111111112;
              }
            }
          } else {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
                result[0] += 0.26865671641791045;
                result[1] += 0.1044776119402985;
                result[2] += 0;
                result[3] += 0.04477611940298507;
                result[4] += 0.5074626865671642;
                result[5] += 0.07462686567164178;
              } else {
                result[0] += 0.9259259259259259;
                result[1] += 0;
                result[2] += 0.004873294346978557;
                result[3] += 0.014619883040935672;
                result[4] += 0.043859649122807015;
                result[5] += 0.010721247563352826;
              }
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0.05555555555555555;
                result[2] += 0.018518518518518517;
                result[3] += 0.1111111111111111;
                result[4] += 0.037037037037037035;
                result[5] += 0.7777777777777778;
              } else {
                result[0] += 0.4307692307692308;
                result[1] += 0;
                result[2] += 0.06153846153846154;
                result[3] += 0.15384615384615385;
                result[4] += 0.23076923076923078;
                result[5] += 0.12307692307692308;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0.38461538461538464;
                result[2] += 0.07692307692307693;
                result[3] += 0;
                result[4] += 0.46153846153846156;
                result[5] += 0.07692307692307693;
              } else {
                result[0] += 0.011673151750972763;
                result[1] += 0.0038910505836575876;
                result[2] += 0.06614785992217899;
                result[3] += 0.4708171206225681;
                result[4] += 0.054474708171206226;
                result[5] += 0.39299610894941633;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
                result[0] += 0.11627906976744186;
                result[1] += 0;
                result[2] += 0.3953488372093023;
                result[3] += 0.3488372093023256;
                result[4] += 0;
                result[5] += 0.13953488372093023;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9655172413793104;
                result[3] += 0.034482758620689655;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)82) ) ) {
                result[0] += 0.9342105263157895;
                result[1] += 0.013157894736842105;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.05263157894736842;
                result[5] += 0;
              } else {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)97) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.7;
              } else {
                result[0] += 0;
                result[1] += 0.625;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.125;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)108) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0784313725490196;
                result[3] += 0.9215686274509803;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.8;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)63.5) ) ) {
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
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)83) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
                result[4] += 0;
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
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)118.5) ) ) {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)98) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.5;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)80.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2857142857142857;
                result[3] += 0.7142857142857143;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8620689655172413;
                result[3] += 0.13793103448275862;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.42857142857142855;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5714285714285714;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.673469387755102;
                result[3] += 0.32653061224489793;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.11764705882352941;
                result[3] += 0.8823529411764706;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)80) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)87) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8461538461538461;
                result[3] += 0.15384615384615385;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9666666666666667;
                result[3] += 0.03333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)119) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9829059829059829;
                result[3] += 0.017094017094017096;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)106.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)111.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9047619047619048;
                result[3] += 0.047619047619047616;
                result[4] += 0;
                result[5] += 0.047619047619047616;
              } else {
                result[0] += 0.7142857142857143;
                result[1] += 0;
                result[2] += 0.2857142857142857;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8651685393258427;
                result[3] += 0.1348314606741573;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9955456570155902;
                result[3] += 0.004454342984409799;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)59) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9230769230769231;
                result[5] += 0.07692307692307693;
              }
            }
          } else {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)71) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
            if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
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
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
            if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)51.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)58.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1111111111111111;
                result[5] += 0.8888888888888888;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8333333333333334;
                result[5] += 0.16666666666666666;
              }
            }
          } else {
            if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)58) ) ) {
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
                result[3] += 0.012084592145015106;
                result[4] += 0.0030211480362537764;
                result[5] += 0.9848942598187311;
              }
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)52.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.125;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.71875;
                result[5] += 0.15625;
              }
            } else {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.012195121951219513;
                result[2] += 0;
                result[3] += 0.04878048780487805;
                result[4] += 0.16463414634146342;
                result[5] += 0.774390243902439;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3561643835616438;
                result[4] += 0.0684931506849315;
                result[5] += 0.5753424657534246;
              }
            }
          } else {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
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
                result[4] += 0.8571428571428571;
                result[5] += 0.14285714285714285;
              }
            } else {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.11764705882352941;
                result[4] += 0;
                result[5] += 0.8823529411764706;
              } else {
                result[0] += 0.016129032258064516;
                result[1] += 0;
                result[2] += 0.008064516129032258;
                result[3] += 0.7580645161290323;
                result[4] += 0.016129032258064516;
                result[5] += 0.20161290322580644;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)50) ) ) {
            if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)76) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)75.5) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.6363636363636364;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.36363636363636365;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)102.5) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)48.5) ) ) {
                result[0] += 0.125;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.375;
                result[5] += 0;
              } else {
                result[0] += 0.017543859649122806;
                result[1] += 0.008771929824561403;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9385964912280702;
                result[5] += 0.03508771929824561;
              }
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
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)80) ) ) {
              result[0] += 0;
              result[1] += 1;
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
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)69) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
                result[0] += 0.2631578947368421;
                result[1] += 0.13157894736842105;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6052631578947368;
                result[5] += 0;
              } else {
                result[0] += 0.9305210918114144;
                result[1] += 0.009925558312655087;
                result[2] += 0;
                result[3] += 0.0024813895781637717;
                result[4] += 0.05707196029776675;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.13793103448275862;
                result[3] += 0.10344827586206896;
                result[4] += 0.20689655172413793;
                result[5] += 0.5517241379310345;
              } else {
                result[0] += 0.84;
                result[1] += 0;
                result[2] += 0.04;
                result[3] += 0.04;
                result[4] += 0.04;
                result[5] += 0.04;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)112) ) ) {
                result[0] += 0.03333333333333333;
                result[1] += 0.004761904761904762;
                result[2] += 0.047619047619047616;
                result[3] += 0.4523809523809524;
                result[4] += 0.047619047619047616;
                result[5] += 0.4142857142857143;
              } else {
                result[0] += 0.2857142857142857;
                result[1] += 0.7142857142857143;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.13333333333333333;
                result[3] += 0.1;
                result[4] += 0.03333333333333333;
                result[5] += 0.7333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0.02564102564102564;
                result[2] += 0.8461538461538461;
                result[3] += 0.07692307692307693;
                result[4] += 0;
                result[5] += 0.05128205128205128;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)55) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
                result[0] += 0.4;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6;
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
          } else {
            if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)76.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)77) ) ) {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0;
              } else {
                result[0] += 0.96987087517934;
                result[1] += 0.0028694404591104736;
                result[2] += 0.005738880918220947;
                result[3] += 0.0028694404591104736;
                result[4] += 0.018651362984218076;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
        if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)94.5) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)70) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)79) ) ) {
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
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)111.5) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.045454545454545456;
                result[5] += 0.9545454545454546;
              } else {
                result[0] += 0;
                result[1] += 0.09090909090909091;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9090909090909091;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0.06896551724137931;
                result[2] += 0;
                result[3] += 0.6206896551724138;
                result[4] += 0;
                result[5] += 0.3103448275862069;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06666666666666667;
                result[4] += 0.06666666666666667;
                result[5] += 0.8666666666666667;
              }
            }
          } else {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)80) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)75) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07142857142857142;
                result[4] += 0;
                result[5] += 0.9285714285714286;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.058823529411764705;
                result[3] += 0.8823529411764706;
                result[4] += 0;
                result[5] += 0.058823529411764705;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.5;
              }
            } else {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2857142857142857;
                result[3] += 0.6428571428571429;
                result[4] += 0;
                result[5] += 0.07142857142857142;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
            if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)101) ) ) {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16363636363636364;
                result[3] += 0.7272727272727273;
                result[4] += 0;
                result[5] += 0.10909090909090909;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7272727272727273;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.2727272727272727;
              }
            } else {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.875;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)99) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2727272727272727;
                result[3] += 0.7272727272727273;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              }
            } else {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6046511627906976;
                result[3] += 0.27906976744186046;
                result[4] += 0;
                result[5] += 0.11627906976744186;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9393939393939394;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.06060606060606061;
              }
            }
          } else {
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)84.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)92.5) ) ) {
                result[0] += 0.010830324909747292;
                result[1] += 0;
                result[2] += 0.8880866425992779;
                result[3] += 0.09747292418772563;
                result[4] += 0;
                result[5] += 0.0036101083032490976;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.8;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)102.5) ) ) {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)108) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9117647058823529;
                result[3] += 0.08823529411764706;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)87) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.96;
                result[3] += 0.04;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9972826086956522;
                result[3] += 0.002717391304347826;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.05555555555555555;
                result[1] += 0;
                result[2] += 0.9444444444444444;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)49.5) ) ) {
                result[0] += 0;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9914893617021276;
                result[5] += 0.00851063829787234;
              }
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9090909090909091;
                result[5] += 0.09090909090909091;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0.75;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)55.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06060606060606061;
                result[4] += 0.18181818181818182;
                result[5] += 0.7575757575757576;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9166666666666666;
                result[5] += 0.08333333333333333;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)51.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)97) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)94.5) ) ) {
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
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)83) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.004081632653061225;
                result[3] += 0.02857142857142857;
                result[4] += 0.0163265306122449;
                result[5] += 0.9510204081632653;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6;
                result[4] += 0;
                result[5] += 0.4;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)57.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8;
                result[4] += 0;
                result[5] += 0.2;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16363636363636364;
                result[4] += 0.07272727272727272;
                result[5] += 0.7636363636363637;
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)70.5) ) ) {
                result[0] += 0.22580645161290322;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1935483870967742;
                result[4] += 0.3870967741935484;
                result[5] += 0.1935483870967742;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.14516129032258066;
                result[3] += 0.45161290322580644;
                result[4] += 0;
                result[5] += 0.4032258064516129;
              }
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.18181818181818182;
                result[4] += 0;
                result[5] += 0.8181818181818182;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8846153846153846;
                result[4] += 0;
                result[5] += 0.11538461538461539;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)90) ) ) {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)54.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
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
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)70) ) ) {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)106) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
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
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0.6666666666666666;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)87) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5714285714285714;
                result[4] += 0.42857142857142855;
                result[5] += 0;
              } else {
                result[0] += 0.022727272727272728;
                result[1] += 0.8636363636363636;
                result[2] += 0;
                result[3] += 0.011363636363636364;
                result[4] += 0.07954545454545454;
                result[5] += 0.022727272727272728;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)54) ) ) {
                result[0] += 0.5882352941176471;
                result[1] += 0.09803921568627451;
                result[2] += 0;
                result[3] += 0.0392156862745098;
                result[4] += 0.27450980392156865;
                result[5] += 0;
              } else {
                result[0] += 0.02702702702702703;
                result[1] += 0.009009009009009009;
                result[2] += 0.018018018018018018;
                result[3] += 0.14414414414414414;
                result[4] += 0.6846846846846847;
                result[5] += 0.11711711711711711;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)71) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.1875;
                result[1] += 0.15625;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.65625;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
                result[0] += 0.9528205128205128;
                result[1] += 0.005128205128205128;
                result[2] += 0.003076923076923077;
                result[3] += 0.008205128205128205;
                result[4] += 0.02564102564102564;
                result[5] += 0.005128205128205128;
              } else {
                result[0] += 0.5308641975308642;
                result[1] += 0;
                result[2] += 0.09876543209876543;
                result[3] += 0.1728395061728395;
                result[4] += 0.1728395061728395;
                result[5] += 0.024691358024691357;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1095890410958904;
                result[4] += 0.0684931506849315;
                result[5] += 0.821917808219178;
              } else {
                result[0] += 0.04938271604938271;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3950617283950617;
                result[4] += 0.07407407407407407;
                result[5] += 0.48148148148148145;
              }
            } else {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
                result[0] += 0.05714285714285714;
                result[1] += 0.02857142857142857;
                result[2] += 0.014285714285714285;
                result[3] += 0.5857142857142857;
                result[4] += 0.08571428571428572;
                result[5] += 0.22857142857142856;
              } else {
                result[0] += 0.04807692307692308;
                result[1] += 0;
                result[2] += 0.5480769230769231;
                result[3] += 0.27884615384615385;
                result[4] += 0;
                result[5] += 0.125;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)89) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.07142857142857142;
                result[1] += 0;
                result[2] += 0.9285714285714286;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
                result[0] += 0.375;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.625;
                result[5] += 0;
              } else {
                result[0] += 0.9107142857142857;
                result[1] += 0;
                result[2] += 0.05357142857142857;
                result[3] += 0;
                result[4] += 0.03571428571428571;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.3333333333333333;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            } else {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.90625;
                result[4] += 0;
                result[5] += 0.09375;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3888888888888889;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.1111111111111111;
              }
            }
          } else {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)66.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)71) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.03225806451612903;
                result[2] += 0.12903225806451613;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8387096774193549;
              }
            }
          } else {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9166666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.08333333333333333;
              }
            } else {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
                result[0] += 0.05;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.7;
                result[4] += 0;
                result[5] += 0.05;
              } else {
                result[0] += 0.16666666666666666;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)118.5) ) ) {
            if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)105.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)107.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.6;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.09090909090909091;
                result[2] += 0.6363636363636364;
                result[3] += 0.2727272727272727;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.856;
                result[3] += 0.14;
                result[4] += 0;
                result[5] += 0.004;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)120.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)94.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)109) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9223300970873787;
                result[3] += 0.07766990291262135;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.3;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.25;
              } else {
                result[0] += 0.0022222222222222222;
                result[1] += 0;
                result[2] += 0.9933333333333333;
                result[3] += 0.0044444444444444444;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)106) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65.5) ) ) {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)35.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9866071428571429;
                result[5] += 0.013392857142857142;
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
            if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0.25;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)111) ) ) {
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
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61) ) ) {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)51.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9411764705882353;
                result[5] += 0.058823529411764705;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          } else {
            if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)64) ) ) {
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
                result[3] += 0.02627511591962906;
                result[4] += 0.010819165378670788;
                result[5] += 0.9629057187017002;
              }
            } else {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.10344827586206896;
                result[4] += 0.06896551724137931;
                result[5] += 0.8275862068965517;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0.45;
                result[5] += 0.3;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)67.5) ) ) {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)97) ) ) {
                result[0] += 0.1282051282051282;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5897435897435898;
                result[5] += 0.28205128205128205;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)94) ) ) {
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
          } else {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0.10526315789473684;
                result[2] += 0;
                result[3] += 0.05263157894736842;
                result[4] += 0.6578947368421053;
                result[5] += 0.18421052631578946;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1165644171779141;
                result[4] += 0.13496932515337423;
                result[5] += 0.7484662576687117;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
                result[0] += 0.011494252873563218;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3448275862068966;
                result[4] += 0;
                result[5] += 0.6436781609195402;
              } else {
                result[0] += 0.06557377049180328;
                result[1] += 0;
                result[2] += 0.01639344262295082;
                result[3] += 0.7786885245901639;
                result[4] += 0;
                result[5] += 0.13934426229508196;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)44) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8;
                result[4] += 0.2;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)82.5) ) ) {
                result[0] += 0.047619047619047616;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8095238095238095;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.022727272727272728;
                result[4] += 0.9772727272727273;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.8235294117647058;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.17647058823529413;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
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
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)52.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0.045454545454545456;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9545454545454546;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.75;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)68.5) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.75;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
                result[0] += 0.9801324503311258;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.019867549668874173;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0.75;
              }
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0.17857142857142858;
                result[2] += 0;
                result[3] += 0.03571428571428571;
                result[4] += 0.5;
                result[5] += 0.2857142857142857;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.03333333333333333;
                result[4] += 0.23333333333333334;
                result[5] += 0.7333333333333333;
              }
            } else {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0379746835443038;
                result[3] += 0.3291139240506329;
                result[4] += 0.02531645569620253;
                result[5] += 0.6075949367088608;
              } else {
                result[0] += 0.10294117647058823;
                result[1] += 0.029411764705882353;
                result[2] += 0.058823529411764705;
                result[3] += 0.5882352941176471;
                result[4] += 0;
                result[5] += 0.22058823529411764;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)108) ) ) {
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
                result[0] += 0.20512820512820512;
                result[1] += 0.28205128205128205;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5128205128205128;
                result[5] += 0;
              } else {
                result[0] += 0.9281609195402298;
                result[1] += 0.004789272030651341;
                result[2] += 0.013409961685823755;
                result[3] += 0.012452107279693486;
                result[4] += 0.03639846743295019;
                result[5] += 0.004789272030651341;
              }
            } else {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
                result[0] += 0.05263157894736842;
                result[1] += 0.02631578947368421;
                result[2] += 0.8157894736842105;
                result[3] += 0.07894736842105263;
                result[4] += 0;
                result[5] += 0.02631578947368421;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)44) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.4;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0;
                result[4] += 0.4;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)92.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7142857142857143;
                result[4] += 0.07142857142857142;
                result[5] += 0.21428571428571427;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9;
                result[4] += 0;
                result[5] += 0.1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.5666666666666667;
                result[4] += 0.03333333333333333;
                result[5] += 0.2;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)110.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0.08333333333333333;
                result[4] += 0;
                result[5] += 0.08333333333333333;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          }
        } else {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)116.5) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)70) ) ) {
                result[0] += 0;
                result[1] += 0.2;
                result[2] += 0.3;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.23076923076923078;
                result[4] += 0;
                result[5] += 0.7692307692307693;
              }
            } else {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5384615384615384;
                result[3] += 0.46153846153846156;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.95;
                result[3] += 0.016666666666666666;
                result[4] += 0;
                result[5] += 0.03333333333333333;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)118) ) ) {
                result[0] += 0.9047619047619048;
                result[1] += 0;
                result[2] += 0.047619047619047616;
                result[3] += 0;
                result[4] += 0.047619047619047616;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)101) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)75) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)73.5) ) ) {
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
                result[3] += 0.2857142857142857;
                result[4] += 0;
                result[5] += 0.7142857142857143;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.047619047619047616;
                result[3] += 0.9523809523809523;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4090909090909091;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.09090909090909091;
              }
            }
          } else {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6363636363636364;
                result[3] += 0.18181818181818182;
                result[4] += 0;
                result[5] += 0.18181818181818182;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.35714285714285715;
                result[3] += 0.6428571428571429;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)86.5) ) ) {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.14285714285714285;
                result[3] += 0.8571428571428571;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9333333333333333;
                result[3] += 0.06666666666666667;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9411764705882353;
                result[3] += 0.058823529411764705;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)89.5) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)92) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)73.5) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)107.5) ) ) {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)112) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
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
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)113.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7941176470588235;
                result[3] += 0.18382352941176472;
                result[4] += 0;
                result[5] += 0.022058823529411766;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.896551724137931;
                result[3] += 0.10344827586206896;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9746835443037974;
                result[3] += 0.02531645569620253;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)121) ) ) {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9968454258675079;
                result[3] += 0.0031545741324921135;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9166666666666666;
                result[3] += 0.08333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)113) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.02;
                result[1] += 0;
                result[2] += 0.98;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)78) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)31.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.0055248618784530384;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.988950276243094;
                result[5] += 0.0055248618784530384;
              }
            } else {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)58) ) ) {
                result[0] += 0;
                result[1] += 0.06666666666666667;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8333333333333334;
                result[5] += 0.1;
              } else {
                result[0] += 0.06666666666666667;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4;
                result[5] += 0.5333333333333333;
              }
            }
          } else {
            if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
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
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
            if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)54) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.03333333333333333;
                result[5] += 0.9666666666666667;
              }
            } else {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
                result[0] += 0.6666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
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
          } else {
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)87) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5714285714285714;
                result[5] += 0.42857142857142855;
              }
            }
          } else {
            if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)53.5) ) ) {
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
                result[3] += 0.024045261669024046;
                result[4] += 0.018387553041018388;
                result[5] += 0.9575671852899575;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
                result[0] += 0.04166666666666667;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9166666666666667;
                result[5] += 0.04166666666666667;
              } else {
                result[0] += 0.027586206896551724;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.15172413793103448;
                result[4] += 0.0896551724137931;
                result[5] += 0.7310344827586207;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.05405405405405406;
                result[2] += 0;
                result[3] += 0.02702702702702703;
                result[4] += 0.0945945945945946;
                result[5] += 0.8243243243243243;
              }
            } else {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07142857142857142;
                result[4] += 0;
                result[5] += 0.9285714285714286;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5952380952380952;
                result[4] += 0.07142857142857142;
                result[5] += 0.3333333333333333;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)76) ) ) {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.10344827586206896;
                result[4] += 0.13793103448275862;
                result[5] += 0.7586206896551724;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8263473053892215;
                result[4] += 0;
                result[5] += 0.17365269461077845;
              } else {
                result[0] += 0;
                result[1] += 0.020833333333333332;
                result[2] += 0;
                result[3] += 0.3541666666666667;
                result[4] += 0;
                result[5] += 0.625;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)99.5) ) ) {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
                result[0] += 0.019230769230769232;
                result[1] += 0.057692307692307696;
                result[2] += 0;
                result[3] += 0.028846153846153848;
                result[4] += 0.8846153846153846;
                result[5] += 0.009615384615384616;
              } else {
                result[0] += 0.375;
                result[1] += 0.09375;
                result[2] += 0;
                result[3] += 0.03125;
                result[4] += 0.4375;
                result[5] += 0.0625;
              }
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0;
                result[4] += 0.16666666666666666;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)66) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0.9642857142857143;
                result[2] += 0;
                result[3] += 0.03571428571428571;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.058823529411764705;
                result[1] += 0.47058823529411764;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.47058823529411764;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)58.5) ) ) {
                result[0] += 0.9166666666666666;
                result[1] += 0.08333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.041666666666666664;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0.5416666666666666;
                result[5] += 0.08333333333333333;
              }
            } else {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)110.5) ) ) {
                result[0] += 0.9358851674641149;
                result[1] += 0.003827751196172249;
                result[2] += 0;
                result[3] += 0.010526315789473684;
                result[4] += 0.044976076555023926;
                result[5] += 0.004784688995215311;
              } else {
                result[0] += 0;
                result[1] += 0.4;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07246376811594203;
                result[3] += 0.21739130434782608;
                result[4] += 0.043478260869565216;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0.013513513513513514;
                result[1] += 0.013513513513513514;
                result[2] += 0.3738738738738739;
                result[3] += 0.40540540540540543;
                result[4] += 0.013513513513513514;
                result[5] += 0.18018018018018017;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
                result[0] += 0.9375;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.0625;
                result[5] += 0;
              } else {
                result[0] += 0.5098039215686275;
                result[1] += 0;
                result[2] += 0.3921568627450981;
                result[3] += 0;
                result[4] += 0.09803921568627452;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)100.5) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)98) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
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
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)90) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.15789473684210525;
                result[4] += 0;
                result[5] += 0.8421052631578947;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.6;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)76.5) ) ) {
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
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)110) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9459459459459459;
                result[3] += 0.05405405405405406;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)99) ) ) {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)65) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6415094339622641;
                result[3] += 0.3584905660377358;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8690476190476191;
                result[3] += 0.13095238095238096;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)119) ) ) {
                result[0] += 0.011494252873563218;
                result[1] += 0;
                result[2] += 0.9080459770114943;
                result[3] += 0.07471264367816093;
                result[4] += 0;
                result[5] += 0.005747126436781609;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9927536231884058;
                result[3] += 0.007246376811594203;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.775;
                result[3] += 0.225;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)118.5) ) ) {
            if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)59.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6470588235294118;
                result[5] += 0.35294117647058826;
              } else {
                result[0] += 0.0392156862745098;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9607843137254902;
                result[5] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)80.5) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)45.5) ) ) {
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
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)63) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)65.5) ) ) {
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
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)58) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.00129366106080207;
                result[2] += 0.00258732212160414;
                result[3] += 0.027166882276843468;
                result[4] += 0.015523932729624839;
                result[5] += 0.9534282018111255;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)66) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)63.5) ) ) {
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
                result[3] += 0.125;
                result[4] += 0.06818181818181818;
                result[5] += 0.8068181818181818;
              }
            }
          } else {
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.023809523809523808;
                result[3] += 0.27380952380952384;
                result[4] += 0.03571428571428571;
                result[5] += 0.6666666666666666;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
                result[0] += 0.19230769230769232;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3076923076923077;
                result[4] += 0.038461538461538464;
                result[5] += 0.46153846153846156;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8222222222222222;
                result[4] += 0;
                result[5] += 0.17777777777777778;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)101) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)102) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)48.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.023809523809523808;
                result[1] += 0.011904761904761904;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9285714285714286;
                result[5] += 0.03571428571428571;
              }
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0.6923076923076923;
                result[2] += 0;
                result[3] += 0.15384615384615385;
                result[4] += 0.15384615384615385;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)120) ) ) {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
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
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)102) ) ) {
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
          }
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
                result[0] += 0;
                result[1] += 0.4;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6;
                result[5] += 0;
              } else {
                result[0] += 0.9856115107913669;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.014388489208633094;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
                result[0] += 0.1111111111111111;
                result[1] += 0.03418803418803419;
                result[2] += 0.008547008547008548;
                result[3] += 0.11965811965811966;
                result[4] += 0.5555555555555556;
                result[5] += 0.17094017094017094;
              } else {
                result[0] += 0.07692307692307693;
                result[1] += 0.8461538461538461;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.038461538461538464;
                result[5] += 0.038461538461538464;
              }
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.8333333333333334;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.16666666666666666;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
                result[0] += 0.1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.15;
                result[4] += 0.65;
                result[5] += 0.1;
              } else {
                result[0] += 0.9628865979381445;
                result[1] += 0;
                result[2] += 0.0020618556701030933;
                result[3] += 0.011340206185567012;
                result[4] += 0.013402061855670104;
                result[5] += 0.010309278350515465;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
                result[0] += 0.15;
                result[1] += 0.35;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0.4;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.018633540372670808;
                result[2] += 0.062111801242236024;
                result[3] += 0.5714285714285714;
                result[4] += 0.012422360248447204;
                result[5] += 0.33540372670807456;
              }
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.18181818181818182;
                result[4] += 0.4090909090909091;
                result[5] += 0.4090909090909091;
              } else {
                result[0] += 0.03278688524590164;
                result[1] += 0;
                result[2] += 0.6885245901639344;
                result[3] += 0.14754098360655737;
                result[4] += 0.01639344262295082;
                result[5] += 0.11475409836065574;
              }
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
                result[0] += 0.05263157894736842;
                result[1] += 0.15789473684210525;
                result[2] += 0;
                result[3] += 0.05263157894736842;
                result[4] += 0.7368421052631579;
                result[5] += 0;
              } else {
                result[0] += 0.625;
                result[1] += 0;
                result[2] += 0.1875;
                result[3] += 0;
                result[4] += 0.1875;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)87) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.6;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.15384615384615385;
                result[3] += 0.7307692307692307;
                result[4] += 0;
                result[5] += 0.11538461538461539;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)102.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)80.5) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)81.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)71) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)106.5) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0.029411764705882353;
                result[2] += 0.20588235294117646;
                result[3] += 0.5294117647058824;
                result[4] += 0.11764705882352941;
                result[5] += 0.11764705882352941;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0.04166666666666667;
                result[1] += 0;
                result[2] += 0.7916666666666667;
                result[3] += 0.16666666666666669;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)98) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9583333333333334;
                result[3] += 0.041666666666666664;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.47368421052631576;
                result[3] += 0.5263157894736842;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)98) ) ) {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7368421052631579;
                result[3] += 0.21052631578947367;
                result[4] += 0;
                result[5] += 0.05263157894736842;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9357798165137615;
                result[3] += 0.06422018348623854;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.75;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)101) ) ) {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8095238095238095;
                result[3] += 0.19047619047619047;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)119) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9866962305986696;
                result[3] += 0.013303769401330377;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9038461538461539;
                result[3] += 0.09615384615384616;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 30;
  result[1] /= 30;
  result[2] /= 30;
  result[3] /= 30;
  result[4] /= 30;
  result[5] /= 30;
  
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
    

    FILE* file = fopen("./codegen_small/dataset_146/split_3/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        
    }
    

    return 0;
}
