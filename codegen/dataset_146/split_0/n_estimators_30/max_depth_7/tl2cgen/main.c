
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)64.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.16;
                result[5] += 0.84;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7142857142857143;
                result[5] += 0.2857142857142857;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
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
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)54.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
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
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)60) ) ) {
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
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)55.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)67.5) ) ) {
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
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70) ) ) {
                result[0] += 0.07692307692307693;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8076923076923077;
                result[5] += 0.11538461538461539;
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
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.006289308176100629;
                result[4] += 0.01729559748427673;
                result[5] += 0.9764150943396226;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)72) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6363636363636364;
                result[5] += 0.36363636363636365;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.02631578947368421;
                result[3] += 0.10526315789473684;
                result[4] += 0.06578947368421052;
                result[5] += 0.8026315789473685;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62) ) ) {
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.125;
                result[4] += 0.0625;
                result[5] += 0.8125;
              } else {
                result[0] += 0;
                result[1] += 0.046153846153846156;
                result[2] += 0.03076923076923077;
                result[3] += 0.38461538461538464;
                result[4] += 0.038461538461538464;
                result[5] += 0.5;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.05;
                result[4] += 0;
                result[5] += 0.95;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.009009009009009009;
                result[3] += 0.7567567567567568;
                result[4] += 0;
                result[5] += 0.23423423423423423;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)94) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)47) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
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
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)72) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.014705882352941176;
                result[4] += 0.9852941176470589;
                result[5] += 0;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0.42857142857142855;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5714285714285714;
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
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)98.5) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)95) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)54.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0.75;
                result[2] += 0;
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
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
                result[0] += 0.07407407407407407;
                result[1] += 0.37037037037037035;
                result[2] += 0;
                result[3] += 0.07407407407407407;
                result[4] += 0.48148148148148145;
                result[5] += 0;
              } else {
                result[0] += 0.93359375;
                result[1] += 0.00390625;
                result[2] += 0;
                result[3] += 0.0078125;
                result[4] += 0.0458984375;
                result[5] += 0.0087890625;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.24444444444444444;
                result[4] += 0.6;
                result[5] += 0.15555555555555556;
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.005747126436781609;
                result[1] += 0;
                result[2] += 0.04597701149425287;
                result[3] += 0.6206896551724138;
                result[4] += 0;
                result[5] += 0.3275862068965517;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2903225806451613;
                result[3] += 0.4838709677419355;
                result[4] += 0;
                result[5] += 0.22580645161290322;
              } else {
                result[0] += 0.3235294117647059;
                result[1] += 0;
                result[2] += 0.5294117647058824;
                result[3] += 0.029411764705882353;
                result[4] += 0.11764705882352941;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)114.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
                result[0] += 0.041666666666666664;
                result[1] += 0.125;
                result[2] += 0.2916666666666667;
                result[3] += 0.041666666666666664;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0.21518987341772153;
                result[1] += 0;
                result[2] += 0.7721518987341772;
                result[3] += 0.012658227848101266;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)99.5) ) ) {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8888888888888888;
                result[5] += 0;
              } else {
                result[0] += 0.9666666666666667;
                result[1] += 0;
                result[2] += 0.03333333333333333;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)92.5) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0.4;
                result[5] += 0.4;
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102) ) ) {
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
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)60) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.14285714285714285;
                result[1] += 0;
                result[2] += 0.14285714285714285;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.7142857142857143;
              }
            }
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)63) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)90) ) ) {
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
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.018867924528301886;
                result[3] += 0.9433962264150944;
                result[4] += 0;
                result[5] += 0.03773584905660377;
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9411764705882353;
                result[4] += 0;
                result[5] += 0.058823529411764705;
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)110) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.875;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82) ) ) {
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
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)47.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
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
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)89.5) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)95) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0.1111111111111111;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7692307692307693;
                result[3] += 0.11538461538461539;
                result[4] += 0;
                result[5] += 0.11538461538461539;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9555555555555556;
                result[3] += 0.03333333333333333;
                result[4] += 0;
                result[5] += 0.011111111111111112;
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
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
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)80) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0.3333333333333333;
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
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86) ) ) {
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
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9090909090909091;
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9973890339425587;
                result[3] += 0.0026109660574412533;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)56) ) ) {
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
                result[4] += 0.0625;
                result[5] += 0.9375;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16666666666666666;
                result[4] += 0.16666666666666666;
                result[5] += 0.6666666666666666;
              }
            }
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)72) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)72.5) ) ) {
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)52) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)67.5) ) ) {
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9473684210526315;
                result[5] += 0.05263157894736842;
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
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
                result[3] += 0.013533834586466165;
                result[4] += 0.013533834586466165;
                result[5] += 0.9729323308270676;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.18407960199004975;
                result[4] += 0.05472636815920398;
                result[5] += 0.7611940298507462;
              } else {
                result[0] += 0.06666666666666667;
                result[1] += 0;
                result[2] += 0.13333333333333333;
                result[3] += 0.2;
                result[4] += 0.4666666666666667;
                result[5] += 0.13333333333333333;
              }
            }
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)79) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3076923076923077;
                result[4] += 0;
                result[5] += 0.6923076923076923;
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
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)76) ) ) {
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
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0.06451612903225806;
                result[2] += 0.010752688172043012;
                result[3] += 0.43010752688172044;
                result[4] += 0.021505376344086023;
                result[5] += 0.4731182795698925;
              } else {
                result[0] += 0;
                result[1] += 0.008620689655172414;
                result[2] += 0;
                result[3] += 0.9051724137931034;
                result[4] += 0;
                result[5] += 0.08620689655172414;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)109.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)40) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.010638297872340425;
                result[1] += 0.010638297872340425;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9574468085106383;
                result[5] += 0.02127659574468085;
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)72.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9523809523809523;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.047619047619047616;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)108.5) ) ) {
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)57.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)76.5) ) ) {
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
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0.4;
                result[2] += 0;
                result[3] += 0.03333333333333333;
                result[4] += 0.3333333333333333;
                result[5] += 0.23333333333333334;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.038834951456310676;
                result[3] += 0.4174757281553398;
                result[4] += 0.019417475728155338;
                result[5] += 0.5242718446601942;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
                result[0] += 0.8561278863232682;
                result[1] += 0.021314387211367674;
                result[2] += 0;
                result[3] += 0.017761989342806393;
                result[4] += 0.09769094138543517;
                result[5] += 0.007104795737122558;
              } else {
                result[0] += 0.11764705882352941;
                result[1] += 0.11764705882352941;
                result[2] += 0.13725490196078433;
                result[3] += 0.27450980392156865;
                result[4] += 0.35294117647058826;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0;
              } else {
                result[0] += 0.9919517102615694;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.002012072434607646;
                result[4] += 0.006036217303822937;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109) ) ) {
                result[0] += 0.043478260869565216;
                result[1] += 0.14492753623188406;
                result[2] += 0.043478260869565216;
                result[3] += 0.4492753623188406;
                result[4] += 0.10144927536231885;
                result[5] += 0.21739130434782608;
              } else {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0.03333333333333333;
                result[3] += 0;
                result[4] += 0.7;
                result[5] += 0.06666666666666667;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
                result[0] += 0.22222222222222224;
                result[1] += 0;
                result[2] += 0.4444444444444445;
                result[3] += 0.16666666666666669;
                result[4] += 0;
                result[5] += 0.16666666666666669;
              } else {
                result[0] += 0.958904109589041;
                result[1] += 0;
                result[2] += 0.0410958904109589;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0.2222222222222222;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7777777777777778;
                result[5] += 0;
              } else {
                result[0] += 0.025;
                result[1] += 0.075;
                result[2] += 0.125;
                result[3] += 0.075;
                result[4] += 0;
                result[5] += 0.7;
              }
            }
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.10526315789473684;
                result[3] += 0.3684210526315789;
                result[4] += 0.05263157894736842;
                result[5] += 0.47368421052631576;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16;
                result[3] += 0.8;
                result[4] += 0;
                result[5] += 0.04;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.09090909090909091;
                result[1] += 0.18181818181818182;
                result[2] += 0.5454545454545454;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.18181818181818182;
              }
            }
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)70.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2647058823529412;
                result[3] += 0.6176470588235294;
                result[4] += 0.029411764705882353;
                result[5] += 0.08823529411764706;
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
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.01818181818181818;
                result[1] += 0;
                result[2] += 0.9454545454545454;
                result[3] += 0.03636363636363636;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
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
                result[3] += 0.3333333333333333;
                result[4] += 0;
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102) ) ) {
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
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0.25;
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
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0071090047393364926;
                result[1] += 0;
                result[2] += 0.9324644549763034;
                result[3] += 0.05687203791469194;
                result[4] += 0;
                result[5] += 0.0035545023696682463;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9954128440366973;
                result[5] += 0.0045871559633027525;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
                result[0] += 0.060000000000000005;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8200000000000001;
                result[5] += 0.12000000000000001;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0.5833333333333334;
              }
            }
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61) ) ) {
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
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
                result[0] += 0.034482758620689655;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.034482758620689655;
                result[5] += 0.9310344827586207;
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)118.5) ) ) {
                result[0] += 0.0392156862745098;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9607843137254902;
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
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)46.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0.9538461538461539;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.046153846153846156;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)81.5) ) ) {
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
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
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
                result[3] += 0.011494252873563218;
                result[4] += 0.008210180623973728;
                result[5] += 0.9802955665024631;
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)94.5) ) ) {
                result[0] += 0.0975609756097561;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.12195121951219512;
                result[4] += 0.6341463414634146;
                result[5] += 0.14634146341463414;
              } else {
                result[0] += 0.23809523809523808;
                result[1] += 0.6190476190476191;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
                result[0] += 0.046875;
                result[1] += 0.03125;
                result[2] += 0;
                result[3] += 0.015625;
                result[4] += 0.484375;
                result[5] += 0.421875;
              } else {
                result[0] += 0;
                result[1] += 0.003787878787878788;
                result[2] += 0;
                result[3] += 0.13257575757575757;
                result[4] += 0.08333333333333333;
                result[5] += 0.7803030303030303;
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4375;
                result[4] += 0;
                result[5] += 0.5625;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.05;
                result[4] += 0;
                result[5] += 0.95;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)65) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.01694915254237288;
                result[3] += 0.6677966101694915;
                result[4] += 0.006779661016949152;
                result[5] += 0.30847457627118646;
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)72.5) ) ) {
                result[0] += 0.9583333333333334;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.041666666666666664;
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
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2571428571428571;
                result[3] += 0.22857142857142856;
                result[4] += 0.08571428571428572;
                result[5] += 0.42857142857142855;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9411764705882353;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.058823529411764705;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)74) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6;
                result[5] += 0.2;
              } else {
                result[0] += 0;
                result[1] += 0.8571428571428571;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
                result[0] += 0.8333333333333334;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.16666666666666666;
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
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
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0.16666666666666666;
                result[2] += 0;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0.08333333333333333;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)107.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.9725490196078431;
                result[1] += 0;
                result[2] += 0.00130718954248366;
                result[3] += 0.006535947712418301;
                result[4] += 0.01699346405228758;
                result[5] += 0.00261437908496732;
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
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3076923076923077;
                result[4] += 0.19230769230769232;
                result[5] += 0.5;
              } else {
                result[0] += 0.2222222222222222;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.044444444444444446;
                result[4] += 0.7111111111111111;
                result[5] += 0.022222222222222223;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.23529411764705882;
                result[3] += 0.6470588235294118;
                result[4] += 0;
                result[5] += 0.11764705882352941;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7272727272727273;
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0.18181818181818182;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0.07142857142857142;
                result[1] += 0;
                result[2] += 0.9047619047619048;
                result[3] += 0.023809523809523808;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)111.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69.5) ) ) {
                result[0] += 0.8;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7692307692307693;
                result[3] += 0.23076923076923078;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)100.5) ) ) {
                result[0] += 0.3;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7;
                result[5] += 0;
              } else {
                result[0] += 0.9423076923076923;
                result[1] += 0;
                result[2] += 0.057692307692307696;
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
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
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
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
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.03333333333333333;
                result[3] += 0.9333333333333333;
                result[4] += 0;
                result[5] += 0.03333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3958333333333333;
                result[3] += 0.5416666666666666;
                result[4] += 0;
                result[5] += 0.0625;
              }
            }
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)110) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)127) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)106.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)76.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.15384615384615385;
                result[3] += 0.6153846153846154;
                result[4] += 0.07692307692307693;
                result[5] += 0.15384615384615385;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6888888888888889;
                result[3] += 0.2;
                result[4] += 0.022222222222222223;
                result[5] += 0.08888888888888889;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8095238095238095;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0.047619047619047616;
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
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)98) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.33333333333333337;
                result[3] += 0.5000000000000001;
                result[4] += 0;
                result[5] += 0.16666666666666669;
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
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
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9154411764705882;
                result[3] += 0.0661764705882353;
                result[4] += 0;
                result[5] += 0.01838235294117647;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8186274509803921;
                result[3] += 0.18137254901960784;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)130) ) ) {
                result[0] += 0.003048780487804878;
                result[1] += 0;
                result[2] += 0.975609756097561;
                result[3] += 0.018292682926829267;
                result[4] += 0;
                result[5] += 0.003048780487804878;
              } else {
                result[0] += 0.5714285714285714;
                result[1] += 0;
                result[2] += 0.42857142857142855;
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
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)39.5) ) ) {
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
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)73.5) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)56.5) ) ) {
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
                result[4] += 0.9259259259259259;
                result[5] += 0.07407407407407407;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.625;
                result[5] += 0.125;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)76.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0.8;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)94) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)49) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.01818181818181818;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9818181818181818;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)67.5) ) ) {
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
                result[4] += 0;
                result[5] += 1;
              }
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
                result[0] += 0.8;
                result[1] += 0;
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)76) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
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
              result[4] += 0;
              result[5] += 1;
            }
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.28;
                result[5] += 0.72;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.023148148148148147;
                result[4] += 0;
                result[5] += 0.9768518518518519;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83) ) ) {
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)71.5) ) ) {
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
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)73.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)57.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07142857142857144;
                result[3] += 0.28571428571428575;
                result[4] += 0.07142857142857144;
                result[5] += 0.5714285714285715;
              }
            }
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62) ) ) {
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
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68) ) ) {
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
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.011764705882352941;
                result[1] += 0.0058823529411764705;
                result[2] += 0.0058823529411764705;
                result[3] += 0.16470588235294117;
                result[4] += 0.0058823529411764705;
                result[5] += 0.8058823529411765;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
                result[0] += 0.04545454545454546;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9090909090909092;
                result[4] += 0;
                result[5] += 0.04545454545454546;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.21052631578947367;
                result[3] += 0.05263157894736842;
                result[4] += 0;
                result[5] += 0.7368421052631579;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)76) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0625;
                result[4] += 0.90625;
                result[5] += 0.03125;
              } else {
                result[0] += 0;
                result[1] += 0.6363636363636364;
                result[2] += 0;
                result[3] += 0.2727272727272727;
                result[4] += 0.09090909090909091;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
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
                result[4] += 0.11764705882352941;
                result[5] += 0.8235294117647058;
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69) ) ) {
                result[0] += 0.8333333333333334;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.16666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0.25;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
                result[0] += 0.019801980198019802;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.43564356435643564;
                result[4] += 0.0297029702970297;
                result[5] += 0.5148514851485149;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.018404907975460124;
                result[3] += 0.6871165644171779;
                result[4] += 0.006134969325153374;
                result[5] += 0.2883435582822086;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0.875;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.125;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.16666666666666666;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8333333333333334;
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)49) ) ) {
                result[0] += 0.2;
                result[1] += 0.8;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.02127659574468085;
                result[1] += 0;
                result[2] += 0.02127659574468085;
                result[3] += 0.02127659574468085;
                result[4] += 0.9361702127659575;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8571428571428571;
                result[3] += 0;
                result[4] += 0.14285714285714285;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)52) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
                result[0] += 0;
                result[1] += 0.6;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4;
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
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74.5) ) ) {
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0.9607843137254902;
                result[1] += 0.0024509803921568627;
                result[2] += 0;
                result[3] += 0.00980392156862745;
                result[4] += 0.024509803921568627;
                result[5] += 0.0024509803921568627;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9523809523809523;
                result[4] += 0;
                result[5] += 0.047619047619047616;
              } else {
                result[0] += 0.7627118644067797;
                result[1] += 0;
                result[2] += 0.016949152542372885;
                result[3] += 0;
                result[4] += 0.22033898305084748;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5454545454545454;
                result[4] += 0.09090909090909091;
                result[5] += 0.36363636363636365;
              } else {
                result[0] += 0.07407407407407407;
                result[1] += 0;
                result[2] += 0.14814814814814814;
                result[3] += 0.07407407407407407;
                result[4] += 0;
                result[5] += 0.7037037037037037;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
                result[0] += 0.04166666666666667;
                result[1] += 0;
                result[2] += 0.9166666666666667;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.04166666666666667;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2857142857142857;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.7142857142857143;
              }
            }
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)112.5) ) ) {
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
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)64.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0.03448275862068966;
                result[2] += 0;
                result[3] += 0.7586206896551725;
                result[4] += 0;
                result[5] += 0.20689655172413796;
              } else {
                result[0] += 0.03636363636363636;
                result[1] += 0.03636363636363636;
                result[2] += 0.07272727272727272;
                result[3] += 0.12727272727272726;
                result[4] += 0.03636363636363636;
                result[5] += 0.6909090909090909;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8571428571428571;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.09;
                result[3] += 0.84;
                result[4] += 0.01;
                result[5] += 0.06;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.10810810810810811;
                result[1] += 0.02702702702702703;
                result[2] += 0.5945945945945946;
                result[3] += 0.2702702702702703;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)89.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0.6666666666666666;
                result[4] += 0.1111111111111111;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.75;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
                result[0] += 0.06666666666666668;
                result[1] += 0;
                result[2] += 0.8200000000000001;
                result[3] += 0.08000000000000002;
                result[4] += 0.013333333333333336;
                result[5] += 0.020000000000000004;
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0.7777777777777778;
                result[3] += 0.1111111111111111;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
                result[0] += 0.4166666666666667;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5833333333333334;
                result[5] += 0;
              } else {
                result[0] += 0.8536585365853658;
                result[1] += 0;
                result[2] += 0.14634146341463414;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)110.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.2;
                result[4] += 0.2;
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)57.5) ) ) {
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
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.2222222222222222;
                result[4] += 0;
                result[5] += 0.4444444444444444;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.14285714285714285;
                result[3] += 0.8571428571428571;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8125;
                result[3] += 0.1125;
                result[4] += 0;
                result[5] += 0.075;
              }
            }
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6226415094339622;
                result[3] += 0.3584905660377358;
                result[4] += 0;
                result[5] += 0.018867924528301886;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8636363636363636;
                result[3] += 0.13636363636363635;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8227848101265823;
                result[3] += 0.17721518987341772;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9618320610687023;
                result[3] += 0.03816793893129771;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)127.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.985981308411215;
                result[3] += 0.014018691588785047;
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
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)72.5) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)79.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)59.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.14814814814814814;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7777777777777778;
                result[5] += 0.07407407407407407;
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)57.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4;
                result[4] += 0.6;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.8846153846153846;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.11538461538461539;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
                result[0] += 0.9722222222222222;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.027777777777777776;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)54) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6;
                result[5] += 0.4;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)76.5) ) ) {
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0016778523489932886;
                result[3] += 0.015100671140939598;
                result[4] += 0;
                result[5] += 0.9832214765100671;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.12;
                result[4] += 0.04;
                result[5] += 0.84;
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
                result[0] += 0;
                result[1] += 0.07692307692307693;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9230769230769231;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.016042780748663103;
                result[2] += 0;
                result[3] += 0.0427807486631016;
                result[4] += 0.1711229946524064;
                result[5] += 0.7700534759358288;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.573170731707317;
                result[4] += 0.024390243902439025;
                result[5] += 0.4024390243902439;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.08333333333333333;
                result[5] += 0.9166666666666666;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)68.5) ) ) {
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
                result[3] += 0.11764705882352941;
                result[4] += 0;
                result[5] += 0.8823529411764706;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.007518796992481203;
                result[3] += 0.8421052631578947;
                result[4] += 0;
                result[5] += 0.15037593984962405;
              } else {
                result[0] += 0.46153846153846156;
                result[1] += 0;
                result[2] += 0.15384615384615385;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.38461538461538464;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)40) ) ) {
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
                result[0] += 0.03361344537815126;
                result[1] += 0.01680672268907563;
                result[2] += 0.008403361344537815;
                result[3] += 0.025210084033613446;
                result[4] += 0.8487394957983193;
                result[5] += 0.06722689075630252;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
                result[0] += 0.9375;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.0625;
                result[5] += 0;
              } else {
                result[0] += 0.1375;
                result[1] += 0.05;
                result[2] += 0.0625;
                result[3] += 0.275;
                result[4] += 0.3625;
                result[5] += 0.1125;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
                result[0] += 0.208955223880597;
                result[1] += 0.1791044776119403;
                result[2] += 0;
                result[3] += 0.3880597014925373;
                result[4] += 0.13432835820895522;
                result[5] += 0.08955223880597014;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0.13333333333333333;
                result[4] += 0.016666666666666666;
                result[5] += 0.75;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
                result[0] += 0.9425981873111783;
                result[1] += 0.002014098690835851;
                result[2] += 0.005035246727089627;
                result[3] += 0.007049345417925478;
                result[4] += 0.03927492447129909;
                result[5] += 0.004028197381671702;
              } else {
                result[0] += 0.43820224719101125;
                result[1] += 0;
                result[2] += 0.06741573033707865;
                result[3] += 0.21348314606741572;
                result[4] += 0.1348314606741573;
                result[5] += 0.14606741573033707;
              }
            }
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0.09523809523809523;
                result[2] += 0.09523809523809523;
                result[3] += 0.11904761904761904;
                result[4] += 0.09523809523809523;
                result[5] += 0.5952380952380952;
              } else {
                result[0] += 0;
                result[1] += 0.018691588785046728;
                result[2] += 0.14953271028037382;
                result[3] += 0.5981308411214953;
                result[4] += 0.018691588785046728;
                result[5] += 0.21495327102803738;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
                result[0] += 0.25;
                result[1] += 0.75;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.010752688172043012;
                result[1] += 0;
                result[2] += 0.7526881720430108;
                result[3] += 0.15053763440860216;
                result[4] += 0;
                result[5] += 0.08602150537634409;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
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
                result[3] += 0.23076923076923078;
                result[4] += 0.7692307692307693;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)88) ) ) {
                result[0] += 0.96875;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.03125;
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
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)80) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.023809523809523808;
                result[3] += 0.9047619047619048;
                result[4] += 0;
                result[5] += 0.07142857142857142;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
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
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101.5) ) ) {
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
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)76) ) ) {
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
                result[3] += 0.9333333333333333;
                result[4] += 0;
                result[5] += 0.06666666666666667;
              }
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9230769230769231;
                result[3] += 0.07692307692307693;
                result[4] += 0;
                result[5] += 0;
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
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)108) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)101) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6363636363636364;
                result[3] += 0.18181818181818182;
                result[4] += 0;
                result[5] += 0.18181818181818182;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9298245614035088;
                result[3] += 0.03508771929824561;
                result[4] += 0;
                result[5] += 0.03508771929824561;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)82.5) ) ) {
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
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)110.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84.5) ) ) {
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
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)88.5) ) ) {
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)101.5) ) ) {
                result[0] += 0.015015015015015017;
                result[1] += 0;
                result[2] += 0.867867867867868;
                result[3] += 0.10510510510510512;
                result[4] += 0;
                result[5] += 0.012012012012012014;
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)63.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9302325581395349;
                result[3] += 0.06976744186046512;
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)43.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)94) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)52.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)67.5) ) ) {
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
            }
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65) ) ) {
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0.7;
                result[5] += 0.2;
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0.5555555555555556;
                result[5] += 0.1111111111111111;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.01443001443001443;
                result[4] += 0.023088023088023088;
                result[5] += 0.9624819624819625;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0.10638297872340426;
                result[2] += 0;
                result[3] += 0.02127659574468085;
                result[4] += 0.5531914893617021;
                result[5] += 0.3191489361702128;
              } else {
                result[0] += 0.003424657534246575;
                result[1] += 0.030821917808219176;
                result[2] += 0.0410958904109589;
                result[3] += 0.22602739726027396;
                result[4] += 0.03424657534246575;
                result[5] += 0.6643835616438356;
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85) ) ) {
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
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2608695652173913;
                result[4] += 0;
                result[5] += 0.7391304347826086;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9702970297029703;
                result[4] += 0;
                result[5] += 0.0297029702970297;
              } else {
                result[0] += 0.4;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)50.5) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)112.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
                result[0] += 0.07207207207207207;
                result[1] += 0.009009009009009009;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.918918918918919;
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
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65.5) ) ) {
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)109.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)102) ) ) {
                result[0] += 0;
                result[1] += 0.5714285714285714;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.42857142857142855;
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
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)112) ) ) {
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
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
                result[0] += 0;
                result[1] += 0.6363636363636364;
                result[2] += 0;
                result[3] += 0.36363636363636365;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.05555555555555555;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8333333333333334;
                result[5] += 0.1111111111111111;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
                result[0] += 0.4125;
                result[1] += 0.05;
                result[2] += 0;
                result[3] += 0.025;
                result[4] += 0.425;
                result[5] += 0.0875;
              } else {
                result[0] += 0.9269717624148004;
                result[1] += 0;
                result[2] += 0.009737098344693282;
                result[3] += 0.024342745861733205;
                result[4] += 0.03018500486854917;
                result[5] += 0.008763388510223954;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
                result[0] += 0.008968609865470852;
                result[1] += 0;
                result[2] += 0.09417040358744394;
                result[3] += 0.3632286995515695;
                result[4] += 0.05829596412556054;
                result[5] += 0.47533632286995514;
              } else {
                result[0] += 0.09090909090909091;
                result[1] += 0;
                result[2] += 0.7575757575757576;
                result[3] += 0.07575757575757576;
                result[4] += 0;
                result[5] += 0.07575757575757576;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0.9818181818181818;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.01818181818181818;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)94.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9545454545454546;
                result[5] += 0.045454545454545456;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)62) ) ) {
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
                result[3] += 0;
                result[4] += 0.375;
                result[5] += 0.375;
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)108.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)73) ) ) {
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
                result[3] += 0.030303030303030304;
                result[4] += 0;
                result[5] += 0.9696969696969697;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73.5) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)111) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.10526315789473684;
                result[3] += 0.7105263157894737;
                result[4] += 0;
                result[5] += 0.18421052631578946;
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)89) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.875;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.125;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
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
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9090909090909091;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.09090909090909091;
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)102.5) ) ) {
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
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)108.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8467153284671534;
                result[3] += 0.14598540145985403;
                result[4] += 0;
                result[5] += 0.007299270072992701;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)117.5) ) ) {
                result[0] += 0.058823529411764705;
                result[1] += 0;
                result[2] += 0.8823529411764706;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.058823529411764705;
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)112.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7121212121212122;
                result[3] += 0.24242424242424243;
                result[4] += 0;
                result[5] += 0.045454545454545456;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9328621908127208;
                result[3] += 0.06713780918727916;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
                result[0] += 0.6666666666666666;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0049382716049382715;
                result[1] += 0;
                result[2] += 0.9876543209876543;
                result[3] += 0.007407407407407408;
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
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4444444444444444;
                result[5] += 0.5555555555555556;
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
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62) ) ) {
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
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.03333333333333333;
                result[5] += 0.9666666666666667;
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)52.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)58) ) ) {
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
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)50) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.037037037037037035;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9629629629629629;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)57) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)74) ) ) {
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)49.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.21739130434782608;
                result[5] += 0.782608695652174;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.019332161687170474;
                result[4] += 0.0035149384885764497;
                result[5] += 0.9771528998242531;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)70.5) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.0625;
                result[2] += 0;
                result[3] += 0.1875;
                result[4] += 0.6875;
                result[5] += 0.0625;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
                result[0] += 0.007751937984496124;
                result[1] += 0;
                result[2] += 0.007751937984496124;
                result[3] += 0.07751937984496124;
                result[4] += 0.007751937984496124;
                result[5] += 0.8992248062015504;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3037974683544304;
                result[4] += 0.05063291139240506;
                result[5] += 0.6455696202531646;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.13953488372093023;
                result[2] += 0;
                result[3] += 0.046511627906976744;
                result[4] += 0.06976744186046512;
                result[5] += 0.7441860465116279;
              } else {
                result[0] += 0;
                result[1] += 0.02666666666666667;
                result[2] += 0.06666666666666667;
                result[3] += 0.36;
                result[4] += 0.10666666666666667;
                result[5] += 0.44;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.08695652173913043;
                result[3] += 0.30434782608695654;
                result[4] += 0;
                result[5] += 0.6086956521739131;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8761904761904762;
                result[4] += 0.009523809523809525;
                result[5] += 0.11428571428571428;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)50.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)64.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)62) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.05555555555555555;
                result[1] += 0.05555555555555555;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8888888888888888;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)92) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)52.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95.5) ) ) {
                result[0] += 0.6296296296296297;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.37037037037037035;
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
                result[0] += 0;
                result[1] += 0.7142857142857143;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.2857142857142857;
              } else {
                result[0] += 0.018292682926829267;
                result[1] += 0.018292682926829267;
                result[2] += 0;
                result[3] += 0.012195121951219513;
                result[4] += 0.9207317073170732;
                result[5] += 0.03048780487804878;
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
                result[0] += 0.9117647058823529;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.058823529411764705;
                result[5] += 0.029411764705882353;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4166666666666667;
                result[4] += 0.08333333333333333;
                result[5] += 0.5;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
                result[0] += 0.9438669438669439;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.014553014553014554;
                result[4] += 0.037422037422037424;
                result[5] += 0.004158004158004158;
              } else {
                result[0] += 0.5;
                result[1] += 0.08823529411764706;
                result[2] += 0;
                result[3] += 0.11764705882352941;
                result[4] += 0.25;
                result[5] += 0.04411764705882353;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
                result[0] += 0.003389830508474576;
                result[1] += 0.03389830508474576;
                result[2] += 0.10508474576271186;
                result[3] += 0.34915254237288135;
                result[4] += 0.05423728813559322;
                result[5] += 0.4542372881355932;
              } else {
                result[0] += 0.09523809523809523;
                result[1] += 0;
                result[2] += 0.6428571428571429;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0.11904761904761904;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
                result[0] += 0.25;
                result[1] += 0.05357142857142857;
                result[2] += 0.48214285714285715;
                result[3] += 0.03571428571428571;
                result[4] += 0.08928571428571429;
                result[5] += 0.08928571428571429;
              } else {
                result[0] += 0.8333333333333334;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.16666666666666666;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)106.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
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
                result[3] += 0.975;
                result[4] += 0;
                result[5] += 0.025;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83) ) ) {
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
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0.1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0.8888888888888888;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104.5) ) ) {
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
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)109) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.42857142857142855;
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)111) ) ) {
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
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)110.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.96875;
                result[3] += 0.03125;
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
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)117.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)85.5) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)116.5) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8489208633093526;
                result[3] += 0.1474820143884892;
                result[4] += 0;
                result[5] += 0.0035971223021582736;
              } else {
                result[0] += 0.01639344262295082;
                result[1] += 0;
                result[2] += 0.9836065573770492;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)113.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7857142857142857;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.21428571428571427;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8571428571428571;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9884169884169884;
                result[3] += 0.011583011583011582;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)113.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)120) ) ) {
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
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8571428571428571;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0.8;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
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
                result[4] += 0.9166666666666666;
                result[5] += 0.08333333333333333;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)64.5) ) ) {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0.25;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.08695652173913043;
                result[5] += 0.9130434782608695;
              }
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
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
                result[4] += 0.5;
                result[5] += 0.5;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.007680491551459293;
                result[4] += 0.007680491551459293;
                result[5] += 0.9846390168970814;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0.3333333333333333;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5454545454545454;
                result[5] += 0.45454545454545453;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08791208791208792;
                result[4] += 0.07692307692307693;
                result[5] += 0.8351648351648352;
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)74) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)64.5) ) ) {
                result[0] += 0.13636363636363635;
                result[1] += 0.045454545454545456;
                result[2] += 0;
                result[3] += 0.09090909090909091;
                result[4] += 0.5909090909090909;
                result[5] += 0.13636363636363635;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08333333333333333;
                result[4] += 0.20833333333333334;
                result[5] += 0.7083333333333334;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.10576923076923077;
                result[4] += 0.038461538461538464;
                result[5] += 0.8557692307692307;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.41025641025641024;
                result[4] += 0;
                result[5] += 0.5897435897435898;
              }
            }
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0.009174311926605505;
                result[2] += 0;
                result[3] += 0.22018348623853212;
                result[4] += 0.01834862385321101;
                result[5] += 0.7522935779816514;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8461538461538461;
                result[5] += 0.15384615384615385;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.052631578947368425;
                result[3] += 0.5789473684210528;
                result[4] += 0.052631578947368425;
                result[5] += 0.31578947368421056;
              }
            }
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9345794392523364;
                result[4] += 0;
                result[5] += 0.06542056074766354;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4444444444444444;
                result[4] += 0;
                result[5] += 0.5555555555555556;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6363636363636364;
                result[4] += 0;
                result[5] += 0.36363636363636365;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.13333333333333333;
                result[4] += 0;
                result[5] += 0.8666666666666667;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
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
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.018018018018018018;
                result[2] += 0;
                result[3] += 0.04504504504504504;
                result[4] += 0.918918918918919;
                result[5] += 0.018018018018018018;
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
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
                result[0] += 0.018518518518518517;
                result[1] += 0.018518518518518517;
                result[2] += 0;
                result[3] += 0.018518518518518517;
                result[4] += 0.8888888888888888;
                result[5] += 0.05555555555555555;
              } else {
                result[0] += 0.13333333333333333;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.36666666666666664;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
                result[0] += 0.84;
                result[1] += 0.04;
                result[2] += 0.12;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.1320754716981132;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1320754716981132;
                result[4] += 0.37735849056603776;
                result[5] += 0.3584905660377358;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
                result[0] += 0.2;
                result[1] += 0.45714285714285713;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.22857142857142856;
                result[5] += 0.11428571428571428;
              } else {
                result[0] += 0.954070981210856;
                result[1] += 0.0020876826722338203;
                result[2] += 0.0020876826722338203;
                result[3] += 0.005219206680584551;
                result[4] += 0.03549060542797495;
                result[5] += 0.0010438413361169101;
              }
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0.005952380952380952;
                result[2] += 0.041666666666666664;
                result[3] += 0.5773809523809523;
                result[4] += 0.017857142857142856;
                result[5] += 0.35714285714285715;
              } else {
                result[0] += 0;
                result[1] += 0.03896103896103896;
                result[2] += 0.33766233766233766;
                result[3] += 0.38961038961038963;
                result[4] += 0;
                result[5] += 0.23376623376623376;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.3;
              } else {
                result[0] += 0.012195121951219513;
                result[1] += 0;
                result[2] += 0.6829268292682927;
                result[3] += 0.2073170731707317;
                result[4] += 0.036585365853658534;
                result[5] += 0.06097560975609756;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)114.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)72.5) ) ) {
                result[0] += 0.8333333333333334;
                result[1] += 0.08333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.08333333333333333;
                result[5] += 0;
              } else {
                result[0] += 0.3793103448275862;
                result[1] += 0;
                result[2] += 0.4827586206896552;
                result[3] += 0;
                result[4] += 0.13793103448275862;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)104.5) ) ) {
                result[0] += 0.9016393442622951;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.09836065573770492;
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
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83) ) ) {
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
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)96) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.034482758620689655;
                result[4] += 0;
                result[5] += 0.9655172413793104;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0.6;
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)92.5) ) ) {
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)109.5) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)101.5) ) ) {
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)95) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)121.5) ) ) {
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
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)81) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102) ) ) {
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
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)113) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3888888888888889;
                result[3] += 0.6111111111111112;
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
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83.5) ) ) {
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7904761904761904;
                result[3] += 0.1523809523809524;
                result[4] += 0;
                result[5] += 0.05714285714285714;
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9416058394160584;
                result[3] += 0.058394160583941604;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)120.5) ) ) {
                result[0] += 0.875;
                result[1] += 0;
                result[2] += 0.125;
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)93) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.875;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.125;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9428571428571428;
                result[3] += 0.05714285714285714;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9122807017543859;
                result[3] += 0.08771929824561403;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)103.5) ) ) {
                result[0] += 0.013513513513513514;
                result[1] += 0;
                result[2] += 0.9459459459459459;
                result[3] += 0.04054054054054054;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9951573849878934;
                result[3] += 0.004842615012106538;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)40) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)52) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)29) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
                result[0] += 0.004149377593360996;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.991701244813278;
                result[5] += 0.004149377593360996;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7692307692307693;
                result[5] += 0.23076923076923078;
              }
            }
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)85) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)97) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)81) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)58.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.019637462235649546;
                result[4] += 0.010574018126888218;
                result[5] += 0.9697885196374623;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)68) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.19047619047619047;
                result[4] += 0;
                result[5] += 0.8095238095238095;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)73) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.047619047619047616;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9523809523809523;
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
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)63.5) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)74) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)78.5) ) ) {
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
                result[4] += 0.7428571428571429;
                result[5] += 0.2571428571428571;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.009345794392523364;
                result[2] += 0;
                result[3] += 0.14018691588785046;
                result[4] += 0.037383177570093455;
                result[5] += 0.8130841121495327;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.40540540540540543;
                result[4] += 0;
                result[5] += 0.5945945945945946;
              }
            }
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)55.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0898876404494382;
                result[3] += 0.29213483146067415;
                result[4] += 0.056179775280898875;
                result[5] += 0.5617977528089888;
              } else {
                result[0] += 0.010526315789473684;
                result[1] += 0.015789473684210527;
                result[2] += 0.04736842105263158;
                result[3] += 0.7526315789473684;
                result[4] += 0;
                result[5] += 0.1736842105263158;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)40) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)88) ) ) {
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)60.5) ) ) {
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
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)112) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.026490066225165563;
                result[2] += 0.033112582781456956;
                result[3] += 0.26490066225165565;
                result[4] += 0.06622516556291391;
                result[5] += 0.609271523178808;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9285714285714286;
                result[3] += 0.07142857142857142;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)100) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
                result[0] += 0.05454545454545454;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9454545454545454;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.42857142857142855;
                result[4] += 0.42857142857142855;
                result[5] += 0.14285714285714285;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99.5) ) ) {
                result[0] += 0.05555555555555555;
                result[1] += 0.8888888888888888;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.05555555555555555;
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8888888888888888;
                result[5] += 0;
              } else {
                result[0] += 0.9479267116682739;
                result[1] += 0.0028929604628736743;
                result[2] += 0.0009643201542912247;
                result[3] += 0.008678881388621022;
                result[4] += 0.03664416586306654;
                result[5] += 0.0028929604628736743;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
                result[0] += 0.08433734939759036;
                result[1] += 0;
                result[2] += 0.1566265060240964;
                result[3] += 0.4457831325301205;
                result[4] += 0;
                result[5] += 0.3132530120481928;
              } else {
                result[0] += 0.7604166666666666;
                result[1] += 0;
                result[2] += 0.0625;
                result[3] += 0.020833333333333332;
                result[4] += 0.13541666666666666;
                result[5] += 0.020833333333333332;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
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
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)103.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0.8;
              } else {
                result[0] += 0.00909090909090909;
                result[1] += 0;
                result[2] += 0.16363636363636364;
                result[3] += 0.7363636363636363;
                result[4] += 0;
                result[5] += 0.09090909090909091;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0.14285714285714285;
                result[2] += 0.42857142857142855;
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
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)89.5) ) ) {
                result[0] += 0.35714285714285715;
                result[1] += 0;
                result[2] += 0.35714285714285715;
                result[3] += 0;
                result[4] += 0.21428571428571427;
                result[5] += 0.07142857142857142;
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
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)105) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)111.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
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
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)116) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89) ) ) {
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
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)109.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7548387096774194;
                result[3] += 0.23870967741935484;
                result[4] += 0;
                result[5] += 0.0064516129032258064;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9545454545454546;
                result[3] += 0.045454545454545456;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)111.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0.8888888888888888;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5714285714285714;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.42857142857142855;
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)85.5) ) ) {
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
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
                result[0] += 0.015957446808510637;
                result[1] += 0;
                result[2] += 0.8723404255319149;
                result[3] += 0.11170212765957446;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0053475935828877;
                result[1] += 0;
                result[2] += 0.9750445632798574;
                result[3] += 0.0196078431372549;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)49) ) ) {
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
                result[4] += 0.1111111111111111;
                result[5] += 0.8888888888888888;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)63) ) ) {
                result[0] += 0;
                result[1] += 0.1111111111111111;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5555555555555556;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0.03636363636363636;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9636363636363636;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)64.5) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)54) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)67.5) ) ) {
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.010248901903367497;
                result[4] += 0.01171303074670571;
                result[5] += 0.9780380673499268;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
                result[0] += 0.011834319526627219;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08284023668639054;
                result[4] += 0.11242603550295859;
                result[5] += 0.7928994082840237;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8;
                result[4] += 0;
                result[5] += 0.2;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.19047619047619047;
                result[4] += 0;
                result[5] += 0.8095238095238095;
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)67.5) ) ) {
                result[0] += 0.14285714285714285;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7142857142857143;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0.9666666666666667;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.03333333333333333;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
                result[0] += 0;
                result[1] += 0.8571428571428571;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0;
              } else {
                result[0] += 0.004901960784313725;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3284313725490196;
                result[4] += 0.0196078431372549;
                result[5] += 0.6470588235294118;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0.09090909090909091;
                result[2] += 0;
                result[3] += 0.5454545454545454;
                result[4] += 0;
                result[5] += 0.36363636363636365;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.07142857142857142;
                result[5] += 0.9285714285714286;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)69) ) ) {
                result[0] += 0.2;
                result[1] += 0.4;
                result[2] += 0.2;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.2;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9193548387096774;
                result[4] += 0;
                result[5] += 0.08064516129032258;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)58.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81.5) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)100) ) ) {
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
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)107) ) ) {
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
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)106.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)51.5) ) ) {
                result[0] += 0.7222222222222222;
                result[1] += 0.05555555555555555;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2222222222222222;
                result[5] += 0;
              } else {
                result[0] += 0.010638297872340425;
                result[1] += 0.031914893617021274;
                result[2] += 0;
                result[3] += 0.010638297872340425;
                result[4] += 0.9148936170212766;
                result[5] += 0.031914893617021274;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)112) ) ) {
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
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54.5) ) ) {
                result[0] += 0.7857142857142857;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.21428571428571427;
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
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
                result[0] += 0.17857142857142858;
                result[1] += 0.03571428571428571;
                result[2] += 0.07142857142857142;
                result[3] += 0.39285714285714285;
                result[4] += 0.17857142857142858;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0.9465570400822201;
                result[1] += 0.005138746145940391;
                result[2] += 0;
                result[3] += 0.007194244604316548;
                result[4] += 0.03905447070914698;
                result[5] += 0.0020554984583761567;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0.006329113924050633;
                result[2] += 0.05063291139240506;
                result[3] += 0.46835443037974683;
                result[4] += 0.012658227848101266;
                result[5] += 0.4620253164556962;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
                result[0] += 0.34285714285714286;
                result[1] += 0;
                result[2] += 0.08571428571428572;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0.17142857142857143;
              } else {
                result[0] += 0.030303030303030304;
                result[1] += 0.030303030303030304;
                result[2] += 0.6868686868686869;
                result[3] += 0.16161616161616163;
                result[4] += 0;
                result[5] += 0.09090909090909091;
              }
            }
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)102.5) ) ) {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0.05555555555555555;
                result[4] += 0.7222222222222222;
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85) ) ) {
                result[0] += 0.9629629629629629;
                result[1] += 0;
                result[2] += 0.037037037037037035;
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
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.375;
                result[4] += 0;
                result[5] += 0.625;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0625;
                result[4] += 0.03125;
                result[5] += 0.90625;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91) ) ) {
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0;
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
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)113.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86) ) ) {
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
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)128.5) ) ) {
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0.25;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)102.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
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
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)106.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5384615384615384;
                result[3] += 0.34615384615384615;
                result[4] += 0;
                result[5] += 0.11538461538461539;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)129) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3076923076923077;
                result[3] += 0.6923076923076923;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)120.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8717201166180758;
                result[3] += 0.119533527696793;
                result[4] += 0;
                result[5] += 0.008746355685131196;
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
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)119.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9903614457831326;
                result[3] += 0.00963855421686747;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.925;
                result[3] += 0.075;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)112) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.022222222222222223;
                result[1] += 0;
                result[2] += 0.9333333333333333;
                result[3] += 0.044444444444444446;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)50.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)82.5) ) ) {
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
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
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
                result[4] += 0.9523809523809523;
                result[5] += 0.047619047619047616;
              }
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)51.5) ) ) {
              result[0] += 0;
              result[1] += 1;
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
                result[4] += 0.6666666666666666;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.967741935483871;
                result[5] += 0.03225806451612903;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)61) ) ) {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)57.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
                result[0] += 0;
                result[1] += 0.14285714285714285;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7142857142857143;
                result[5] += 0.14285714285714285;
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.014388489208633094;
                result[5] += 0.9856115107913669;
              } else {
                result[0] += 0.003194888178913738;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08945686900958466;
                result[4] += 0.054313099041533544;
                result[5] += 0.853035143769968;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
                result[0] += 0.038461538461538464;
                result[1] += 0.05128205128205128;
                result[2] += 0;
                result[3] += 0.2564102564102564;
                result[4] += 0.20512820512820512;
                result[5] += 0.44871794871794873;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.031746031746031744;
                result[3] += 0.06349206349206349;
                result[4] += 0.015873015873015872;
                result[5] += 0.8888888888888888;
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)60) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)64) ) ) {
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
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0.02912621359223301;
                result[2] += 0;
                result[3] += 0.1941747572815534;
                result[4] += 0.038834951456310676;
                result[5] += 0.7378640776699029;
              } else {
                result[0] += 0;
                result[1] += 0.04;
                result[2] += 0.04;
                result[3] += 0.56;
                result[4] += 0;
                result[5] += 0.36;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)81) ) ) {
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
                result[3] += 0.9044117647058824;
                result[4] += 0;
                result[5] += 0.09558823529411764;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)62) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.09090909090909091;
                result[3] += 0.13636363636363635;
                result[4] += 0;
                result[5] += 0.7727272727272727;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)50) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)57.5) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)121) ) ) {
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
                result[0] += 0.7636363636363637;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.23636363636363636;
                result[5] += 0;
              } else {
                result[0] += 0.10227272727272729;
                result[1] += 0.011363636363636366;
                result[2] += 0.10227272727272729;
                result[3] += 0.18181818181818185;
                result[4] += 0.5454545454545455;
                result[5] += 0.05681818181818182;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)77.5) ) ) {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
                result[0] += 0.13043478260869565;
                result[1] += 0.14130434782608695;
                result[2] += 0;
                result[3] += 0.05434782608695652;
                result[4] += 0.6739130434782609;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9166666666666667;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.04166666666666667;
                result[5] += 0.04166666666666667;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)46.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.928639391056137;
                result[1] += 0.004757373929590866;
                result[2] += 0.009514747859181731;
                result[3] += 0.010466222645099905;
                result[4] += 0.039961941008563276;
                result[5] += 0.006660323501427212;
              }
            }
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.037037037037037035;
                result[3] += 0.14814814814814814;
                result[4] += 0;
                result[5] += 0.8148148148148148;
              } else {
                result[0] += 0.005988023952095809;
                result[1] += 0;
                result[2] += 0.11377245508982035;
                result[3] += 0.5389221556886228;
                result[4] += 0.005988023952095809;
                result[5] += 0.33532934131736525;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
                result[0] += 0.03333333333333333;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0.13333333333333333;
                result[4] += 0.2;
                result[5] += 0.4666666666666667;
              } else {
                result[0] += 0.07894736842105263;
                result[1] += 0;
                result[2] += 0.7807017543859649;
                result[3] += 0.07894736842105263;
                result[4] += 0.03508771929824561;
                result[5] += 0.02631578947368421;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96) ) ) {
                result[0] += 0.09090909090909091;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.09090909090909091;
                result[4] += 0.8181818181818182;
                result[5] += 0;
              } else {
                result[0] += 0.8;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9016393442622951;
                result[1] += 0;
                result[2] += 0.08196721311475409;
                result[3] += 0;
                result[4] += 0.01639344262295082;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)102) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)57.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.13559322033898305;
                result[4] += 0;
                result[5] += 0.864406779661017;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.11111111111111112;
                result[3] += 0.6666666666666667;
                result[4] += 0;
                result[5] += 0.22222222222222224;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63) ) ) {
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
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71) ) ) {
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)106.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8461538461538461;
                result[3] += 0.07692307692307693;
                result[4] += 0;
                result[5] += 0.07692307692307693;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)98.5) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)118.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)115.5) ) ) {
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
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)79) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)116) ) ) {
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
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
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4090909090909091;
                result[3] += 0.5454545454545454;
                result[4] += 0;
                result[5] += 0.045454545454545456;
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8491620111731844;
                result[3] += 0.15083798882681565;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)85) ) ) {
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
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4285714285714286;
                result[3] += 0.4761904761904762;
                result[4] += 0;
                result[5] += 0.09523809523809525;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.001658374792703151;
                result[1] += 0;
                result[2] += 0.9767827529021559;
                result[3] += 0.02155887230514096;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)49.5) ) ) {
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
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92) ) ) {
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.024390243902439025;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.07317073170731707;
                result[5] += 0.9024390243902439;
              }
            }
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.875;
                result[5] += 0.125;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)73.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
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
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
                result[0] += 0.03571428571428572;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8571428571428572;
                result[5] += 0.10714285714285715;
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
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0.75;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4;
                result[4] += 0.6;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.03803680981595092;
                result[4] += 0.013496932515337423;
                result[5] += 0.9484662576687116;
              }
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0.6;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.12345679012345678;
                result[4] += 0.012345679012345678;
                result[5] += 0.8641975308641975;
              } else {
                result[0] += 0.375;
                result[1] += 0;
                result[2] += 0.375;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0.06666666666666667;
                result[2] += 0;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0.5333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0.009009009009009009;
                result[2] += 0;
                result[3] += 0.918918918918919;
                result[4] += 0;
                result[5] += 0.07207207207207207;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
                result[0] += 0.04878048780487805;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3048780487804878;
                result[4] += 0.036585365853658534;
                result[5] += 0.6097560975609756;
              } else {
                result[0] += 0;
                result[1] += 0.08571428571428572;
                result[2] += 0.02857142857142857;
                result[3] += 0.6857142857142857;
                result[4] += 0;
                result[5] += 0.2;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)102.5) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)68.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)38) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53) ) ) {
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
                result[3] += 0.5;
                result[4] += 0.5;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)54) ) ) {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.45;
                result[5] += 0.05;
              } else {
                result[0] += 0.014084507042253521;
                result[1] += 0.028169014084507043;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9436619718309859;
                result[5] += 0.014084507042253521;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89) ) ) {
                result[0] += 0.06779661016949154;
                result[1] += 0;
                result[2] += 0.050847457627118654;
                result[3] += 0.016949152542372885;
                result[4] += 0.728813559322034;
                result[5] += 0.13559322033898308;
              } else {
                result[0] += 0.07407407407407407;
                result[1] += 0.6666666666666666;
                result[2] += 0;
                result[3] += 0.012345679012345678;
                result[4] += 0.20987654320987653;
                result[5] += 0.037037037037037035;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)68.5) ) ) {
                result[0] += 0.2173913043478261;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2173913043478261;
                result[4] += 0.3478260869565218;
                result[5] += 0.2173913043478261;
              } else {
                result[0] += 0.9446153846153846;
                result[1] += 0.0020512820512820513;
                result[2] += 0;
                result[3] += 0.006153846153846154;
                result[4] += 0.04205128205128205;
                result[5] += 0.005128205128205128;
              }
            }
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88.5) ) ) {
                result[0] += 0.04411764705882353;
                result[1] += 0;
                result[2] += 0.058823529411764705;
                result[3] += 0.3088235294117647;
                result[4] += 0.04411764705882353;
                result[5] += 0.5441176470588235;
              } else {
                result[0] += 0;
                result[1] += 0.00909090909090909;
                result[2] += 0.2;
                result[3] += 0.5636363636363636;
                result[4] += 0.02727272727272727;
                result[5] += 0.2;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7063492063492064;
                result[3] += 0.1746031746031746;
                result[4] += 0.007936507936507936;
                result[5] += 0.1111111111111111;
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
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)106.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
                result[0] += 0.2;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4666666666666667;
                result[5] += 0;
              } else {
                result[0] += 0.34782608695652173;
                result[1] += 0;
                result[2] += 0.6086956521739131;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.043478260869565216;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)92.5) ) ) {
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)113.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84) ) ) {
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
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0.625;
              }
            }
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68.5) ) ) {
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
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71) ) ) {
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
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)81.5) ) ) {
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
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)107.5) ) ) {
                result[0] += 0;
                result[1] += 0.043478260869565216;
                result[2] += 0.7391304347826086;
                result[3] += 0.13043478260869565;
                result[4] += 0;
                result[5] += 0.08695652173913043;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)77) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
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
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.23809523809523808;
                result[3] += 0.6190476190476191;
                result[4] += 0.047619047619047616;
                result[5] += 0.09523809523809523;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7;
                result[3] += 0.3;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.813953488372093;
                result[3] += 0.18604651162790697;
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)100) ) ) {
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)112.5) ) ) {
                result[0] += 0.014354066985645933;
                result[1] += 0;
                result[2] += 0.8995215311004785;
                result[3] += 0.07655502392344497;
                result[4] += 0;
                result[5] += 0.009569377990430622;
              } else {
                result[0] += 0.10526315789473684;
                result[1] += 0;
                result[2] += 0.631578947368421;
                result[3] += 0.2631578947368421;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)111.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9506172839506173;
                result[3] += 0.043209876543209874;
                result[4] += 0;
                result[5] += 0.006172839506172839;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5882352941176471;
                result[3] += 0.4117647058823529;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9736842105263158;
                result[3] += 0.02631578947368421;
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)123) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)49.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)62.5) ) ) {
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
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)62.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64) ) ) {
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
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)59) ) ) {
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.030346820809248554;
                result[4] += 0.015895953757225433;
                result[5] += 0.953757225433526;
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
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)72) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.047619047619047616;
                result[3] += 0.6190476190476191;
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
            }
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)55.5) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)64.5) ) ) {
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
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.02564102564102564;
                result[4] += 0.5641025641025641;
                result[5] += 0.41025641025641024;
              } else {
                result[0] += 0.0064516129032258064;
                result[1] += 0;
                result[2] += 0.0064516129032258064;
                result[3] += 0.07741935483870968;
                result[4] += 0.07096774193548387;
                result[5] += 0.8387096774193549;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
                result[0] += 0.02631578947368421;
                result[1] += 0.07894736842105263;
                result[2] += 0.039473684210526314;
                result[3] += 0.32894736842105265;
                result[4] += 0.06578947368421052;
                result[5] += 0.4605263157894737;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.738255033557047;
                result[4] += 0.013422818791946308;
                result[5] += 0.2483221476510067;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0.9333333333333333;
                result[2] += 0;
                result[3] += 0.06666666666666667;
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
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.6;
                result[1] += 0.4;
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
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50.5) ) ) {
                result[0] += 0;
                result[1] += 0.8888888888888888;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1111111111111111;
                result[5] += 0;
              } else {
                result[0] += 0.0875;
                result[1] += 0.025;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8875;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
                result[0] += 0.9341199606686332;
                result[1] += 0.0019665683382497543;
                result[2] += 0;
                result[3] += 0.012782694198623401;
                result[4] += 0.04523107177974434;
                result[5] += 0.0058997050147492625;
              } else {
                result[0] += 0.5163934426229508;
                result[1] += 0.01639344262295082;
                result[2] += 0.13114754098360656;
                result[3] += 0.13114754098360656;
                result[4] += 0.09836065573770492;
                result[5] += 0.10655737704918032;
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9387755102040817;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.061224489795918366;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0.75;
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)110.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.34782608695652173;
                result[4] += 0.043478260869565216;
                result[5] += 0.6086956521739131;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.024390243902439025;
                result[3] += 0.8292682926829268;
                result[4] += 0;
                result[5] += 0.14634146341463414;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
                result[0] += 0.047619047619047616;
                result[1] += 0.023809523809523808;
                result[2] += 0.07142857142857142;
                result[3] += 0.2857142857142857;
                result[4] += 0.38095238095238093;
                result[5] += 0.19047619047619047;
              } else {
                result[0] += 0.07936507936507937;
                result[1] += 0;
                result[2] += 0.8095238095238096;
                result[3] += 0.015873015873015876;
                result[4] += 0.03174603174603175;
                result[5] += 0.0634920634920635;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.17647058823529413;
                result[3] += 0;
                result[4] += 0.8235294117647058;
                result[5] += 0;
              } else {
                result[0] += 0.8181818181818182;
                result[1] += 0;
                result[2] += 0.09090909090909091;
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82) ) ) {
                result[0] += 0.98;
                result[1] += 0;
                result[2] += 0.02;
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
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)105) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
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
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.22222222222222224;
                result[2] += 0.11111111111111112;
                result[3] += 0.4444444444444445;
                result[4] += 0;
                result[5] += 0.22222222222222224;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.022471910112359553;
                result[3] += 0.9325842696629214;
                result[4] += 0;
                result[5] += 0.04494382022471911;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.23636363636363636;
                result[3] += 0.6;
                result[4] += 0;
                result[5] += 0.16363636363636364;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)80.5) ) ) {
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8571428571428572;
                result[3] += 0.10714285714285715;
                result[4] += 0;
                result[5] += 0.03571428571428572;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8888888888888888;
                result[4] += 0;
                result[5] += 0.1111111111111111;
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
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)127.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)109) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5555555555555556;
                result[4] += 0;
                result[5] += 0.4444444444444444;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0.012315270935960588;
                result[1] += 0;
                result[2] += 0.8300492610837437;
                result[3] += 0.14778325123152708;
                result[4] += 0;
                result[5] += 0.009852216748768471;
              }
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
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
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9826589595375722;
                result[3] += 0.017341040462427744;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
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
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)69) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60) ) ) {
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
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
                result[0] += 0.4;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0.4;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0.08333333333333333;
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)43) ) ) {
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
                result[3] += 0.020107238605898123;
                result[4] += 0.012064343163538873;
                result[5] += 0.967828418230563;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78) ) ) {
                result[0] += 0.010869565217391304;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06521739130434782;
                result[4] += 0.043478260869565216;
                result[5] += 0.8804347826086957;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3;
                result[5] += 0.7;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8913043478260869;
                result[4] += 0;
                result[5] += 0.10869565217391304;
              }
            }
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)55.5) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)57.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58.5) ) ) {
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
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)82) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.022727272727272728;
                result[2] += 0;
                result[3] += 0.18181818181818182;
                result[4] += 0.125;
                result[5] += 0.6704545454545454;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7416666666666667;
                result[4] += 0;
                result[5] += 0.25833333333333336;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8461538461538461;
                result[3] += 0;
                result[4] += 0.07692307692307693;
                result[5] += 0.07692307692307693;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)107) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)49.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0.5;
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
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)102) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)74) ) ) {
                result[0] += 0.012345679012345678;
                result[1] += 0.06172839506172839;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9259259259259259;
                result[5] += 0;
              } else {
                result[0] += 0.2692307692307692;
                result[1] += 0.038461538461538464;
                result[2] += 0.07692307692307693;
                result[3] += 0.19230769230769232;
                result[4] += 0.4230769230769231;
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
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0.041666666666666664;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.75;
                result[4] += 0.125;
                result[5] += 0.08333333333333333;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
                result[0] += 0.2653061224489796;
                result[1] += 0.061224489795918366;
                result[2] += 0;
                result[3] += 0.08163265306122448;
                result[4] += 0.5714285714285714;
                result[5] += 0.02040816326530612;
              } else {
                result[0] += 0.9257518796992481;
                result[1] += 0.007518796992481203;
                result[2] += 0.006578947368421052;
                result[3] += 0.015977443609022556;
                result[4] += 0.03383458646616541;
                result[5] += 0.010338345864661654;
              }
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0.3;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0.2;
              } else {
                result[0] += 0.0111731843575419;
                result[1] += 0.027932960893854747;
                result[2] += 0.08379888268156424;
                result[3] += 0.5139664804469274;
                result[4] += 0.01675977653631285;
                result[5] += 0.3463687150837989;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.060000000000000005;
                result[1] += 0;
                result[2] += 0.5700000000000001;
                result[3] += 0.08000000000000002;
                result[4] += 0.020000000000000004;
                result[5] += 0.2700000000000001;
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)112.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.8333333333333334;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)85) ) ) {
                result[0] += 0.16666666666666666;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9069767441860465;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.09302325581395349;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)81) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)64.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.03125;
                result[4] += 0;
                result[5] += 0.96875;
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
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
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
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.25;
                result[4] += 0.5;
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
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.23076923076923078;
                result[4] += 0;
                result[5] += 0.7692307692307693;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9090909090909091;
                result[4] += 0;
                result[5] += 0.09090909090909091;
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.3;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3;
                result[4] += 0.2;
                result[5] += 0.2;
              }
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)111.5) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107.5) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0.037037037037037035;
                result[2] += 0.037037037037037035;
                result[3] += 0.8518518518518519;
                result[4] += 0;
                result[5] += 0.07407407407407407;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6842105263157895;
                result[3] += 0.3157894736842105;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)95) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)113.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)86.5) ) ) {
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
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)81.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)92.5) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.23809523809523808;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.42857142857142855;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0.1;
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)109.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
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
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8787878787878788;
                result[3] += 0.10606060606060606;
                result[4] += 0;
                result[5] += 0.015151515151515152;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5714285714285714;
                result[3] += 0.42857142857142855;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
                result[0] += 0.008;
                result[1] += 0;
                result[2] += 0.92;
                result[3] += 0.072;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0019569471624266144;
                result[1] += 0;
                result[2] += 0.9823874755381604;
                result[3] += 0.015655577299412915;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)99.5) ) ) {
                result[0] += 0.0045045045045045045;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9954954954954955;
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
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
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
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)84) ) ) {
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
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)52.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)82.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0.95;
                result[2] += 0;
                result[3] += 0.05;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2857142857142857;
                result[5] += 0.7142857142857143;
              } else {
                result[0] += 0.03571428571428572;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.03571428571428572;
                result[4] += 0.8214285714285715;
                result[5] += 0.10714285714285715;
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0.0016051364365971107;
                result[2] += 0;
                result[3] += 0.0032102728731942215;
                result[4] += 0.004815409309791332;
                result[5] += 0.9903691813804173;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.09230769230769231;
                result[4] += 0.1076923076923077;
                result[5] += 0.8;
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.19298245614035087;
                result[4] += 0;
                result[5] += 0.8070175438596491;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.76;
                result[4] += 0;
                result[5] += 0.24;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)64) ) ) {
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
                result[3] += 0.26229508196721313;
                result[4] += 0.03278688524590164;
                result[5] += 0.7049180327868853;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8629032258064516;
                result[4] += 0;
                result[5] += 0.13709677419354838;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)98) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)66.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)43) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100) ) ) {
                result[0] += 0;
                result[1] += 0.6666666666666666;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
                result[0] += 0.03225806451612903;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9032258064516129;
                result[5] += 0.06451612903225806;
              } else {
                result[0] += 0.7076923076923077;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.26153846153846155;
                result[5] += 0.03076923076923077;
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0.18181818181818182;
                result[2] += 0;
                result[3] += 0.09090909090909091;
                result[4] += 0.7272727272727273;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.12903225806451613;
                result[3] += 0.14516129032258066;
                result[4] += 0.04838709677419355;
                result[5] += 0.6774193548387096;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0.07272727272727272;
                result[2] += 0.03636363636363636;
                result[3] += 0.6;
                result[4] += 0.14545454545454545;
                result[5] += 0.14545454545454545;
              } else {
                result[0] += 0.42857142857142855;
                result[1] += 0;
                result[2] += 0.5714285714285714;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)44) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.07042253521126761;
                result[1] += 0.15492957746478872;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7464788732394366;
                result[5] += 0.028169014084507043;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
                result[0] += 0.9143672692673644;
                result[1] += 0.006660323501427212;
                result[2] += 0.005708848715509039;
                result[3] += 0.007611798287345386;
                result[4] += 0.049476688867745006;
                result[5] += 0.016175071360608945;
              } else {
                result[0] += 0.4806201550387597;
                result[1] += 0.015503875968992248;
                result[2] += 0.007751937984496124;
                result[3] += 0.24806201550387597;
                result[4] += 0.1937984496124031;
                result[5] += 0.05426356589147287;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.09090909090909091;
                result[3] += 0.6060606060606061;
                result[4] += 0.06060606060606061;
                result[5] += 0.24242424242424243;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5833333333333334;
                result[3] += 0.25;
                result[4] += 0.041666666666666664;
                result[5] += 0.125;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)109) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8571428571428571;
                result[3] += 0.12698412698412698;
                result[4] += 0;
                result[5] += 0.015873015873015872;
              } else {
                result[0] += 0.9090909090909091;
                result[1] += 0;
                result[2] += 0.09090909090909091;
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)64) ) ) {
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)83) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)81) ) ) {
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
                result[3] += 0.09523809523809523;
                result[4] += 0;
                result[5] += 0.9047619047619048;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)83.5) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0.02272727272727273;
                result[2] += 0;
                result[3] += 0.9318181818181819;
                result[4] += 0;
                result[5] += 0.04545454545454546;
              } else {
                result[0] += 0;
                result[1] += 0.02857142857142857;
                result[2] += 0.2571428571428571;
                result[3] += 0.6;
                result[4] += 0;
                result[5] += 0.11428571428571428;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.13333333333333333;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0.2;
                result[2] += 0.8;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)110) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.23529411764705882;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.7647058823529411;
              } else {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0.4166666666666667;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8867924528301887;
                result[3] += 0.11320754716981132;
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
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
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
                result[3] += 0.8947368421052632;
                result[4] += 0;
                result[5] += 0.10526315789473684;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6363636363636364;
                result[3] += 0.18181818181818182;
                result[4] += 0;
                result[5] += 0.18181818181818182;
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77.5) ) ) {
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
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8846153846153846;
                result[3] += 0.11538461538461539;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.045454545454545456;
                result[1] += 0;
                result[2] += 0.5227272727272727;
                result[3] += 0.4318181818181818;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)120) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)110.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9545454545454546;
                result[3] += 0.03409090909090909;
                result[4] += 0;
                result[5] += 0.011363636363636364;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8709677419354839;
                result[3] += 0.12903225806451613;
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)115.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9071428571428571;
                result[3] += 0.09285714285714286;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.3125;
                result[1] += 0;
                result[2] += 0.5625;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9976635514018691;
                result[3] += 0.002336448598130841;
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)53) ) ) {
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
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
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
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)40) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0.029411764705882353;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9621848739495799;
                result[5] += 0.008403361344537815;
              } else {
                result[0] += 0.26666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4666666666666667;
                result[5] += 0.26666666666666666;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)117) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.09090909090909091;
                result[3] += 0;
                result[4] += 0.5584415584415584;
                result[5] += 0.35064935064935066;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
                result[0] += 0.28846153846153844;
                result[1] += 0.21153846153846154;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4230769230769231;
                result[5] += 0.07692307692307693;
              } else {
                result[0] += 0.967032967032967;
                result[1] += 0.016483516483516484;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.01098901098901099;
                result[5] += 0.005494505494505495;
              }
            }
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9230769230769231;
                result[5] += 0.07692307692307693;
              } else {
                result[0] += 0;
                result[1] += 0.5714285714285714;
                result[2] += 0;
                result[3] += 0.42857142857142855;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0037220843672456576;
                result[3] += 0.033498759305210915;
                result[4] += 0.022332506203473945;
                result[5] += 0.9404466501240695;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.30392156862745096;
                result[4] += 0.09803921568627451;
                result[5] += 0.5980392156862745;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0.038834951456310676;
                result[2] += 0.02912621359223301;
                result[3] += 0.1553398058252427;
                result[4] += 0.2621359223300971;
                result[5] += 0.5145631067961165;
              } else {
                result[0] += 0.7073170731707317;
                result[1] += 0.042682926829268296;
                result[2] += 0.018292682926829267;
                result[3] += 0.024390243902439025;
                result[4] += 0.2073170731707317;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
                result[0] += 0.0078125;
                result[1] += 0.015625;
                result[2] += 0.044921875;
                result[3] += 0.50390625;
                result[4] += 0.0390625;
                result[5] += 0.388671875;
              } else {
                result[0] += 0.15254237288135594;
                result[1] += 0.03389830508474576;
                result[2] += 0.11864406779661017;
                result[3] += 0.03389830508474576;
                result[4] += 0.5423728813559322;
                result[5] += 0.11864406779661017;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
                result[0] += 0.9969924812030075;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0015037593984962407;
                result[4] += 0.0015037593984962407;
                result[5] += 0;
              } else {
                result[0] += 0.9285714285714286;
                result[1] += 0;
                result[2] += 0.023809523809523808;
                result[3] += 0;
                result[4] += 0.047619047619047616;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)94) ) ) {
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)93) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91) ) ) {
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
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0.875;
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
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9512195121951219;
                result[3] += 0.04878048780487805;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82) ) ) {
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
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.041666666666666664;
                result[3] += 0.9583333333333334;
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
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06666666666666667;
                result[3] += 0.6;
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
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9615384615384616;
                result[3] += 0.038461538461538464;
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)103.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.625;
                result[3] += 0.328125;
                result[4] += 0;
                result[5] += 0.046875;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.875;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)108.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6;
                result[3] += 0.4;
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
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)113.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9444444444444444;
                result[3] += 0.05555555555555555;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)94) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)126.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9518072289156626;
                result[3] += 0.04819277108433735;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.04838709677419355;
                result[1] += 0;
                result[2] += 0.7419354838709677;
                result[3] += 0.20967741935483872;
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.90625;
                result[3] += 0.09375;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9798387096774194;
                result[3] += 0.020161290322580645;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)96) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)39.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0.006666666666666667;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9933333333333333;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8620689655172413;
                result[5] += 0.13793103448275862;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)55) ) ) {
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
                result[4] += 0.08333333333333333;
                result[5] += 0.9166666666666666;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)67.5) ) ) {
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
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)73) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)53) ) ) {
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
                result[4] += 0.2;
                result[5] += 0.8;
              }
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)50.5) ) ) {
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
                result[3] += 0.021834061135371178;
                result[4] += 0.01455604075691412;
                result[5] += 0.9636098981077147;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
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
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.15;
                result[4] += 0;
                result[5] += 0.85;
              } else {
                result[0] += 0.0273972602739726;
                result[1] += 0;
                result[2] += 0.0136986301369863;
                result[3] += 0.3287671232876712;
                result[4] += 0.0547945205479452;
                result[5] += 0.5753424657534246;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)50) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)67) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)64) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)67.5) ) ) {
                result[0] += 0.019230769230769232;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.009615384615384616;
                result[4] += 0.9711538461538461;
                result[5] += 0;
              } else {
                result[0] += 0.13333333333333333;
                result[1] += 0.23333333333333334;
                result[2] += 0;
                result[3] += 0.03333333333333333;
                result[4] += 0.5;
                result[5] += 0.1;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
                result[0] += 0.03278688524590164;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.10655737704918032;
                result[4] += 0.1721311475409836;
                result[5] += 0.6885245901639344;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.875;
                result[4] += 0;
                result[5] += 0.125;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
                result[0] += 0.2987012987012987;
                result[1] += 0.07792207792207792;
                result[2] += 0;
                result[3] += 0.19480519480519481;
                result[4] += 0.42857142857142855;
                result[5] += 0;
              } else {
                result[0] += 0.8987138263665595;
                result[1] += 0.0008038585209003215;
                result[2] += 0;
                result[3] += 0.02572347266881029;
                result[4] += 0.053858520900321546;
                result[5] += 0.02090032154340836;
              }
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0.015873015873015872;
                result[2] += 0.031746031746031744;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0.8095238095238095;
              } else {
                result[0] += 0.010169491525423728;
                result[1] += 0.013559322033898305;
                result[2] += 0.04745762711864407;
                result[3] += 0.6338983050847458;
                result[4] += 0;
                result[5] += 0.29491525423728815;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0.1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4;
                result[5] += 0.5;
              } else {
                result[0] += 0.05128205128205128;
                result[1] += 0;
                result[2] += 0.8205128205128205;
                result[3] += 0.07692307692307693;
                result[4] += 0;
                result[5] += 0.05128205128205128;
              }
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
                result[0] += 0.0975609756097561;
                result[1] += 0;
                result[2] += 0.1951219512195122;
                result[3] += 0.2926829268292683;
                result[4] += 0.024390243902439025;
                result[5] += 0.3902439024390244;
              } else {
                result[0] += 0.01282051282051282;
                result[1] += 0.01282051282051282;
                result[2] += 0.7692307692307693;
                result[3] += 0.08974358974358974;
                result[4] += 0.02564102564102564;
                result[5] += 0.08974358974358974;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
                result[0] += 0.07142857142857142;
                result[1] += 0;
                result[2] += 0.9285714285714286;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.7951807228915663;
                result[1] += 0;
                result[2] += 0.07228915662650602;
                result[3] += 0;
                result[4] += 0.13253012048192772;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58.5) ) ) {
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
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93) ) ) {
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79) ) ) {
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
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)74.5) ) ) {
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
                result[4] += 0.038461538461538464;
                result[5] += 0.9615384615384616;
              }
            }
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)89.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90) ) ) {
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.32;
                result[3] += 0.68;
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
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
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
                result[4] += 0;
                result[5] += 0.5;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9459459459459459;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.05405405405405406;
              }
            }
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
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
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)90) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)79) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)100.5) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)107) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)94.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5714285714285714;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.42857142857142855;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.926829268292683;
                result[3] += 0.04878048780487805;
                result[4] += 0;
                result[5] += 0.024390243902439025;
              } else {
                result[0] += 0.03225806451612903;
                result[1] += 0;
                result[2] += 0.6612903225806451;
                result[3] += 0.2903225806451613;
                result[4] += 0;
                result[5] += 0.016129032258064516;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)131.5) ) ) {
                result[0] += 0.010752688172043012;
                result[1] += 0;
                result[2] += 0.8853046594982079;
                result[3] += 0.1003584229390681;
                result[4] += 0;
                result[5] += 0.0035842293906810036;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9872068230277186;
                result[3] += 0.01279317697228145;
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98.5) ) ) {
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)64) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)57.5) ) ) {
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)84.5) ) ) {
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
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            }
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)81) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)58.5) ) ) {
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
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.972972972972973;
                result[1] += 0.02702702702702703;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)54.5) ) ) {
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
                result[3] += 0.022222222222222223;
                result[4] += 0.15555555555555556;
                result[5] += 0.8222222222222222;
              }
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.023968042609853527;
                result[4] += 0.02663115845539281;
                result[5] += 0.9494007989347537;
              } else {
                result[0] += 0;
                result[1] += 0.01;
                result[2] += 0;
                result[3] += 0.17;
                result[4] += 0.07;
                result[5] += 0.75;
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.030303030303030304;
                result[4] += 0.06060606060606061;
                result[5] += 0.9090909090909091;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06666666666666667;
                result[3] += 0.6666666666666666;
                result[4] += 0.06666666666666667;
                result[5] += 0.2;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)81.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.03773584905660377;
                result[3] += 0.5094339622641509;
                result[4] += 0.03773584905660377;
                result[5] += 0.41509433962264153;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9375;
                result[4] += 0.010416666666666666;
                result[5] += 0.052083333333333336;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0.3333333333333333;
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)102) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)102) ) ) {
                result[0] += 0.09803921568627451;
                result[1] += 0.013071895424836602;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8823529411764706;
                result[5] += 0.006535947712418301;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.15384615384615385;
                result[1] += 0.23076923076923078;
                result[2] += 0;
                result[3] += 0.3076923076923077;
                result[4] += 0.3076923076923077;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0.23529411764705882;
                result[2] += 0;
                result[3] += 0.35294117647058826;
                result[4] += 0.17647058823529413;
                result[5] += 0.23529411764705882;
              } else {
                result[0] += 0.9438528557599225;
                result[1] += 0.010648596321393998;
                result[2] += 0;
                result[3] += 0.005808325266214908;
                result[4] += 0.03581800580832527;
                result[5] += 0.003872216844143272;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97) ) ) {
                result[0] += 0.0423728813559322;
                result[1] += 0;
                result[2] += 0.1016949152542373;
                result[3] += 0.3389830508474576;
                result[4] += 0.2796610169491525;
                result[5] += 0.23728813559322035;
              } else {
                result[0] += 0.9272727272727272;
                result[1] += 0;
                result[2] += 0.07272727272727272;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61) ) ) {
                result[0] += 0;
                result[1] += 0.5714285714285714;
                result[2] += 0;
                result[3] += 0.23809523809523808;
                result[4] += 0.19047619047619047;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.022900763358778626;
                result[3] += 0.19083969465648856;
                result[4] += 0.06870229007633588;
                result[5] += 0.7175572519083969;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16666666666666669;
                result[3] += 0.6666666666666667;
                result[4] += 0;
                result[5] += 0.16666666666666669;
              } else {
                result[0] += 0.037037037037037035;
                result[1] += 0;
                result[2] += 0.6481481481481481;
                result[3] += 0.1111111111111111;
                result[4] += 0;
                result[5] += 0.2037037037037037;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
                result[0] += 0.6153846153846154;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.07692307692307693;
                result[5] += 0.3076923076923077;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9259259259259259;
                result[3] += 0.07407407407407407;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
                result[0] += 0.21739130434782608;
                result[1] += 0.08695652173913043;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6956521739130435;
                result[5] += 0;
              } else {
                result[0] += 0.96875;
                result[1] += 0;
                result[2] += 0.03125;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
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
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)60) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75) ) ) {
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85) ) ) {
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92.5) ) ) {
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0625;
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0.10416666666666667;
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0.09090909090909091;
                result[2] += 0.18181818181818182;
                result[3] += 0.45454545454545453;
                result[4] += 0;
                result[5] += 0.2727272727272727;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9090909090909091;
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)116.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
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
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84.5) ) ) {
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
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)103.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)64.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9018691588785047;
                result[3] += 0.0794392523364486;
                result[4] += 0;
                result[5] += 0.018691588785046728;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3157894736842105;
                result[3] += 0.6842105263157895;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.775;
                result[3] += 0.175;
                result[4] += 0;
                result[5] += 0.05;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)94) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)109) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)94) ) ) {
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
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)71.5) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
                result[0] += 0.03614457831325301;
                result[1] += 0;
                result[2] += 0.8433734939759037;
                result[3] += 0.10843373493975904;
                result[4] += 0;
                result[5] += 0.012048192771084338;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9883495145631068;
                result[3] += 0.011650485436893204;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)64.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)112) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)56.5) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)63) ) ) {
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
                result[4] += 0.6923076923076923;
                result[5] += 0.3076923076923077;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)64) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)79.5) ) ) {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8;
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.012987012987012988;
                result[4] += 0.00487012987012987;
                result[5] += 0.9821428571428571;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0.1;
                result[4] += 0.4;
                result[5] += 0.4;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
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
                result[3] += 0.6;
                result[4] += 0;
                result[5] += 0.4;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)45) ) ) {
                result[0] += 0;
                result[1] += 0.9166666666666666;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.08333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0.010526315789473684;
                result[2] += 0;
                result[3] += 0.11578947368421053;
                result[4] += 0.11578947368421053;
                result[5] += 0.7578947368421053;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0.005025125628140704;
                result[2] += 0;
                result[3] += 0.6130653266331658;
                result[4] += 0;
                result[5] += 0.38190954773869346;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.39473684210526316;
                result[3] += 0.02631578947368421;
                result[4] += 0.07894736842105263;
                result[5] += 0.5;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)91) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)108) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)111) ) ) {
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
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)54.5) ) ) {
                result[0] += 0.07692307692307693;
                result[1] += 0.5384615384615384;
                result[2] += 0.11538461538461539;
                result[3] += 0.038461538461538464;
                result[4] += 0.15384615384615385;
                result[5] += 0.07692307692307693;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0.9;
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
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.42857142857142855;
                result[5] += 0.5714285714285714;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9166666666666666;
                result[4] += 0.08333333333333333;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)99) ) ) {
                result[0] += 0.1956521739130435;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08695652173913043;
                result[4] += 0.5434782608695652;
                result[5] += 0.17391304347826086;
              } else {
                result[0] += 0.2727272727272727;
                result[1] += 0.7272727272727273;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
                result[0] += 0.7532051282051282;
                result[1] += 0.009615384615384616;
                result[2] += 0;
                result[3] += 0.04807692307692308;
                result[4] += 0.11217948717948718;
                result[5] += 0.07692307692307693;
              } else {
                result[0] += 0.9678899082568807;
                result[1] += 0;
                result[2] += 0.0022935779816513763;
                result[3] += 0.006880733944954129;
                result[4] += 0.0194954128440367;
                result[5] += 0.0034403669724770644;
              }
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.21875;
                result[4] += 0;
                result[5] += 0.78125;
              } else {
                result[0] += 0.1139240506329114;
                result[1] += 0;
                result[2] += 0.17721518987341775;
                result[3] += 0.5569620253164558;
                result[4] += 0.012658227848101267;
                result[5] += 0.13924050632911394;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
                result[0] += 0.4444444444444444;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0;
                result[4] += 0.4444444444444444;
                result[5] += 0;
              } else {
                result[0] += 0.9420289855072465;
                result[1] += 0;
                result[2] += 0.04347826086956522;
                result[3] += 0;
                result[4] += 0.014492753623188408;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.18181818181818182;
                result[3] += 0.5454545454545454;
                result[4] += 0.2727272727272727;
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
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06451612903225806;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.9354838709677419;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06666666666666667;
                result[4] += 0;
                result[5] += 0.9333333333333333;
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0.4;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6;
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
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
                result[0] += 0.008695652173913044;
                result[1] += 0;
                result[2] += 0.043478260869565216;
                result[3] += 0.9130434782608695;
                result[4] += 0;
                result[5] += 0.034782608695652174;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.55;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.25;
              }
            }
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
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
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106) ) ) {
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8888888888888888;
              } else {
                result[0] += 0.09090909090909091;
                result[1] += 0;
                result[2] += 0.2727272727272727;
                result[3] += 0.5454545454545454;
                result[4] += 0;
                result[5] += 0.09090909090909091;
              }
            }
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8;
              } else {
                result[0] += 0.015151515151515152;
                result[1] += 0;
                result[2] += 0.6818181818181818;
                result[3] += 0.24242424242424243;
                result[4] += 0;
                result[5] += 0.06060606060606061;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
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
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5555555555555556;
                result[3] += 0.2777777777777778;
                result[4] += 0;
                result[5] += 0.16666666666666666;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)81.5) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)121) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)105) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
                result[0] += 0.015544041450777202;
                result[1] += 0;
                result[2] += 0.8082901554404145;
                result[3] += 0.17098445595854922;
                result[4] += 0;
                result[5] += 0.0051813471502590676;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5789473684210527;
                result[3] += 0.42105263157894735;
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
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)113.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8125;
                result[3] += 0.1875;
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
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9726027397260274;
                result[3] += 0.0273972602739726;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.21428571428571427;
                result[1] += 0;
                result[2] += 0.7857142857142857;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)108.5) ) ) {
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
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.95;
                result[3] += 0.05;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.997624703087886;
                result[3] += 0.0023752969121140144;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)39.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65.5) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)46.5) ) ) {
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
                result[4] += 0.96875;
                result[5] += 0.03125;
              }
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)57) ) ) {
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)56) ) ) {
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
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)92) ) ) {
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
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)64.5) ) ) {
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
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)71.5) ) ) {
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
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0187207488299532;
                result[4] += 0.0078003120124804995;
                result[5] += 0.9734789391575663;
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.03669724770642202;
                result[2] += 0.0061162079510703364;
                result[3] += 0.1559633027522936;
                result[4] += 0.12844036697247707;
                result[5] += 0.672782874617737;
              } else {
                result[0] += 0.05128205128205128;
                result[1] += 0.23076923076923078;
                result[2] += 0.46153846153846156;
                result[3] += 0.10256410256410256;
                result[4] += 0;
                result[5] += 0.15384615384615385;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.14705882352941177;
                result[2] += 0;
                result[3] += 0.11764705882352941;
                result[4] += 0.14705882352941177;
                result[5] += 0.5882352941176471;
              } else {
                result[0] += 0.005681818181818182;
                result[1] += 0;
                result[2] += 0.056818181818181816;
                result[3] += 0.6875;
                result[4] += 0.011363636363636364;
                result[5] += 0.23863636363636365;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)42.5) ) ) {
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
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)55.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)59) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.875;
                result[5] += 0.125;
              } else {
                result[0] += 0.92;
                result[1] += 0.04;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.04;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.7142857142857143;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0.14285714285714285;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5416666666666666;
                result[5] += 0.4583333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06;
                result[4] += 0.94;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6;
                result[4] += 0;
                result[5] += 0.4;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69) ) ) {
                result[0] += 0.025;
                result[1] += 0.025;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.85;
                result[5] += 0.1;
              } else {
                result[0] += 0.55;
                result[1] += 0.03333333333333333;
                result[2] += 0;
                result[3] += 0.016666666666666666;
                result[4] += 0.2833333333333333;
                result[5] += 0.11666666666666667;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
                result[0] += 0.4166666666666667;
                result[1] += 0.041666666666666664;
                result[2] += 0;
                result[3] += 0.2708333333333333;
                result[4] += 0.0625;
                result[5] += 0.20833333333333334;
              } else {
                result[0] += 0.9766206163655686;
                result[1] += 0;
                result[2] += 0.0031880977683315624;
                result[3] += 0.0021253985122210418;
                result[4] += 0.018065887353878856;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
                result[0] += 0.045454545454545456;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0.5113636363636364;
                result[4] += 0.03409090909090909;
                result[5] += 0.2840909090909091;
              } else {
                result[0] += 0.05555555555555555;
                result[1] += 0;
                result[2] += 0.8888888888888888;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.05555555555555555;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.625;
                result[3] += 0;
                result[4] += 0.125;
                result[5] += 0.25;
              } else {
                result[0] += 0.768421052631579;
                result[1] += 0;
                result[2] += 0.052631578947368425;
                result[3] += 0;
                result[4] += 0.17894736842105266;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)64) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)79) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)76) ) ) {
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
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0.8;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0.75;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.10526315789473684;
                result[3] += 0.8195488721804511;
                result[4] += 0;
                result[5] += 0.07518796992481203;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.7777777777777778;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.2222222222222222;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0;
                result[4] += 0.9;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7777777777777778;
                result[4] += 0;
                result[5] += 0.2222222222222222;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.2;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.010526315789473684;
                result[1] += 0;
                result[2] += 0.7894736842105263;
                result[3] += 0.10526315789473684;
                result[4] += 0;
                result[5] += 0.09473684210526316;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4444444444444444;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5555555555555556;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.29411764705882354;
                result[3] += 0.5588235294117647;
                result[4] += 0;
                result[5] += 0.14705882352941177;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9666666666666667;
                result[3] += 0.03333333333333333;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6071428571428571;
                result[3] += 0.39285714285714285;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)118.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.847457627118644;
                result[3] += 0.15254237288135594;
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
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)111.5) ) ) {
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
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)111.5) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)81) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
                result[0] += 0.021126760563380285;
                result[1] += 0;
                result[2] += 0.8661971830985916;
                result[3] += 0.10563380281690142;
                result[4] += 0;
                result[5] += 0.007042253521126762;
              } else {
                result[0] += 0.00411522633744856;
                result[1] += 0;
                result[2] += 0.9814814814814815;
                result[3] += 0.01440329218106996;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)68) ) ) {
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
                result[4] += 0.75;
                result[5] += 0.25;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.04;
                result[3] += 0;
                result[4] += 0.8;
                result[5] += 0.16;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)51) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)55.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)77) ) ) {
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
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.009216589861751152;
                result[4] += 0.007680491551459293;
                result[5] += 0.9831029185867896;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5714285714285714;
                result[5] += 0.42857142857142855;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08695652173913043;
                result[4] += 0.08695652173913043;
                result[5] += 0.8260869565217391;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.05;
                result[4] += 0.65;
                result[5] += 0.3;
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)57) ) ) {
                result[0] += 0.8636363636363636;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.13636363636363635;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.5357142857142857;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0.25;
                result[5] += 0.07142857142857142;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0.03278688524590164;
                result[2] += 0.01639344262295082;
                result[3] += 0.45901639344262296;
                result[4] += 0.040983606557377046;
                result[5] += 0.45081967213114754;
              } else {
                result[0] += 0.028037383177570093;
                result[1] += 0;
                result[2] += 0.037383177570093455;
                result[3] += 0.8411214953271028;
                result[4] += 0.018691588785046728;
                result[5] += 0.07476635514018691;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)101) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)92) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)44) ) ) {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0.01020408163265306;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9897959183673469;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
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
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)94) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
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
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)57.5) ) ) {
                result[0] += 0.8695652173913043;
                result[1] += 0.08695652173913043;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.043478260869565216;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1590909090909091;
                result[4] += 0.4318181818181818;
                result[5] += 0.4090909090909091;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
                result[0] += 0.19047619047619047;
                result[1] += 0.09523809523809523;
                result[2] += 0;
                result[3] += 0.047619047619047616;
                result[4] += 0.6666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0.9354187689202825;
                result[1] += 0.006054490413723511;
                result[2] += 0;
                result[3] += 0.006054490413723511;
                result[4] += 0.04742684157416751;
                result[5] += 0.005045408678102927;
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)108.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0.06666666666666667;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8666666666666667;
                result[5] += 0.06666666666666667;
              } else {
                result[0] += 0.05194805194805195;
                result[1] += 0.025974025974025976;
                result[2] += 0.16883116883116883;
                result[3] += 0.1038961038961039;
                result[4] += 0.2077922077922078;
                result[5] += 0.44155844155844154;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)101) ) ) {
                result[0] += 0.08333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9166666666666666;
                result[5] += 0;
              } else {
                result[0] += 0.9473684210526315;
                result[1] += 0;
                result[2] += 0.05263157894736842;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.030927835051546393;
                result[3] += 0.5051546391752577;
                result[4] += 0;
                result[5] += 0.4639175257731959;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
                result[0] += 0.16326530612244897;
                result[1] += 0.02040816326530612;
                result[2] += 0.061224489795918366;
                result[3] += 0.5510204081632653;
                result[4] += 0;
                result[5] += 0.20408163265306123;
              } else {
                result[0] += 0.045871559633027525;
                result[1] += 0.11009174311926606;
                result[2] += 0.5779816513761468;
                result[3] += 0.1559633027522936;
                result[4] += 0;
                result[5] += 0.11009174311926606;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)94) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16666666666666666;
                result[4] += 0.16666666666666666;
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8571428571428571;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0.9180327868852459;
                result[1] += 0.03278688524590164;
                result[2] += 0;
                result[3] += 0.01639344262295082;
                result[4] += 0.03278688524590164;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
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
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
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
                result[3] += 0.07142857142857142;
                result[4] += 0;
                result[5] += 0.9285714285714286;
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8461538461538461;
                result[4] += 0;
                result[5] += 0.15384615384615385;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.36363636363636365;
                result[3] += 0.6363636363636364;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.7777777777777778;
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
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82) ) ) {
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
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)52.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0.06666666666666667;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.9333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7857142857142857;
                result[4] += 0.07142857142857142;
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
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)96) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)124) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8932038834951457;
                result[3] += 0.08737864077669903;
                result[4] += 0;
                result[5] += 0.019417475728155338;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99.5) ) ) {
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
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0.8888888888888888;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.08333333333333333;
                result[1] += 0;
                result[2] += 0.9166666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)85) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.6666666666666666;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8502415458937199;
                result[3] += 0.1352657004830918;
                result[4] += 0;
                result[5] += 0.014492753623188408;
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)108.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
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
              result[2] += 1;
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)105) ) ) {
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
                result[3] += 0.45;
                result[4] += 0;
                result[5] += 0.05;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9772727272727273;
                result[3] += 0.022727272727272728;
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)68.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.003616636528028933;
                result[1] += 0;
                result[2] += 0.972875226039783;
                result[3] += 0.023508137432188065;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)77) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)76.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.08333333333333333;
                result[5] += 0.9166666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0.6666666666666666;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.6666666666666666;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)74) ) ) {
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
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)73.5) ) ) {
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
                result[0] += 0.018867924528301886;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7547169811320755;
                result[5] += 0.22641509433962265;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1724137931034483;
                result[5] += 0.8275862068965517;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.75;
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
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0.25;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.006932409012131715;
                result[4] += 0.0034662045060658577;
                result[5] += 0.9896013864818024;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.25;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.19230769230769232;
                result[4] += 0;
                result[5] += 0.8076923076923077;
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
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
                result[4] += 0.5555555555555556;
                result[5] += 0.2222222222222222;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.009523809523809525;
                result[3] += 0.05714285714285714;
                result[4] += 0;
                result[5] += 0.9333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.006944444444444444;
                result[3] += 0.1736111111111111;
                result[4] += 0.10416666666666667;
                result[5] += 0.7152777777777778;
              }
            }
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)54.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73.5) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)57) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.02631578947368421;
                result[4] += 0;
                result[5] += 0.9736842105263158;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.04;
                result[3] += 0.28;
                result[4] += 0;
                result[5] += 0.68;
              }
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3181818181818182;
                result[4] += 0.045454545454545456;
                result[5] += 0.6363636363636364;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75) ) ) {
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
                result[3] += 0.275;
                result[4] += 0;
                result[5] += 0.725;
              }
            }
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0.008771929824561403;
                result[2] += 0;
                result[3] += 0.956140350877193;
                result[4] += 0;
                result[5] += 0.03508771929824561;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05263157894736842;
                result[3] += 0.3684210526315789;
                result[4] += 0;
                result[5] += 0.5789473684210527;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)44) ) ) {
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
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)66) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0.4666666666666667;
                result[4] += 0.2;
                result[5] += 0.13333333333333333;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.08333333333333333;
                result[3] += 0.16666666666666666;
                result[4] += 0.25;
                result[5] += 0.5;
              } else {
                result[0] += 0.0273972602739726;
                result[1] += 0.0136986301369863;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.958904109589041;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)68.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1904761904761905;
                result[3] += 0.2380952380952381;
                result[4] += 0.09523809523809525;
                result[5] += 0.4761904761904762;
              } else {
                result[0] += 0.16666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3888888888888889;
                result[4] += 0.3888888888888889;
                result[5] += 0.05555555555555555;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)42.5) ) ) {
                result[0] += 0;
                result[1] += 0.8571428571428571;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0;
              } else {
                result[0] += 0.9349904397705545;
                result[1] += 0.0028680688336520078;
                result[2] += 0.0028680688336520078;
                result[3] += 0.0076481835564053535;
                result[4] += 0.04397705544933078;
                result[5] += 0.0076481835564053535;
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.027777777777777776;
                result[3] += 0.1388888888888889;
                result[4] += 0;
                result[5] += 0.8333333333333334;
              } else {
                result[0] += 0.02666666666666667;
                result[1] += 0.013333333333333334;
                result[2] += 0.14666666666666667;
                result[3] += 0.5733333333333334;
                result[4] += 0;
                result[5] += 0.24;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0.2222222222222222;
                result[4] += 0.4222222222222222;
                result[5] += 0.13333333333333333;
              } else {
                result[0] += 0.8547008547008547;
                result[1] += 0;
                result[2] += 0.11965811965811966;
                result[3] += 0;
                result[4] += 0.02564102564102564;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
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
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0.08333333333333333;
                result[2] += 0;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0.75;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16216216216216217;
                result[3] += 0.7162162162162162;
                result[4] += 0;
                result[5] += 0.12162162162162163;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
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
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.2;
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9354838709677419;
                result[3] += 0.06451612903225806;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)109) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4444444444444444;
                result[3] += 0.2222222222222222;
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
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)112) ) ) {
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
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.65;
                result[4] += 0;
                result[5] += 0.15;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5952380952380952;
                result[3] += 0.34523809523809523;
                result[4] += 0;
                result[5] += 0.05952380952380952;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)78) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.027888446215139442;
                result[1] += 0;
                result[2] += 0.848605577689243;
                result[3] += 0.10358565737051793;
                result[4] += 0.01593625498007968;
                result[5] += 0.00398406374501992;
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
                result[0] += 0.024691358024691357;
                result[1] += 0;
                result[2] += 0.8765432098765432;
                result[3] += 0.09876543209876543;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9840637450199203;
                result[3] += 0.013944223107569721;
                result[4] += 0;
                result[5] += 0.00199203187250996;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)51) ) ) {
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
                result[4] += 0.8387096774193549;
                result[5] += 0.16129032258064516;
              }
            }
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)70) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
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
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)97) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)103) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)80) ) ) {
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
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.015151515151515152;
                result[4] += 0.019696969696969695;
                result[5] += 0.9651515151515152;
              } else {
                result[0] += 0.005780346820809248;
                result[1] += 0.023121387283236993;
                result[2] += 0;
                result[3] += 0.1676300578034682;
                result[4] += 0.09826589595375723;
                result[5] += 0.7052023121387283;
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)66) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)78.5) ) ) {
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
                result[3] += 0.0625;
                result[4] += 0.9375;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)63) ) ) {
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
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6363636363636364;
                result[5] += 0.36363636363636365;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0547945205479452;
                result[4] += 0;
                result[5] += 0.9452054794520548;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
                result[0] += 0.017391304347826087;
                result[1] += 0.017391304347826087;
                result[2] += 0;
                result[3] += 0.40869565217391307;
                result[4] += 0.02608695652173913;
                result[5] += 0.5304347826086957;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.005494505494505495;
                result[3] += 0.8076923076923077;
                result[4] += 0.005494505494505495;
                result[5] += 0.1813186813186813;
              }
            }
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)105.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101) ) ) {
                result[0] += 0.18181818181818182;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.045454545454545456;
                result[4] += 0.7272727272727273;
                result[5] += 0.045454545454545456;
              } else {
                result[0] += 0;
                result[1] += 0.6666666666666666;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68.5) ) ) {
                result[0] += 0.41304347826086957;
                result[1] += 0.06521739130434782;
                result[2] += 0;
                result[3] += 0.08695652173913043;
                result[4] += 0.43478260869565216;
                result[5] += 0;
              } else {
                result[0] += 0.9168260038240919;
                result[1] += 0.0019120458891013386;
                result[2] += 0;
                result[3] += 0.02772466539196941;
                result[4] += 0.03632887189292544;
                result[5] += 0.01720841300191205;
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07142857142857144;
                result[3] += 0.10714285714285715;
                result[4] += 0.7142857142857144;
                result[5] += 0.10714285714285715;
              } else {
                result[0] += 0.015384615384615385;
                result[1] += 0.010256410256410256;
                result[2] += 0.13333333333333333;
                result[3] += 0.4564102564102564;
                result[4] += 0.035897435897435895;
                result[5] += 0.3487179487179487;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.375;
                result[4] += 0.375;
                result[5] += 0;
              } else {
                result[0] += 0.05737704918032788;
                result[1] += 0;
                result[2] += 0.7622950819672132;
                result[3] += 0.0737704918032787;
                result[4] += 0.04098360655737705;
                result[5] += 0.0655737704918033;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)112.5) ) ) {
                result[0] += 0.8;
                result[1] += 0.1;
                result[2] += 0;
                result[3] += 0.1;
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9821428571428571;
                result[1] += 0;
                result[2] += 0.017857142857142856;
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)58) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)76) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)90) ) ) {
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
                result[4] += 0;
                result[5] += 0.5;
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86) ) ) {
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
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101) ) ) {
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
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.10526315789473684;
                result[3] += 0.05263157894736842;
                result[4] += 0;
                result[5] += 0.8421052631578947;
              } else {
                result[0] += 0.0625;
                result[1] += 0;
                result[2] += 0.3125;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.125;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)123) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0.075;
                result[4] += 0;
                result[5] += 0.175;
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)99) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)94) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)113) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.65625;
                result[3] += 0.34375;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.006172839506172839;
                result[1] += 0;
                result[2] += 0.9012345679012346;
                result[3] += 0.09259259259259259;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
                result[0] += 0.011111111111111112;
                result[1] += 0;
                result[2] += 0.8944444444444445;
                result[3] += 0.09444444444444444;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0044943820224719105;
                result[1] += 0;
                result[2] += 0.9820224719101124;
                result[3] += 0.01348314606741573;
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
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)101) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
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
                result[4] += 0.9411764705882353;
                result[5] += 0.058823529411764705;
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
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)80.5) ) ) {
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)63.5) ) ) {
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
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5000000000000001;
                result[4] += 0.33333333333333337;
                result[5] += 0.16666666666666669;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.013440860215053764;
                result[4] += 0.012096774193548387;
                result[5] += 0.9744623655913979;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0.02127659574468085;
                result[2] += 0;
                result[3] += 0.0851063829787234;
                result[4] += 0;
                result[5] += 0.8936170212765957;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05084745762711865;
                result[3] += 0.5254237288135594;
                result[4] += 0;
                result[5] += 0.423728813559322;
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)54) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6153846153846154;
                result[5] += 0.05128205128205128;
              } else {
                result[0] += 0.021621621621621623;
                result[1] += 0.021621621621621623;
                result[2] += 0.03783783783783784;
                result[3] += 0.14054054054054055;
                result[4] += 0.08108108108108109;
                result[5] += 0.6972972972972973;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
                result[0] += 0.027777777777777776;
                result[1] += 0.027777777777777776;
                result[2] += 0.06944444444444445;
                result[3] += 0.3472222222222222;
                result[4] += 0;
                result[5] += 0.5277777777777778;
              } else {
                result[0] += 0.010101010101010102;
                result[1] += 0;
                result[2] += 0.0707070707070707;
                result[3] += 0.8686868686868687;
                result[4] += 0;
                result[5] += 0.050505050505050504;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)47) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87) ) ) {
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
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)107.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
                result[0] += 0.043478260869565216;
                result[1] += 0.13043478260869565;
                result[2] += 0;
                result[3] += 0.08695652173913043;
                result[4] += 0.7391304347826086;
                result[5] += 0;
              } else {
                result[0] += 0.6666666666666667;
                result[1] += 0.04761904761904763;
                result[2] += 0;
                result[3] += 0.14285714285714288;
                result[4] += 0.14285714285714288;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
                result[0] += 0.010638297872340427;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9787234042553192;
                result[5] += 0.010638297872340427;
              } else {
                result[0] += 0;
                result[1] += 0.23076923076923078;
                result[2] += 0.07692307692307693;
                result[3] += 0.3076923076923077;
                result[4] += 0.3076923076923077;
                result[5] += 0.07692307692307693;
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1111111111111111;
                result[4] += 0.08888888888888889;
                result[5] += 0.8;
              } else {
                result[0] += 0.3;
                result[1] += 0.25;
                result[2] += 0.075;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0.125;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
                result[0] += 0.9259962049335864;
                result[1] += 0.006641366223908918;
                result[2] += 0;
                result[3] += 0.017077798861480076;
                result[4] += 0.04364326375711575;
                result[5] += 0.006641366223908918;
              } else {
                result[0] += 0.5057471264367817;
                result[1] += 0.011494252873563218;
                result[2] += 0.04597701149425287;
                result[3] += 0.20689655172413793;
                result[4] += 0.16091954022988506;
                result[5] += 0.06896551724137931;
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)107) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
                result[0] += 0.030303030303030304;
                result[1] += 0.007575757575757576;
                result[2] += 0.007575757575757576;
                result[3] += 0.44696969696969696;
                result[4] += 0.06818181818181818;
                result[5] += 0.4393939393939394;
              } else {
                result[0] += 0.05660377358490566;
                result[1] += 0;
                result[2] += 0.4716981132075472;
                result[3] += 0.37735849056603776;
                result[4] += 0;
                result[5] += 0.09433962264150944;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97) ) ) {
                result[0] += 0.15384615384615385;
                result[1] += 0;
                result[2] += 0.11538461538461539;
                result[3] += 0.038461538461538464;
                result[4] += 0.5769230769230769;
                result[5] += 0.11538461538461539;
              } else {
                result[0] += 0.6237623762376238;
                result[1] += 0;
                result[2] += 0.3069306930693069;
                result[3] += 0.009900990099009901;
                result[4] += 0.009900990099009901;
                result[5] += 0.04950495049504951;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64.5) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)62) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
                result[0] += 0.25;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.625;
                result[4] += 0;
                result[5] += 0.125;
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
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
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
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05660377358490566;
                result[3] += 0.8867924528301887;
                result[4] += 0;
                result[5] += 0.05660377358490566;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5000000000000001;
                result[3] += 0.33333333333333337;
                result[4] += 0;
                result[5] += 0.16666666666666669;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)109) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7333333333333333;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.06666666666666667;
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
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
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.47368421052631576;
                result[3] += 0.4473684210526316;
                result[4] += 0;
                result[5] += 0.07894736842105263;
              }
            }
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)105) ) ) {
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)80) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)81) ) ) {
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
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)119.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7272727272727273;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.2727272727272727;
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
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6904761904761905;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.05952380952380952;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9123505976095617;
                result[3] += 0.08764940239043825;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)116.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.95;
                result[3] += 0.05;
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9701492537313433;
                result[3] += 0.029850746268656716;
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98) ) ) {
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)57.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.33333333333333337;
                result[4] += 0.5000000000000001;
                result[5] += 0.16666666666666669;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0.8571428571428571;
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.02046783625730994;
                result[4] += 0.013157894736842105;
                result[5] += 0.966374269005848;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2857142857142857;
                result[3] += 0;
                result[4] += 0.7142857142857143;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)66) ) ) {
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
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59) ) ) {
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)54) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0.9761904761904762;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.023809523809523808;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.06557377049180328;
                result[1] += 0.01639344262295082;
                result[2] += 0;
                result[3] += 0.01639344262295082;
                result[4] += 0.6065573770491803;
                result[5] += 0.29508196721311475;
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08108108108108109;
                result[4] += 0.02027027027027027;
                result[5] += 0.8986486486486487;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
                result[0] += 0.05263157894736842;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.15789473684210525;
                result[4] += 0.03508771929824561;
                result[5] += 0.7543859649122807;
              } else {
                result[0] += 0.07142857142857142;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6071428571428571;
                result[4] += 0.05357142857142857;
                result[5] += 0.26785714285714285;
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.09090909090909091;
                result[3] += 0.8181818181818182;
                result[4] += 0;
                result[5] += 0.09090909090909091;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.09090909090909091;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.9090909090909091;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.925531914893617;
                result[4] += 0;
                result[5] += 0.07446808510638298;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)50) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)57.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0.8888888888888888;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1111111111111111;
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
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104) ) ) {
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
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)55.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100) ) ) {
                result[0] += 0.3225806451612903;
                result[1] += 0.03225806451612903;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6451612903225806;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.7741935483870968;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.22580645161290322;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
                result[0] += 0.6666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
                result[0] += 0.42105263157894735;
                result[1] += 0.10526315789473684;
                result[2] += 0;
                result[3] += 0.10526315789473684;
                result[4] += 0.18421052631578946;
                result[5] += 0.18421052631578946;
              } else {
                result[0] += 0.9420289855072465;
                result[1] += 0.006763285024154591;
                result[2] += 0;
                result[3] += 0.014492753623188408;
                result[4] += 0.03381642512077295;
                result[5] += 0.0028985507246376816;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)103.5) ) ) {
                result[0] += 0.05084745762711865;
                result[1] += 0.1016949152542373;
                result[2] += 0.03389830508474576;
                result[3] += 0.3559322033898305;
                result[4] += 0.2711864406779661;
                result[5] += 0.1864406779661017;
              } else {
                result[0] += 0.8958333333333334;
                result[1] += 0;
                result[2] += 0.041666666666666664;
                result[3] += 0;
                result[4] += 0.0625;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
                result[0] += 0.032;
                result[1] += 0.008;
                result[2] += 0.048;
                result[3] += 0.416;
                result[4] += 0.032;
                result[5] += 0.464;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7391304347826088;
                result[3] += 0.04347826086956522;
                result[4] += 0;
                result[5] += 0.2173913043478261;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85) ) ) {
                result[0] += 0.7654320987654322;
                result[1] += 0.04938271604938272;
                result[2] += 0.0617283950617284;
                result[3] += 0.04938271604938272;
                result[4] += 0.07407407407407408;
                result[5] += 0;
              } else {
                result[0] += 0.3235294117647059;
                result[1] += 0;
                result[2] += 0.6764705882352942;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)110.5) ) ) {
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0.016129032258064516;
                result[2] += 0.016129032258064516;
                result[3] += 0;
                result[4] += 0.06451612903225806;
                result[5] += 0.9032258064516129;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.043478260869565216;
                result[3] += 0.30434782608695654;
                result[4] += 0;
                result[5] += 0.6521739130434783;
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78) ) ) {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9508196721311475;
                result[4] += 0;
                result[5] += 0.04918032786885246;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.4166666666666667;
                result[4] += 0;
                result[5] += 0.25;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102) ) ) {
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
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0.014925373134328358;
                result[2] += 0.29850746268656714;
                result[3] += 0.6268656716417911;
                result[4] += 0;
                result[5] += 0.05970149253731343;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6923076923076923;
                result[3] += 0.15384615384615385;
                result[4] += 0;
                result[5] += 0.15384615384615385;
              }
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)116.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2727272727272727;
                result[4] += 0;
                result[5] += 0.7272727272727273;
              } else {
                result[0] += 0.42857142857142855;
                result[1] += 0;
                result[2] += 0.42857142857142855;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5526315789473685;
                result[3] += 0.39473684210526316;
                result[4] += 0;
                result[5] += 0.05263157894736842;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.98;
                result[3] += 0.02;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79) ) ) {
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
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)106.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
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
                result[3] += 0.9444444444444444;
                result[4] += 0;
                result[5] += 0.05555555555555555;
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)100.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)91.5) ) ) {
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
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0.25;
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
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)83.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7346938775510204;
                result[3] += 0.2653061224489796;
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
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8691588785046729;
                result[3] += 0.12149532710280374;
                result[4] += 0;
                result[5] += 0.009345794392523364;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9747634069400631;
                result[3] += 0.025236593059936908;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)108.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107) ) ) {
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)28.5) ) ) {
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)71.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)80.5) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)51) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83.5) ) ) {
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
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)56.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6363636363636364;
                result[5] += 0.36363636363636365;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9696969696969697;
                result[5] += 0.030303030303030304;
              }
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0625;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0.1875;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)81.5) ) ) {
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
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)54.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0015503875968992248;
                result[3] += 0.015503875968992248;
                result[4] += 0.0031007751937984496;
                result[5] += 0.9798449612403101;
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)79) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)83.5) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)54.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)51.5) ) ) {
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
                result[3] += 0.038461538461538464;
                result[4] += 0.9615384615384616;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08695652173913043;
                result[4] += 0.30434782608695654;
                result[5] += 0.6086956521739131;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07751937984496124;
                result[4] += 0.015503875968992248;
                result[5] += 0.9069767441860465;
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7567567567567568;
                result[4] += 0.018018018018018018;
                result[5] += 0.22522522522522523;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05555555555555555;
                result[3] += 0.1111111111111111;
                result[4] += 0.05555555555555555;
                result[5] += 0.7777777777777778;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)65) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.15384615384615385;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8461538461538461;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)48) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)69) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)98.5) ) ) {
                result[0] += 0.12142857142857144;
                result[1] += 0.014285714285714287;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7928571428571429;
                result[5] += 0.07142857142857144;
              } else {
                result[0] += 0;
                result[1] += 0.8387096774193549;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.12903225806451613;
                result[5] += 0.03225806451612903;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)63.5) ) ) {
                result[0] += 0.8940217391304348;
                result[1] += 0.010869565217391304;
                result[2] += 0;
                result[3] += 0.005434782608695652;
                result[4] += 0.07608695652173914;
                result[5] += 0.01358695652173913;
              } else {
                result[0] += 0.4166666666666667;
                result[1] += 0.06666666666666667;
                result[2] += 0.016666666666666666;
                result[3] += 0.125;
                result[4] += 0.2833333333333333;
                result[5] += 0.09166666666666666;
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0.2;
                result[5] += 0.7;
              } else {
                result[0] += 0.0106951871657754;
                result[1] += 0.08021390374331551;
                result[2] += 0.016042780748663103;
                result[3] += 0.5347593582887701;
                result[4] += 0.0962566844919786;
                result[5] += 0.2620320855614973;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
                result[0] += 0.38235294117647056;
                result[1] += 0;
                result[2] += 0.08823529411764706;
                result[3] += 0.08823529411764706;
                result[4] += 0.35294117647058826;
                result[5] += 0.08823529411764706;
              } else {
                result[0] += 0.0425531914893617;
                result[1] += 0;
                result[2] += 0.06382978723404255;
                result[3] += 0.02127659574468085;
                result[4] += 0.1276595744680851;
                result[5] += 0.7446808510638298;
              }
            }
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0;
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
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
                result[0] += 0.9857142857142858;
                result[1] += 0;
                result[2] += 0.002857142857142857;
                result[3] += 0.0014285714285714286;
                result[4] += 0.01;
                result[5] += 0;
              } else {
                result[0] += 0.375;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0.125;
                result[4] += 0.375;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)71) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.029411764705882353;
                result[3] += 0.20588235294117646;
                result[4] += 0.029411764705882353;
                result[5] += 0.7352941176470589;
              }
            }
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)116) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.026666666666666672;
                result[3] += 0.8933333333333334;
                result[4] += 0;
                result[5] += 0.08000000000000002;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.023809523809523808;
                result[3] += 0.5952380952380952;
                result[4] += 0;
                result[5] += 0.38095238095238093;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5098039215686275;
                result[3] += 0.3921568627450981;
                result[4] += 0;
                result[5] += 0.09803921568627452;
              }
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84) ) ) {
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
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)95) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0.75;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9090909090909091;
                result[3] += 0.025974025974025976;
                result[4] += 0;
                result[5] += 0.06493506493506493;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)88.5) ) ) {
                result[0] += 0.4000000000000001;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.30000000000000004;
                result[4] += 0.20000000000000004;
                result[5] += 0.10000000000000002;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74) ) ) {
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
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0.06666666666666667;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
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
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7894736842105263;
                result[3] += 0.21052631578947367;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)127.5) ) ) {
                result[0] += 0.01617250673854448;
                result[1] += 0;
                result[2] += 0.8409703504043128;
                result[3] += 0.1266846361185984;
                result[4] += 0;
                result[5] += 0.01617250673854448;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
                result[0] += 0.02247191011235955;
                result[1] += 0;
                result[2] += 0.8202247191011236;
                result[3] += 0.15730337078651685;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0022123893805309734;
                result[1] += 0;
                result[2] += 0.9756637168141593;
                result[3] += 0.022123893805309734;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)105.5) ) ) {
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
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)45) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)67) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
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
                result[4] += 0.88;
                result[5] += 0.12;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)74) ) ) {
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
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0967741935483871;
                result[3] += 0;
                result[4] += 0.0967741935483871;
                result[5] += 0.8064516129032258;
              } else {
                result[0] += 0.045454545454545456;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5454545454545454;
                result[5] += 0.4090909090909091;
              }
            }
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62) ) ) {
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
                result[4] += 0.6;
                result[5] += 0.4;
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)82.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.005639097744360902;
                result[4] += 0.015037593984962405;
                result[5] += 0.9793233082706767;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.058823529411764705;
                result[4] += 0.17647058823529413;
                result[5] += 0.7647058823529411;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.631578947368421;
                result[5] += 0.3684210526315789;
              } else {
                result[0] += 0;
                result[1] += 0.004048582995951417;
                result[2] += 0;
                result[3] += 0.12550607287449392;
                result[4] += 0.05263157894736842;
                result[5] += 0.8178137651821862;
              }
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)76) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0.02564102564102564;
                result[2] += 0.02564102564102564;
                result[3] += 0.02564102564102564;
                result[4] += 0.05128205128205128;
                result[5] += 0.8717948717948718;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16666666666666666;
                result[4] += 0.027777777777777776;
                result[5] += 0.8055555555555556;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5277777777777778;
                result[4] += 0.08333333333333333;
                result[5] += 0.3888888888888889;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)83) ) ) {
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
                result[3] += 0.8294573643410853;
                result[4] += 0;
                result[5] += 0.17054263565891473;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0;
                result[4] += 0.7;
                result[5] += 0.2;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)46.5) ) ) {
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
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)50) ) ) {
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
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)49) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)51.5) ) ) {
                result[0] += 0.5833333333333334;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4166666666666667;
                result[5] += 0;
              } else {
                result[0] += 0.028169014084507043;
                result[1] += 0.04225352112676056;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9295774647887324;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
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
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
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
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0.06666666666666667;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9333333333333333;
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
                result[0] += 0.2564102564102564;
                result[1] += 0.23076923076923078;
                result[2] += 0;
                result[3] += 0.1282051282051282;
                result[4] += 0.23076923076923078;
                result[5] += 0.15384615384615385;
              } else {
                result[0] += 0.9130434782608696;
                result[1] += 0.0028355387523629496;
                result[2] += 0.008506616257088848;
                result[3] += 0.02079395085066163;
                result[4] += 0.04536862003780719;
                result[5] += 0.009451795841209832;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0872093023255814;
                result[3] += 0.5290697674418605;
                result[4] += 0;
                result[5] += 0.38372093023255816;
              } else {
                result[0] += 0.09859154929577464;
                result[1] += 0.014084507042253521;
                result[2] += 0.6619718309859155;
                result[3] += 0.15492957746478872;
                result[4] += 0;
                result[5] += 0.07042253521126761;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
                result[0] += 0.19402985074626866;
                result[1] += 0.05970149253731343;
                result[2] += 0.23880597014925373;
                result[3] += 0.08955223880597014;
                result[4] += 0.373134328358209;
                result[5] += 0.04477611940298507;
              } else {
                result[0] += 0.8163265306122449;
                result[1] += 0.02040816326530612;
                result[2] += 0.09183673469387756;
                result[3] += 0.01020408163265306;
                result[4] += 0;
                result[5] += 0.061224489795918366;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)58) ) ) {
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0.6666666666666666;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.3333333333333333;
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
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)114) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97) ) ) {
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
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64) ) ) {
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
                result[3] += 0.0625;
                result[4] += 0.03125;
                result[5] += 0.90625;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.08333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.9166666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9166666666666666;
                result[5] += 0.08333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0.1111111111111111;
                result[4] += 0.2222222222222222;
                result[5] += 0.4444444444444444;
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.42857142857142855;
                result[4] += 0;
                result[5] += 0.5714285714285714;
              } else {
                result[0] += 0;
                result[1] += 0.25;
                result[2] += 0.75;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0.041666666666666664;
                result[2] += 0.375;
                result[3] += 0.20833333333333334;
                result[4] += 0;
                result[5] += 0.375;
              } else {
                result[0] += 0.024390243902439025;
                result[1] += 0;
                result[2] += 0.9512195121951219;
                result[3] += 0.024390243902439025;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.04166666666666667;
                result[3] += 0.7916666666666667;
                result[4] += 0;
                result[5] += 0.16666666666666669;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5454545454545454;
                result[3] += 0.45454545454545453;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8301886792452831;
                result[3] += 0.16981132075471697;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8130841121495327;
                result[3] += 0.18691588785046728;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9363636363636364;
                result[3] += 0.06363636363636363;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)113) ) ) {
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)130.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9236111111111112;
                result[3] += 0.0763888888888889;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9875930521091811;
                result[3] += 0.01240694789081886;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)111.5) ) ) {
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
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)49.5) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)97.5) ) ) {
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
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
                result[0] += 0.4;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4;
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
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.995260663507109;
                result[5] += 0.004739336492890996;
              } else {
                result[0] += 0.109375;
                result[1] += 0.015625;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.875;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9375;
                result[5] += 0.0625;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2631578947368421;
                result[5] += 0.7368421052631579;
              }
            }
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)68.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)78) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.041666666666666664;
                result[5] += 0.9583333333333334;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)44.5) ) ) {
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)48.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.125;
                result[1] += 0.041666666666666664;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8333333333333334;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69.5) ) ) {
                result[0] += 0.965034965034965;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.03263403263403263;
                result[5] += 0.002331002331002331;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0.25;
              }
            }
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)68.5) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)50.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.005780346820809248;
                result[4] += 0.0038535645472061657;
                result[5] += 0.9903660886319846;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0755813953488372;
                result[4] += 0.05232558139534884;
                result[5] += 0.872093023255814;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.12121212121212122;
                result[4] += 0.45454545454545453;
                result[5] += 0.42424242424242425;
              } else {
                result[0] += 0;
                result[1] += 0.011764705882352941;
                result[2] += 0;
                result[3] += 0.058823529411764705;
                result[4] += 0.058823529411764705;
                result[5] += 0.8705882352941177;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
                result[0] += 0.04411764705882353;
                result[1] += 0.04411764705882353;
                result[2] += 0;
                result[3] += 0.4852941176470588;
                result[4] += 0.08823529411764706;
                result[5] += 0.3382352941176471;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.08695652173913043;
                result[3] += 0;
                result[4] += 0.043478260869565216;
                result[5] += 0.8695652173913043;
              }
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0.08035714285714286;
                result[2] += 0;
                result[3] += 0.07142857142857142;
                result[4] += 0.19642857142857142;
                result[5] += 0.6517857142857143;
              } else {
                result[0] += 0.22727272727272727;
                result[1] += 0.09090909090909091;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6818181818181818;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
                result[0] += 0.015625;
                result[1] += 0.0078125;
                result[2] += 0.0078125;
                result[3] += 0.3671875;
                result[4] += 0.0234375;
                result[5] += 0.578125;
              } else {
                result[0] += 0.0036231884057971015;
                result[1] += 0.014492753623188406;
                result[2] += 0.028985507246376812;
                result[3] += 0.6630434782608695;
                result[4] += 0;
                result[5] += 0.2898550724637681;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)78) ) ) {
                result[0] += 0.06451612903225806;
                result[1] += 0.12903225806451613;
                result[2] += 0.1774193548387097;
                result[3] += 0.04838709677419355;
                result[4] += 0.5161290322580645;
                result[5] += 0.06451612903225806;
              } else {
                result[0] += 0.6630434782608696;
                result[1] += 0;
                result[2] += 0.05434782608695653;
                result[3] += 0.06521739130434784;
                result[4] += 0.19565217391304351;
                result[5] += 0.02173913043478261;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.03333333333333333;
                result[4] += 0.2;
                result[5] += 0.7666666666666667;
              } else {
                result[0] += 0.047244094488188976;
                result[1] += 0.031496062992125984;
                result[2] += 0.30708661417322836;
                result[3] += 0.31496062992125984;
                result[4] += 0.1732283464566929;
                result[5] += 0.12598425196850394;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)108.5) ) ) {
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
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)70) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)100.5) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
                result[0] += 0.875;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9967479674796748;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.0032520325203252032;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)120.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)115.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6;
                result[3] += 0.4;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)114.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)82.5) ) ) {
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)95) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
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
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)90.5) ) ) {
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
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)104) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.163265306122449;
                result[3] += 0.6734693877551021;
                result[4] += 0;
                result[5] += 0.163265306122449;
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
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)124) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8620689655172414;
                result[3] += 0.10344827586206898;
                result[4] += 0.03448275862068966;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
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
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109.5) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)122) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)76.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.003125;
                result[1] += 0;
                result[2] += 0.853125;
                result[3] += 0.134375;
                result[4] += 0;
                result[5] += 0.009375;
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)90) ) ) {
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
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8648648648648649;
                result[3] += 0.13513513513513514;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0020876826722338203;
                result[1] += 0;
                result[2] += 0.9832985386221295;
                result[3] += 0.014613778705636743;
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)77) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1111111111111111;
                result[5] += 0.8888888888888888;
              } else {
                result[0] += 0.06896551724137931;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9310344827586207;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69) ) ) {
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
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7272727272727273;
                result[5] += 0.2727272727272727;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.01699346405228758;
                result[4] += 0.03529411764705882;
                result[5] += 0.9477124183006536;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)51.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.017543859649122806;
                result[1] += 0.008771929824561403;
                result[2] += 0;
                result[3] += 0.3508771929824561;
                result[4] += 0.05263157894736842;
                result[5] += 0.5701754385964912;
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0.25;
                result[5] += 0.25;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0.875;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.875;
                result[4] += 0.125;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3684210526315789;
                result[4] += 0;
                result[5] += 0.631578947368421;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.76;
                result[4] += 0;
                result[5] += 0.24;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.08196721311475409;
                result[3] += 0.36065573770491804;
                result[4] += 0;
                result[5] += 0.5573770491803278;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)82.5) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)49.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9487179487179487;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.05128205128205128;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
                result[0] += 0.6944444444444444;
                result[1] += 0.027777777777777776;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2777777777777778;
                result[5] += 0;
              } else {
                result[0] += 0.04310344827586207;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.017241379310344827;
                result[4] += 0.896551724137931;
                result[5] += 0.04310344827586207;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
                result[0] += 0.06666666666666667;
                result[1] += 0;
                result[2] += 0.06666666666666667;
                result[3] += 0.03333333333333333;
                result[4] += 0.2;
                result[5] += 0.6333333333333333;
              } else {
                result[0] += 0.2719298245614036;
                result[1] += 0.07894736842105264;
                result[2] += 0.026315789473684216;
                result[3] += 0.37719298245614047;
                result[4] += 0.12280701754385967;
                result[5] += 0.12280701754385967;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
                result[0] += 0.9489695780176644;
                result[1] += 0.003925417075564278;
                result[2] += 0.0009813542688910696;
                result[3] += 0.001962708537782139;
                result[4] += 0.042198233562315994;
                result[5] += 0.001962708537782139;
              } else {
                result[0] += 0.5731707317073171;
                result[1] += 0.012195121951219514;
                result[2] += 0.09756097560975611;
                result[3] += 0.10975609756097562;
                result[4] += 0.10975609756097562;
                result[5] += 0.09756097560975611;
              }
            }
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69) ) ) {
                result[0] += 0.03125;
                result[1] += 0.0625;
                result[2] += 0.0625;
                result[3] += 0.0625;
                result[4] += 0.65625;
                result[5] += 0.125;
              } else {
                result[0] += 0.023255813953488372;
                result[1] += 0;
                result[2] += 0.13953488372093023;
                result[3] += 0.13953488372093023;
                result[4] += 0.03488372093023256;
                result[5] += 0.6627906976744186;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.09322033898305085;
                result[3] += 0.652542372881356;
                result[4] += 0.03389830508474576;
                result[5] += 0.22033898305084745;
              } else {
                result[0] += 0.06666666666666667;
                result[1] += 0;
                result[2] += 0.6222222222222222;
                result[3] += 0.24444444444444444;
                result[4] += 0.022222222222222223;
                result[5] += 0.044444444444444446;
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)100.5) ) ) {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16666666666666666;
                result[4] += 0.5833333333333334;
                result[5] += 0;
              } else {
                result[0] += 0.9512195121951219;
                result[1] += 0;
                result[2] += 0.04878048780487805;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0.46153846153846156;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3076923076923077;
                result[5] += 0.23076923076923078;
              } else {
                result[0] += 0.05660377358490566;
                result[1] += 0;
                result[2] += 0.8490566037735849;
                result[3] += 0.018867924528301886;
                result[4] += 0;
                result[5] += 0.07547169811320754;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)67.5) ) ) {
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
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0.8571428571428571;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0;
              } else {
                result[0] += 0.42857142857142855;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5714285714285714;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)66.5) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)55) ) ) {
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
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)76.5) ) ) {
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
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.09523809523809523;
                result[3] += 0.8571428571428571;
                result[4] += 0;
                result[5] += 0.047619047619047616;
              }
            }
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4117647058823529;
                result[3] += 0.5294117647058824;
                result[4] += 0;
                result[5] += 0.058823529411764705;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)92.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5294117647058824;
                result[3] += 0.47058823529411764;
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
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8923076923076924;
                result[3] += 0.06153846153846154;
                result[4] += 0;
                result[5] += 0.046153846153846156;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)109) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)98.5) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5714285714285714;
                result[3] += 0.37142857142857144;
                result[4] += 0;
                result[5] += 0.05714285714285714;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.007194244604316547;
                result[1] += 0;
                result[2] += 0.841726618705036;
                result[3] += 0.1510791366906475;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)115.5) ) ) {
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
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87) ) ) {
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
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)112.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9583333333333334;
                result[3] += 0.041666666666666664;
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
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
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
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.991701244813278;
                result[3] += 0.008298755186721992;
                result[4] += 0;
                result[5] += 0;
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
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)73) ) ) {
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
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)51.5) ) ) {
                result[0] += 0.07692307692307693;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9230769230769231;
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)75.5) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54) ) ) {
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
                result[4] += 0.9545454545454546;
                result[5] += 0.045454545454545456;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.00782472613458529;
                result[4] += 0.02034428794992175;
                result[5] += 0.971830985915493;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.09565217391304348;
                result[4] += 0.2;
                result[5] += 0.7043478260869566;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)55.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.037037037037037035;
                result[1] += 0.037037037037037035;
                result[2] += 0;
                result[3] += 0.037037037037037035;
                result[4] += 0.7407407407407407;
                result[5] += 0.14814814814814814;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.009259259259259259;
                result[3] += 0.25925925925925924;
                result[4] += 0.037037037037037035;
                result[5] += 0.6944444444444444;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
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
                result[3] += 0.18181818181818182;
                result[4] += 0;
                result[5] += 0.8181818181818182;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.00641025641025641;
                result[1] += 0.019230769230769232;
                result[2] += 0.00641025641025641;
                result[3] += 0.8012820512820513;
                result[4] += 0.00641025641025641;
                result[5] += 0.16025641025641027;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)107.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5555555555555556;
                result[4] += 0;
                result[5] += 0.4444444444444444;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7391304347826088;
                result[3] += 0.04347826086956522;
                result[4] += 0;
                result[5] += 0.2173913043478261;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0;
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
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)62) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)41.5) ) ) {
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0.75;
                result[2] += 0;
                result[3] += 0.25;
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)55.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.8888888888888888;
                result[2] += 0;
                result[3] += 0.1111111111111111;
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
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)110.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
                result[0] += 0.43137254901960786;
                result[1] += 0.058823529411764705;
                result[2] += 0;
                result[3] += 0.0196078431372549;
                result[4] += 0.4117647058823529;
                result[5] += 0.0784313725490196;
              } else {
                result[0] += 0.0392156862745098;
                result[1] += 0.0196078431372549;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9411764705882353;
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
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)55.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.03296703296703297;
                result[2] += 0.054945054945054944;
                result[3] += 0.1978021978021978;
                result[4] += 0.03296703296703297;
                result[5] += 0.6813186813186813;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67) ) ) {
                result[0] += 0;
                result[1] += 0.7;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0.15;
                result[5] += 0.05;
              } else {
                result[0] += 0.910665451230629;
                result[1] += 0.004557885141294439;
                result[2] += 0.01731996353691887;
                result[3] += 0.014585232452142206;
                result[4] += 0.04831358249772106;
                result[5] += 0.004557885141294439;
              }
            }
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70.5) ) ) {
                result[0] += 0.1282051282051282;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.10256410256410256;
                result[4] += 0.5897435897435898;
                result[5] += 0.1794871794871795;
              } else {
                result[0] += 0;
                result[1] += 0.0049504950495049506;
                result[2] += 0.06930693069306931;
                result[3] += 0.504950495049505;
                result[4] += 0.039603960396039604;
                result[5] += 0.3811881188118812;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.2777777777777778;
              } else {
                result[0] += 0.06060606060606061;
                result[1] += 0;
                result[2] += 0.8484848484848485;
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.21052631578947367;
                result[1] += 0;
                result[2] += 0.3684210526315789;
                result[3] += 0;
                result[4] += 0.3684210526315789;
                result[5] += 0.05263157894736842;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.025;
                result[1] += 0;
                result[2] += 0.925;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.05;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)60) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)102) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102.5) ) ) {
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)76.5) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)106) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0.16666666666666666;
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
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3125;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0.5625;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)119) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7058823529411765;
                result[3] += 0.29411764705882354;
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
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0.008333333333333333;
                result[1] += 0;
                result[2] += 0.7416666666666667;
                result[3] += 0.23333333333333334;
                result[4] += 0;
                result[5] += 0.016666666666666666;
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)114.5) ) ) {
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)109) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8913043478260869;
                result[3] += 0.09782608695652174;
                result[4] += 0;
                result[5] += 0.010869565217391304;
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
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)99) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)121.5) ) ) {
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8461538461538461;
                result[3] += 0.15384615384615385;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9743589743589743;
                result[3] += 0.02564102564102564;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0.875;
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)111.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9411764705882353;
                result[3] += 0.058823529411764705;
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
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9924050632911392;
                result[3] += 0.007594936708860759;
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
