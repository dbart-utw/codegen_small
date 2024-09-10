
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)45) ) ) {
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
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)79.5) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)52.5) ) ) {
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
                result[4] += 0.9583333333333334;
                result[5] += 0.041666666666666664;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
                result[0] += 0.972972972972973;
                result[1] += 0.02702702702702703;
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
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56) ) ) {
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
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)60) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
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
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.35714285714285715;
                result[5] += 0.6428571428571429;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.008431703204047217;
                result[4] += 0.011804384485666104;
                result[5] += 0.9797639123102867;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8181818181818182;
                result[5] += 0.18181818181818182;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.20689655172413793;
                result[4] += 0.13793103448275862;
                result[5] += 0.6551724137931034;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.12087912087912088;
                result[4] += 0.02197802197802198;
                result[5] += 0.8571428571428571;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.058823529411764705;
                result[4] += 0.5294117647058824;
                result[5] += 0.4117647058823529;
              }
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.03508771929824561;
                result[3] += 0.16666666666666666;
                result[4] += 0.07017543859649122;
                result[5] += 0.7280701754385965;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8461538461538461;
                result[4] += 0;
                result[5] += 0.15384615384615385;
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.24;
                result[4] += 0.04;
                result[5] += 0.72;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.1111111111111111;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0.007407407407407408;
                result[2] += 0.014814814814814815;
                result[3] += 0.8592592592592593;
                result[4] += 0;
                result[5] += 0.11851851851851852;
              } else {
                result[0] += 0.75;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.125;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)49.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 0.024390243902439025;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.926829268292683;
                result[5] += 0.04878048780487805;
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58.5) ) ) {
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
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0.8;
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 0.96875;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.03125;
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)69) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)130.5) ) ) {
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
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)110.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
                result[0] += 0.8461538461538461;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.15384615384615385;
                result[5] += 0;
              } else {
                result[0] += 0.02409638554216868;
                result[1] += 0;
                result[2] += 0.08433734939759037;
                result[3] += 0.01204819277108434;
                result[4] += 0.746987951807229;
                result[5] += 0.13253012048192775;
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)110.5) ) ) {
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.17857142857142858;
                result[4] += 0.125;
                result[5] += 0.44642857142857145;
              } else {
                result[0] += 0.928092042186002;
                result[1] += 0.006711409395973155;
                result[2] += 0.0038350910834132313;
                result[3] += 0.014381591562799619;
                result[4] += 0.04026845637583893;
                result[5] += 0.006711409395973155;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.027210884353741496;
                result[3] += 0.30612244897959184;
                result[4] += 0.006802721088435374;
                result[5] += 0.6598639455782312;
              } else {
                result[0] += 0.4117647058823529;
                result[1] += 0;
                result[2] += 0.17647058823529413;
                result[3] += 0.35294117647058826;
                result[4] += 0;
                result[5] += 0.058823529411764705;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
                result[0] += 0.03508771929824561;
                result[1] += 0.07017543859649122;
                result[2] += 0.15789473684210525;
                result[3] += 0.6491228070175439;
                result[4] += 0;
                result[5] += 0.08771929824561403;
              } else {
                result[0] += 0.052631578947368425;
                result[1] += 0;
                result[2] += 0.7894736842105264;
                result[3] += 0.052631578947368425;
                result[4] += 0;
                result[5] += 0.10526315789473685;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)111) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)109.5) ) ) {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
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
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9038461538461539;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.09615384615384616;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)100.5) ) ) {
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
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)94) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0;
                result[4] += 0.25;
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
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)79.5) ) ) {
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
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0.25;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07142857142857142;
                result[4] += 0;
                result[5] += 0.9285714285714286;
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
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6;
                result[4] += 0;
                result[5] += 0.4;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8809523809523809;
                result[4] += 0;
                result[5] += 0.11904761904761904;
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
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93) ) ) {
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
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)106.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.375;
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)92.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86) ) ) {
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
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
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
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
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
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.6;
                result[4] += 0;
                result[5] += 0.06666666666666667;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.1;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)109.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7755102040816326;
                result[3] += 0.22448979591836735;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)76.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.96;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.04;
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
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)92.5) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59) ) ) {
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)126.5) ) ) {
                result[0] += 0.017985611510791366;
                result[1] += 0;
                result[2] += 0.8345323741007195;
                result[3] += 0.12949640287769784;
                result[4] += 0;
                result[5] += 0.017985611510791366;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9008264462809917;
                result[3] += 0.09917355371900827;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9908675799086758;
                result[3] += 0.0091324200913242;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)113.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
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
                result[4] += 0.9;
                result[5] += 0.1;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
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
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)79.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)74) ) ) {
                result[0] += 0.08333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0.25;
              } else {
                result[0] += 0;
                result[1] += 0.1;
                result[2] += 0;
                result[3] += 0.9;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)95.5) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)66) ) ) {
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
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.02981029810298103;
                result[4] += 0.02168021680216802;
                result[5] += 0.948509485094851;
              } else {
                result[0] += 0;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0.3333333333333333;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0.1111111111111111;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7037037037037037;
                result[5] += 0.18518518518518517;
              } else {
                result[0] += 0.006329113924050633;
                result[1] += 0;
                result[2] += 0.012658227848101266;
                result[3] += 0.10759493670886076;
                result[4] += 0.0759493670886076;
                result[5] += 0.7974683544303798;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)63.5) ) ) {
                result[0] += 0.76;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0.04;
              } else {
                result[0] += 0.002570694087403599;
                result[1] += 0.038560411311053984;
                result[2] += 0.010282776349614395;
                result[3] += 0.5089974293059126;
                result[4] += 0.06683804627249357;
                result[5] += 0.37275064267352187;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)40) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
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
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)44) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)52) ) ) {
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
                result[4] += 0.6666666666666666;
                result[5] += 0.3333333333333333;
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0.3333333333333333;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57.5) ) ) {
                result[0] += 0.8571428571428571;
                result[1] += 0.14285714285714285;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.125;
                result[1] += 0.125;
                result[2] += 0.10714285714285714;
                result[3] += 0.03571428571428571;
                result[4] += 0.5535714285714286;
                result[5] += 0.05357142857142857;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0.7777777777777778;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1111111111111111;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.02127659574468085;
                result[1] += 0.0425531914893617;
                result[2] += 0.02127659574468085;
                result[3] += 0.3191489361702128;
                result[4] += 0.0851063829787234;
                result[5] += 0.5106382978723404;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
                result[0] += 0.6756756756756757;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.32432432432432434;
                result[5] += 0;
              } else {
                result[0] += 0.956745623069001;
                result[1] += 0;
                result[2] += 0.003089598352214212;
                result[3] += 0.009268795056642637;
                result[4] += 0.029866117404737384;
                result[5] += 0.0010298661174047373;
              }
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)110.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0.037037037037037035;
                result[4] += 0;
                result[5] += 0.8518518518518519;
              } else {
                result[0] += 0.04054054054054054;
                result[1] += 0;
                result[2] += 0.02702702702702703;
                result[3] += 0.6081081081081081;
                result[4] += 0.02702702702702703;
                result[5] += 0.2972972972972973;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
                result[0] += 0.02702702702702703;
                result[1] += 0;
                result[2] += 0.21621621621621623;
                result[3] += 0.40540540540540543;
                result[4] += 0.2702702702702703;
                result[5] += 0.08108108108108109;
              } else {
                result[0] += 0.07792207792207792;
                result[1] += 0;
                result[2] += 0.8051948051948052;
                result[3] += 0.03896103896103896;
                result[4] += 0;
                result[5] += 0.07792207792207792;
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)105) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)105) ) ) {
                result[0] += 0.11538461538461539;
                result[1] += 0;
                result[2] += 0.34615384615384615;
                result[3] += 0;
                result[4] += 0.5384615384615384;
                result[5] += 0;
              } else {
                result[0] += 0.9230769230769231;
                result[1] += 0;
                result[2] += 0.07692307692307693;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82) ) ) {
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
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)70.5) ) ) {
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
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)76) ) ) {
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)79.5) ) ) {
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
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0.022222222222222223;
                result[2] += 0;
                result[3] += 0.9333333333333333;
                result[4] += 0;
                result[5] += 0.044444444444444446;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2857142857142857;
                result[3] += 0.2857142857142857;
                result[4] += 0;
                result[5] += 0.42857142857142855;
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.15789473684210525;
                result[3] += 0.6578947368421053;
                result[4] += 0;
                result[5] += 0.18421052631578946;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8461538461538461;
                result[3] += 0.11538461538461539;
                result[4] += 0;
                result[5] += 0.038461538461538464;
              }
            }
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)108.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9433962264150944;
                result[3] += 0.03773584905660377;
                result[4] += 0;
                result[5] += 0.018867924528301886;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)105.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0.7777777777777778;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)112) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)121) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.875;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0.5;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)98.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0.25;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7317073170731707;
                result[3] += 0.21951219512195122;
                result[4] += 0;
                result[5] += 0.04878048780487805;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)102) ) ) {
                result[0] += 0.005917159763313609;
                result[1] += 0;
                result[2] += 0.8875739644970414;
                result[3] += 0.10650887573964497;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
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
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)103.5) ) ) {
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5714285714285714;
                result[3] += 0.42857142857142855;
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
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9889705882352942;
                result[3] += 0.011029411764705883;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)68.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)82.5) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)46.5) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.0625;
                result[5] += 0.9375;
              } else {
                result[0] += 0;
                result[1] += 0.5454545454545454;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.45454545454545453;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.00686106346483705;
                result[4] += 0.010291595197255575;
                result[5] += 0.9828473413379074;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.45454545454545453;
                result[3] += 0.09090909090909091;
                result[4] += 0.2727272727272727;
                result[5] += 0.18181818181818182;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
                result[0] += 0.09090909090909091;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.09090909090909091;
                result[4] += 0.8181818181818182;
                result[5] += 0;
              } else {
                result[0] += 0.0196078431372549;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1503267973856209;
                result[4] += 0.06535947712418301;
                result[5] += 0.7647058823529411;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
                result[0] += 0.8636363636363636;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.11363636363636363;
                result[5] += 0.022727272727272728;
              } else {
                result[0] += 0;
                result[1] += 0.05154639175257732;
                result[2] += 0.030927835051546393;
                result[3] += 0.1134020618556701;
                result[4] += 0.13917525773195877;
                result[5] += 0.6649484536082474;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0.0425531914893617;
                result[2] += 0;
                result[3] += 0.2553191489361702;
                result[4] += 0;
                result[5] += 0.7021276595744681;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.03314917127071823;
                result[3] += 0.7237569060773481;
                result[4] += 0.011049723756906077;
                result[5] += 0.23204419889502761;
              }
            }
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)107) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)48) ) ) {
                result[0] += 0.05128205128205128;
                result[1] += 0.7948717948717948;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.15384615384615385;
                result[5] += 0;
              } else {
                result[0] += 0.03361344537815126;
                result[1] += 0.1092436974789916;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8571428571428571;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
                result[0] += 0.23529411764705882;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7647058823529411;
                result[5] += 0;
              } else {
                result[0] += 0.8931623931623932;
                result[1] += 0.021367521367521368;
                result[2] += 0.002136752136752137;
                result[3] += 0.01282051282051282;
                result[4] += 0.05982905982905983;
                result[5] += 0.010683760683760684;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)63.5) ) ) {
                result[0] += 0.0625;
                result[1] += 0.16666666666666666;
                result[2] += 0;
                result[3] += 0.041666666666666664;
                result[4] += 0.4791666666666667;
                result[5] += 0.25;
              } else {
                result[0] += 0.006557377049180328;
                result[1] += 0.013114754098360656;
                result[2] += 0.01639344262295082;
                result[3] += 0.3836065573770492;
                result[4] += 0.03278688524590164;
                result[5] += 0.5475409836065573;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0.6111111111111112;
                result[4] += 0;
                result[5] += 0.16666666666666666;
              } else {
                result[0] += 0.09259259259259259;
                result[1] += 0;
                result[2] += 0.6851851851851852;
                result[3] += 0.12962962962962962;
                result[4] += 0;
                result[5] += 0.09259259259259259;
              }
            }
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)60) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
                result[0] += 0.9887278582930756;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.011272141706924315;
                result[5] += 0;
              } else {
                result[0] += 0.64;
                result[1] += 0.02;
                result[2] += 0.04;
                result[3] += 0.02;
                result[4] += 0.28;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)114.5) ) ) {
                result[0] += 0.23529411764705882;
                result[1] += 0;
                result[2] += 0.7647058823529411;
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)81.5) ) ) {
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
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0.9090909090909091;
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)107) ) ) {
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.8;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5217391304347826;
                result[3] += 0.43478260869565216;
                result[4] += 0;
                result[5] += 0.043478260869565216;
              }
            }
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)100) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)123) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)102.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7142857142857143;
                result[4] += 0;
                result[5] += 0.2857142857142857;
              } else {
                result[0] += 0.019801980198019802;
                result[1] += 0;
                result[2] += 0.8316831683168316;
                result[3] += 0.0891089108910891;
                result[4] += 0;
                result[5] += 0.0594059405940594;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.66;
                result[3] += 0.34;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3;
                result[3] += 0.7;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)129) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)106.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.926829268292683;
                result[3] += 0.06097560975609756;
                result[4] += 0;
                result[5] += 0.012195121951219513;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8571428571428571;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)69) ) ) {
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
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)110.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
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
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.75;
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
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)113.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9871244635193133;
                result[3] += 0.012875536480686695;
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
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)45) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)81.5) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
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
            }
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.06451612903225806;
                result[5] += 0.9354838709677419;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)56) ) ) {
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
                result[4] += 0.9090909090909091;
                result[5] += 0.09090909090909091;
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)55.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)81) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.16666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.05555555555555555;
                result[4] += 0.7777777777777778;
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58.5) ) ) {
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
                result[4] += 0.05;
                result[5] += 0.95;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)62.5) ) ) {
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
                result[3] += 0.16666666666666666;
                result[4] += 0.8333333333333334;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58) ) ) {
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
                result[3] += 0.009900990099009901;
                result[4] += 0.0019801980198019802;
                result[5] += 0.9881188118811881;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5714285714285714;
                result[4] += 0;
                result[5] += 0.42857142857142855;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88) ) ) {
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
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59.5) ) ) {
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
                result[3] += 0.058823529411764705;
                result[4] += 0.058823529411764705;
                result[5] += 0.8823529411764706;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7;
                result[4] += 0;
                result[5] += 0.3;
              } else {
                result[0] += 0;
                result[1] += 0.017543859649122806;
                result[2] += 0;
                result[3] += 0.06140350877192982;
                result[4] += 0.06140350877192982;
                result[5] += 0.8596491228070176;
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.041666666666666664;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.7083333333333334;
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
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
                result[4] += 0.3333333333333333;
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9285714285714286;
                result[5] += 0.07142857142857142;
              } else {
                result[0] += 0;
                result[1] += 0.21428571428571427;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0.14285714285714285;
                result[5] += 0.5;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.10526315789473684;
                result[4] += 0.3684210526315789;
                result[5] += 0.5263157894736842;
              } else {
                result[0] += 0;
                result[1] += 0.013422818791946308;
                result[2] += 0;
                result[3] += 0.16778523489932887;
                result[4] += 0.006711409395973154;
                result[5] += 0.8120805369127517;
              }
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.14285714285714285;
                result[3] += 0.35714285714285715;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9206349206349206;
                result[4] += 0;
                result[5] += 0.07936507936507936;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)88) ) ) {
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
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66) ) ) {
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
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)76) ) ) {
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
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0.1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9411764705882353;
                result[2] += 0;
                result[3] += 0.058823529411764705;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)52) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)48.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91) ) ) {
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
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.013157894736842105;
                result[4] += 0.9868421052631579;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
                result[0] += 0.638888888888889;
                result[1] += 0.19444444444444448;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.16666666666666669;
                result[5] += 0;
              } else {
                result[0] += 0.058823529411764705;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9019607843137255;
                result[5] += 0.0392156862745098;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)124.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9230769230769231;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.07692307692307693;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
                result[0] += 0.8685344827586208;
                result[1] += 0.004310344827586208;
                result[2] += 0.002155172413793104;
                result[3] += 0.03448275862068966;
                result[4] += 0.08189655172413794;
                result[5] += 0.008620689655172415;
              } else {
                result[0] += 0.9968102073365231;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.003189792663476874;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)102.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
                result[0] += 0.014598540145985401;
                result[1] += 0;
                result[2] += 0.021897810218978103;
                result[3] += 0.43795620437956206;
                result[4] += 0;
                result[5] += 0.5255474452554745;
              } else {
                result[0] += 0.14285714285714285;
                result[1] += 0.35714285714285715;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
                result[0] += 0.19148936170212766;
                result[1] += 0.0851063829787234;
                result[2] += 0.3404255319148936;
                result[3] += 0.19148936170212766;
                result[4] += 0.06382978723404255;
                result[5] += 0.1276595744680851;
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
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9;
                result[3] += 0.1;
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9857142857142858;
                result[1] += 0;
                result[2] += 0.014285714285714285;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)76) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88) ) ) {
                result[0] += 0;
                result[1] += 0.3;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7;
                result[5] += 0;
              } else {
                result[0] += 0.14285714285714285;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8571428571428571;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1111111111111111;
                result[4] += 0;
                result[5] += 0.8888888888888888;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.11650485436893204;
                result[3] += 0.7961165048543689;
                result[4] += 0;
                result[5] += 0.08737864077669903;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0.5;
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7;
                result[3] += 0.3;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.23529411764705882;
                result[3] += 0.6470588235294118;
                result[4] += 0;
                result[5] += 0.11764705882352941;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0.875;
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
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.20000000000000004;
                result[3] += 0.7000000000000001;
                result[4] += 0;
                result[5] += 0.10000000000000002;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8214285714285715;
                result[3] += 0.10714285714285715;
                result[4] += 0;
                result[5] += 0.07142857142857144;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)117) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9682539682539683;
                result[3] += 0.031746031746031744;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.8;
              } else {
                result[0] += 0.125;
                result[1] += 0;
                result[2] += 0.875;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
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
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05555555555555555;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.2777777777777778;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.603448275862069;
                result[3] += 0.2413793103448276;
                result[4] += 0;
                result[5] += 0.15517241379310345;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.47058823529411764;
                result[3] += 0.35294117647058826;
                result[4] += 0;
                result[5] += 0.17647058823529413;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8701298701298701;
                result[3] += 0.12987012987012986;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)85.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)88.5) ) ) {
                result[0] += 0.014184397163120567;
                result[1] += 0;
                result[2] += 0.8865248226950354;
                result[3] += 0.09692671394799054;
                result[4] += 0;
                result[5] += 0.002364066193853428;
              } else {
                result[0] += 0.0030864197530864196;
                result[1] += 0;
                result[2] += 0.9722222222222222;
                result[3] += 0.024691358024691357;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)28) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
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
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.75;
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)70.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)55.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.004866180048661801;
                result[2] += 0;
                result[3] += 0.025547445255474453;
                result[4] += 0.0267639902676399;
                result[5] += 0.9428223844282239;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
                result[0] += 0.05263157894736842;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.05263157894736842;
                result[4] += 0.631578947368421;
                result[5] += 0.2631578947368421;
              } else {
                result[0] += 0;
                result[1] += 0.006896551724137931;
                result[2] += 0.013793103448275862;
                result[3] += 0.25517241379310346;
                result[4] += 0.05517241379310345;
                result[5] += 0.6689655172413793;
              }
            }
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7692307692307693;
                result[5] += 0.23076923076923078;
              } else {
                result[0] += 0.2727272727272727;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.7272727272727273;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16279069767441862;
                result[4] += 0;
                result[5] += 0.8372093023255814;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6136363636363636;
                result[4] += 0.022727272727272728;
                result[5] += 0.36363636363636365;
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9203539823008849;
                result[4] += 0;
                result[5] += 0.07964601769911504;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8888888888888888;
                result[4] += 0;
                result[5] += 0.1111111111111111;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07692307692307693;
                result[4] += 0;
                result[5] += 0.9230769230769231;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)43.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)105.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)76) ) ) {
                result[0] += 0.07017543859649122;
                result[1] += 0;
                result[2] += 0.03508771929824561;
                result[3] += 0;
                result[4] += 0.8771929824561403;
                result[5] += 0.017543859649122806;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.1;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
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
            }
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)108.5) ) ) {
                result[0] += 0.9090056285178236;
                result[1] += 0.004690431519699813;
                result[2] += 0;
                result[3] += 0.008442776735459663;
                result[4] += 0.07317073170731707;
                result[5] += 0.004690431519699813;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)107) ) ) {
                result[0] += 0.04950495049504951;
                result[1] += 0.04950495049504951;
                result[2] += 0.06930693069306931;
                result[3] += 0.4158415841584158;
                result[4] += 0;
                result[5] += 0.4158415841584158;
              } else {
                result[0] += 0.7446808510638298;
                result[1] += 0;
                result[2] += 0.0851063829787234;
                result[3] += 0.02127659574468085;
                result[4] += 0.14893617021276595;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0.02380952380952381;
                result[2] += 0;
                result[3] += 0.2142857142857143;
                result[4] += 0.5952380952380953;
                result[5] += 0.16666666666666669;
              } else {
                result[0] += 0;
                result[1] += 0.014705882352941176;
                result[2] += 0.16176470588235295;
                result[3] += 0.5196078431372549;
                result[4] += 0.00980392156862745;
                result[5] += 0.29411764705882354;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)72.5) ) ) {
                result[0] += 0.7142857142857143;
                result[1] += 0.14285714285714285;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.05063291139240505;
                result[1] += 0;
                result[2] += 0.6455696202531644;
                result[3] += 0.05063291139240505;
                result[4] += 0.11392405063291136;
                result[5] += 0.1392405063291139;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)98) ) ) {
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
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
                result[0] += 0.3181818181818182;
                result[1] += 0.045454545454545456;
                result[2] += 0.13636363636363635;
                result[3] += 0;
                result[4] += 0.45454545454545453;
                result[5] += 0.045454545454545456;
              } else {
                result[0] += 0.9142857142857143;
                result[1] += 0;
                result[2] += 0.08571428571428572;
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)69) ) ) {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
                result[0] += 0.16666666666666669;
                result[1] += 0;
                result[2] += 0.5000000000000001;
                result[3] += 0.16666666666666669;
                result[4] += 0.16666666666666669;
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
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
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
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05555555555555555;
                result[3] += 0.9444444444444444;
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
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)113.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0.9090909090909091;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6315789473684211;
                result[3] += 0.26315789473684215;
                result[4] += 0;
                result[5] += 0.10526315789473685;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101) ) ) {
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
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9054054054054055;
                result[3] += 0.0810810810810811;
                result[4] += 0;
                result[5] += 0.013513513513513516;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)110) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)123.5) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)102) ) ) {
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
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)119.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)114) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.975609756097561;
                result[3] += 0.024390243902439025;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8081395348837209;
                result[3] += 0.1686046511627907;
                result[4] += 0;
                result[5] += 0.023255813953488372;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7333333333333333;
                result[3] += 0.26666666666666666;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)111.5) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.35714285714285715;
                result[3] += 0.6428571428571429;
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)113.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
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
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.972972972972973;
                result[3] += 0.02702702702702703;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7777777777777778;
                result[3] += 0.2222222222222222;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)76.5) ) ) {
                result[0] += 0.4;
                result[1] += 0;
                result[2] += 0.6;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9895287958115183;
                result[3] += 0.010471204188481676;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)40) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)105) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
                result[0] += 0;
                result[1] += 0.005555555555555556;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9888888888888889;
                result[5] += 0.005555555555555556;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7419354838709677;
                result[5] += 0.25806451612903225;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59) ) ) {
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
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.13793103448275862;
                result[5] += 0.8620689655172413;
              } else {
                result[0] += 0.05;
                result[1] += 0.1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.65;
                result[5] += 0.2;
              }
            }
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71) ) ) {
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06896551724137931;
                result[4] += 0.3793103448275862;
                result[5] += 0.5517241379310345;
              } else {
                result[0] += 0;
                result[1] += 0.0013297872340425532;
                result[2] += 0;
                result[3] += 0.034574468085106384;
                result[4] += 0.023936170212765957;
                result[5] += 0.9401595744680851;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0.043478260869565216;
                result[2] += 0;
                result[3] += 0.043478260869565216;
                result[4] += 0.9130434782608695;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.10714285714285714;
                result[2] += 0;
                result[3] += 0.10714285714285714;
                result[4] += 0.17857142857142858;
                result[5] += 0.6071428571428571;
              }
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)80) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0.25;
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
                result[0] += 0.061224489795918366;
                result[1] += 0;
                result[2] += 0.08163265306122448;
                result[3] += 0.4489795918367347;
                result[4] += 0;
                result[5] += 0.40816326530612246;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0967741935483871;
                result[3] += 0.0967741935483871;
                result[4] += 0;
                result[5] += 0.8064516129032258;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)94.5) ) ) {
                result[0] += 0.006172839506172839;
                result[1] += 0;
                result[2] += 0.006172839506172839;
                result[3] += 0.808641975308642;
                result[4] += 0;
                result[5] += 0.17901234567901234;
              } else {
                result[0] += 0.1;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0.26666666666666666;
                result[4] += 0;
                result[5] += 0.5333333333333333;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)93.5) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
                result[0] += 0.04477611940298507;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9552238805970149;
                result[5] += 0;
              } else {
                result[0] += 0.13157894736842107;
                result[1] += 0.15789473684210528;
                result[2] += 0;
                result[3] += 0.2368421052631579;
                result[4] += 0.368421052631579;
                result[5] += 0.10526315789473685;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.058823529411764705;
                result[4] += 0.11764705882352941;
                result[5] += 0.8235294117647058;
              } else {
                result[0] += 0.921803127874885;
                result[1] += 0.02207911683532659;
                result[2] += 0;
                result[3] += 0.010119595216191352;
                result[4] += 0.04139834406623735;
                result[5] += 0.004599816007359705;
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)111) ) ) {
                result[0] += 0.04032258064516129;
                result[1] += 0.04032258064516129;
                result[2] += 0.04838709677419355;
                result[3] += 0.25;
                result[4] += 0.0967741935483871;
                result[5] += 0.5241935483870968;
              } else {
                result[0] += 0.7543859649122807;
                result[1] += 0.03508771929824561;
                result[2] += 0.07017543859649122;
                result[3] += 0.017543859649122806;
                result[4] += 0.08771929824561403;
                result[5] += 0.03508771929824561;
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)71) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
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
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.013333333333333334;
                result[3] += 0.26666666666666666;
                result[4] += 0.04;
                result[5] += 0.68;
              } else {
                result[0] += 0.008333333333333333;
                result[1] += 0;
                result[2] += 0.18333333333333332;
                result[3] += 0.49166666666666664;
                result[4] += 0.008333333333333333;
                result[5] += 0.30833333333333335;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)103.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
                result[0] += 0.03773584905660378;
                result[1] += 0;
                result[2] += 0.7358490566037736;
                result[3] += 0.07547169811320756;
                result[4] += 0;
                result[5] += 0.15094339622641512;
              } else {
                result[0] += 0.35555555555555557;
                result[1] += 0;
                result[2] += 0.35555555555555557;
                result[3] += 0;
                result[4] += 0.28888888888888886;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9795918367346939;
                result[1] += 0;
                result[2] += 0.02040816326530612;
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)91) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0.6666666666666666;
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
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
                result[3] += 0.9777777777777777;
                result[4] += 0;
                result[5] += 0.022222222222222223;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74) ) ) {
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)71) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.2;
                result[2] += 0.2;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)76.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0.125;
              }
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)117.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9166666666666666;
                result[3] += 0.08333333333333333;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101.5) ) ) {
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
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81.5) ) ) {
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)116) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.07142857142857142;
                result[1] += 0;
                result[2] += 0.9285714285714286;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)118.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5945945945945946;
                result[3] += 0.32432432432432434;
                result[4] += 0;
                result[5] += 0.08108108108108109;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9642857142857143;
                result[3] += 0.03571428571428571;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9155844155844156;
                result[3] += 0.07467532467532467;
                result[4] += 0;
                result[5] += 0.00974025974025974;
              }
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
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
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7272727272727273;
                result[3] += 0.2727272727272727;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0021231422505307855;
                result[1] += 0;
                result[2] += 0.9787685774946921;
                result[3] += 0.01910828025477707;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)102.5) ) ) {
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
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)56) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)57) ) ) {
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
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)61) ) ) {
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
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
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
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9444444444444444;
                result[5] += 0.05555555555555555;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
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
                result[3] += 0.015220700152207;
                result[4] += 0.0030441400304414;
                result[5] += 0.9817351598173516;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.011235955056179775;
                result[3] += 0.1348314606741573;
                result[4] += 0.0449438202247191;
                result[5] += 0.8089887640449438;
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57) ) ) {
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
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2727272727272727;
                result[4] += 0.7272727272727273;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.875;
                result[2] += 0;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.17647058823529413;
                result[4] += 0;
                result[5] += 0.8235294117647058;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.046511627906976744;
                result[3] += 0.4883720930232558;
                result[4] += 0.11627906976744186;
                result[5] += 0.3488372093023256;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0.25;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7333333333333333;
                result[3] += 0.26666666666666666;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)60.5) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57.5) ) ) {
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
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9658119658119658;
                result[4] += 0;
                result[5] += 0.03418803418803419;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
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
                result[3] += 0.1111111111111111;
                result[4] += 0;
                result[5] += 0.8888888888888888;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)98.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
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
                result[3] += 0.5;
                result[4] += 0.5;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89) ) ) {
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
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)68.5) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0.875;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.125;
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
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
                result[0] += 0.06521739130434782;
                result[1] += 0.06521739130434782;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6956521739130435;
                result[5] += 0.17391304347826086;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06666666666666667;
                result[3] += 0.9333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
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
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)51.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.12903225806451613;
                result[1] += 0.1935483870967742;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6451612903225806;
                result[5] += 0.03225806451612903;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)70.5) ) ) {
                result[0] += 0.32142857142857145;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2857142857142857;
                result[4] += 0.125;
                result[5] += 0.26785714285714285;
              } else {
                result[0] += 0.9278846153846155;
                result[1] += 0.0019230769230769234;
                result[2] += 0.002884615384615385;
                result[3] += 0.013461538461538464;
                result[4] += 0.0451923076923077;
                result[5] += 0.008653846153846156;
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)99.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)67.5) ) ) {
                result[0] += 0.043478260869565216;
                result[1] += 0.014492753623188406;
                result[2] += 0.043478260869565216;
                result[3] += 0.14492753623188406;
                result[4] += 0.391304347826087;
                result[5] += 0.36231884057971014;
              } else {
                result[0] += 0;
                result[1] += 0.0136986301369863;
                result[2] += 0.0136986301369863;
                result[3] += 0.4383561643835616;
                result[4] += 0.0136986301369863;
                result[5] += 0.5205479452054794;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.6;
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
                result[0] += 0.16666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8333333333333334;
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
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)120) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7777777777777778;
                result[3] += 0;
                result[4] += 0.2222222222222222;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
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
                result[4] += 0.08695652173913043;
                result[5] += 0.9130434782608695;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1774193548387097;
                result[3] += 0.5967741935483871;
                result[4] += 0;
                result[5] += 0.22580645161290322;
              }
            }
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0.02702702702702703;
                result[2] += 0.08108108108108109;
                result[3] += 0.7837837837837838;
                result[4] += 0;
                result[5] += 0.10810810810810811;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)92.5) ) ) {
                result[0] += 0.05;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0.075;
              } else {
                result[0] += 0;
                result[1] += 0.6;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0.2;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
                result[0] += 0.09090909090909091;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9090909090909091;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.024390243902439025;
                result[1] += 0;
                result[2] += 0.43902439024390244;
                result[3] += 0.43902439024390244;
                result[4] += 0.04878048780487805;
                result[5] += 0.04878048780487805;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.06666666666666667;
                result[4] += 0;
                result[5] += 0.5333333333333333;
              } else {
                result[0] += 0.012195121951219513;
                result[1] += 0;
                result[2] += 0.8536585365853658;
                result[3] += 0.13008130081300814;
                result[4] += 0.0040650406504065045;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)113) ) ) {
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
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)76.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
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
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)108) ) ) {
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
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)113.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9054726368159204;
                result[3] += 0.0945273631840796;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.15384615384615385;
                result[1] += 0;
                result[2] += 0.8461538461538461;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)119) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9910514541387024;
                result[3] += 0.008948545861297539;
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)107.5) ) ) {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
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
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
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
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)72) ) ) {
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91) ) ) {
                result[0] += 0.06666666666666667;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06666666666666667;
                result[4] += 0.2;
                result[5] += 0.6666666666666666;
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)57.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)56.5) ) ) {
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
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)57.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)58) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5714285714285714;
                result[5] += 0.42857142857142855;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)68.5) ) ) {
                result[0] += 0;
                result[1] += 0.0013698630136986301;
                result[2] += 0;
                result[3] += 0.024657534246575342;
                result[4] += 0.0013698630136986301;
                result[5] += 0.9726027397260274;
              } else {
                result[0] += 0.04564315352697095;
                result[1] += 0.04149377593360996;
                result[2] += 0;
                result[3] += 0.1825726141078838;
                result[4] += 0.1078838174273859;
                result[5] += 0.6224066390041494;
              }
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9523809523809523;
                result[4] += 0;
                result[5] += 0.047619047619047616;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.49019607843137253;
                result[4] += 0;
                result[5] += 0.5098039215686274;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
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
                result[3] += 0.9782608695652174;
                result[4] += 0;
                result[5] += 0.021739130434782608;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)107.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.21212121212121213;
                result[4] += 0;
                result[5] += 0.7878787878787878;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
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
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)48) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)35.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)108) ) ) {
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
                result[0] += 0.04477611940298507;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8955223880597015;
                result[5] += 0.05970149253731343;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
                result[0] += 0.9782608695652174;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.021739130434782608;
                result[5] += 0;
              } else {
                result[0] += 0.08333333333333333;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0.3333333333333333;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88) ) ) {
                result[0] += 0.05405405405405406;
                result[1] += 0.02702702702702703;
                result[2] += 0.05405405405405406;
                result[3] += 0.08108108108108109;
                result[4] += 0.5675675675675675;
                result[5] += 0.21621621621621623;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
                result[0] += 0.03296703296703297;
                result[1] += 0;
                result[2] += 0.02197802197802198;
                result[3] += 0.23076923076923078;
                result[4] += 0.054945054945054944;
                result[5] += 0.6593406593406593;
              } else {
                result[0] += 0;
                result[1] += 0.012345679012345678;
                result[2] += 0.06172839506172839;
                result[3] += 0.6172839506172839;
                result[4] += 0.024691358024691357;
                result[5] += 0.2839506172839506;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)44.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.03389830508474576;
                result[1] += 0.13559322033898305;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8305084745762712;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
                result[0] += 0.15625;
                result[1] += 0.34375;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.46875;
                result[5] += 0.03125;
              } else {
                result[0] += 0.9382488479262673;
                result[1] += 0;
                result[2] += 0.0018433179723502304;
                result[3] += 0.013824884792626729;
                result[4] += 0.03778801843317972;
                result[5] += 0.008294930875576038;
              }
            }
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)93) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
                result[0] += 0.03571428571428571;
                result[1] += 0.017857142857142856;
                result[2] += 0.19642857142857142;
                result[3] += 0.42857142857142855;
                result[4] += 0;
                result[5] += 0.32142857142857145;
              } else {
                result[0] += 0.15;
                result[1] += 0;
                result[2] += 0.57;
                result[3] += 0.07;
                result[4] += 0.14;
                result[5] += 0.07;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.8727272727272727;
                result[1] += 0;
                result[2] += 0.09090909090909091;
                result[3] += 0;
                result[4] += 0.03636363636363636;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)81.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05714285714285714;
                result[3] += 0.11428571428571428;
                result[4] += 0.02857142857142857;
                result[5] += 0.8;
              }
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77.5) ) ) {
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
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)67) ) ) {
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.08823529411764706;
                result[3] += 0.8676470588235294;
                result[4] += 0;
                result[5] += 0.04411764705882353;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8888888888888888;
                result[3] += 0.1111111111111111;
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)110.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
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
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98) ) ) {
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)109) ) ) {
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)106.5) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)107.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)92.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8292682926829268;
                result[3] += 0.14634146341463414;
                result[4] += 0;
                result[5] += 0.024390243902439025;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9534883720930233;
                result[3] += 0.046511627906976744;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.16666666666666666;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)98.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)111.5) ) ) {
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
            }
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)80) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
                result[0] += 0.026490066225165563;
                result[1] += 0;
                result[2] += 0.9006622516556292;
                result[3] += 0.0728476821192053;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9823788546255506;
                result[3] += 0.01762114537444934;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)94) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
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
                result[4] += 0.8823529411764706;
                result[5] += 0.11764705882352941;
              }
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)95) ) ) {
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)78) ) ) {
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)49) ) ) {
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
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)90) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.002288329519450801;
                result[5] += 0.9977116704805492;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06153846153846154;
                result[4] += 0.03461538461538462;
                result[5] += 0.9038461538461539;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
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
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)41.5) ) ) {
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
                result[3] += 0.18181818181818182;
                result[4] += 0.7727272727272727;
                result[5] += 0.045454545454545456;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
                result[0] += 0.006097560975609756;
                result[1] += 0.012195121951219513;
                result[2] += 0;
                result[3] += 0.07926829268292683;
                result[4] += 0.06097560975609756;
                result[5] += 0.8414634146341463;
              } else {
                result[0] += 0.02197802197802198;
                result[1] += 0;
                result[2] += 0.054945054945054944;
                result[3] += 0.4065934065934066;
                result[4] += 0.03296703296703297;
                result[5] += 0.4835164835164835;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.024390243902439025;
                result[2] += 0;
                result[3] += 0.12195121951219512;
                result[4] += 0.024390243902439025;
                result[5] += 0.8292682926829268;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.006944444444444444;
                result[3] += 0.8125;
                result[4] += 0.006944444444444444;
                result[5] += 0.1736111111111111;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)64.5) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)67.5) ) ) {
                result[0] += 0.6521739130434783;
                result[1] += 0.043478260869565216;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.30434782608695654;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.6;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.35;
                result[5] += 0.05;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96) ) ) {
                result[0] += 0.008849557522123894;
                result[1] += 0.008849557522123894;
                result[2] += 0;
                result[3] += 0.061946902654867256;
                result[4] += 0.8495575221238938;
                result[5] += 0.07079646017699115;
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
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)64.5) ) ) {
                result[0] += 0.13333333333333333;
                result[1] += 0.13333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7333333333333333;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.041666666666666664;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.7083333333333334;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
                result[0] += 0.17543859649122806;
                result[1] += 0.2631578947368421;
                result[2] += 0;
                result[3] += 0.03508771929824561;
                result[4] += 0.5263157894736842;
                result[5] += 0;
              } else {
                result[0] += 0.9167397020157756;
                result[1] += 0.008764241893076249;
                result[2] += 0.0026292725679228747;
                result[3] += 0.024539877300613498;
                result[4] += 0.03943908851884312;
                result[5] += 0.007887817703768623;
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0.075;
                result[5] += 0.825;
              } else {
                result[0] += 0.007407407407407408;
                result[1] += 0;
                result[2] += 0.08888888888888889;
                result[3] += 0.5777777777777777;
                result[4] += 0.05925925925925926;
                result[5] += 0.26666666666666666;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)65.5) ) ) {
                result[0] += 0.16129032258064516;
                result[1] += 0.0967741935483871;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7096774193548387;
                result[5] += 0.03225806451612903;
              } else {
                result[0] += 0.058823529411764705;
                result[1] += 0.029411764705882353;
                result[2] += 0.2647058823529412;
                result[3] += 0.058823529411764705;
                result[4] += 0.2647058823529412;
                result[5] += 0.3235294117647059;
              }
            }
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)114.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
                result[0] += 0.014285714285714285;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.17142857142857143;
                result[4] += 0;
                result[5] += 0.014285714285714285;
              } else {
                result[0] += 0.375;
                result[1] += 0.625;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)113.5) ) ) {
                result[0] += 0.6;
                result[1] += 0;
                result[2] += 0.4;
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8913043478260869;
                result[4] += 0;
                result[5] += 0.10869565217391304;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.6;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.6666666666666666;
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
            }
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)110.5) ) ) {
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)96.5) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)64.5) ) ) {
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
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8653846153846154;
                result[3] += 0.057692307692307696;
                result[4] += 0;
                result[5] += 0.07692307692307693;
              } else {
                result[0] += 0.05128205128205128;
                result[1] += 0;
                result[2] += 0.6410256410256411;
                result[3] += 0.2564102564102564;
                result[4] += 0;
                result[5] += 0.05128205128205128;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
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
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)88.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)116.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6551724137931035;
                result[3] += 0.31034482758620696;
                result[4] += 0;
                result[5] += 0.03448275862068966;
              } else {
                result[0] += 0.005494505494505495;
                result[1] += 0;
                result[2] += 0.8956043956043956;
                result[3] += 0.0989010989010989;
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.954248366013072;
                result[3] += 0.0457516339869281;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.98;
                result[3] += 0.02;
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
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)39.5) ) ) {
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
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)79.5) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)82) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)67) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
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
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)80) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)56.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59) ) ) {
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
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)64) ) ) {
                result[0] += 0;
                result[1] += 0.8;
                result[2] += 0;
                result[3] += 0.2;
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
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
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
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)58.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)69) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70) ) ) {
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)71) ) ) {
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
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)41.5) ) ) {
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
                result[3] += 0.022068965517241378;
                result[4] += 0.013793103448275862;
                result[5] += 0.9641379310344828;
              }
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.38461538461538464;
                result[4] += 0.07692307692307693;
                result[5] += 0.5384615384615384;
              } else {
                result[0] += 0.14705882352941177;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08823529411764706;
                result[4] += 0.6764705882352942;
                result[5] += 0.08823529411764706;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.028985507246376812;
                result[4] += 0.07246376811594203;
                result[5] += 0.8985507246376812;
              } else {
                result[0] += 0;
                result[1] += 0.017857142857142856;
                result[2] += 0.005952380952380952;
                result[3] += 0.2261904761904762;
                result[4] += 0.023809523809523808;
                result[5] += 0.7261904761904762;
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8238993710691824;
                result[4] += 0.012578616352201259;
                result[5] += 0.16352201257861634;
              } else {
                result[0] += 0.05714285714285714;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.37142857142857144;
                result[4] += 0;
                result[5] += 0.5714285714285714;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07317073170731707;
                result[3] += 0.0975609756097561;
                result[4] += 0.07317073170731707;
                result[5] += 0.7560975609756098;
              } else {
                result[0] += 0.09090909090909091;
                result[1] += 0;
                result[2] += 0.9090909090909091;
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)52.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)64) ) ) {
                result[0] += 0;
                result[1] += 0.07142857142857142;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9285714285714286;
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
                result[0] += 0.009708737864077669;
                result[1] += 0.019417475728155338;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.941747572815534;
                result[5] += 0.02912621359223301;
              } else {
                result[0] += 0;
                result[1] += 0.1;
                result[2] += 0.4;
                result[3] += 0.4;
                result[4] += 0.1;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
                result[0] += 0.17142857142857143;
                result[1] += 0;
                result[2] += 0.05714285714285714;
                result[3] += 0.05714285714285714;
                result[4] += 0.6857142857142857;
                result[5] += 0.02857142857142857;
              } else {
                result[0] += 0.9655172413793104;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.034482758620689655;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
                result[0] += 0.04285714285714286;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4857142857142857;
                result[4] += 0.2;
                result[5] += 0.2714285714285714;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.045454545454545456;
                result[3] += 0;
                result[4] += 0.29545454545454547;
                result[5] += 0.6590909090909091;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)69) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98.5) ) ) {
                result[0] += 0.28125;
                result[1] += 0.1875;
                result[2] += 0;
                result[3] += 0.0625;
                result[4] += 0.46875;
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
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
                result[0] += 0.05;
                result[1] += 0.45;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0.8846153846153846;
                result[1] += 0;
                result[2] += 0.010576923076923078;
                result[3] += 0.03076923076923077;
                result[4] += 0.051923076923076926;
                result[5] += 0.022115384615384617;
              }
            }
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
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
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)45.5) ) ) {
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
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2608695652173913;
                result[3] += 0.17391304347826086;
                result[4] += 0;
                result[5] += 0.5652173913043478;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0.5000000000000001;
                result[2] += 0.33333333333333337;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.16666666666666669;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.14685314685314685;
                result[3] += 0.7132867132867133;
                result[4] += 0;
                result[5] += 0.13986013986013987;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2727272727272727;
                result[3] += 0.45454545454545453;
                result[4] += 0;
                result[5] += 0.2727272727272727;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8157894736842106;
                result[3] += 0.15789473684210528;
                result[4] += 0;
                result[5] += 0.026315789473684213;
              }
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)121) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.45454545454545453;
                result[3] += 0.5454545454545454;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.96875;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.03125;
              }
            }
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)80) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
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
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.023809523809523808;
                result[1] += 0;
                result[2] += 0.8809523809523809;
                result[3] += 0;
                result[4] += 0.023809523809523808;
                result[5] += 0.07142857142857142;
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)109.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.828125;
                result[3] += 0.15625;
                result[4] += 0;
                result[5] += 0.015625;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.45454545454545453;
                result[3] += 0.5454545454545454;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
                result[0] += 0.0028328611898017;
                result[1] += 0;
                result[2] += 0.9178470254957507;
                result[3] += 0.07932011331444759;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.014577259475218658;
                result[1] += 0;
                result[2] += 0.9795918367346939;
                result[3] += 0.0058309037900874635;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)120.5) ) ) {
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
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  result[2] /= 10;
  result[3] /= 10;
  result[4] /= 10;
  result[5] /= 10;
  
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
