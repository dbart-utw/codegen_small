
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)48.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)47.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
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
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0.018867924528301886;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9433962264150944;
                result[5] += 0.03773584905660377;
              } else {
                result[0] += 0;
                result[1] += 0.7692307692307693;
                result[2] += 0.15384615384615385;
                result[3] += 0;
                result[4] += 0.07692307692307693;
                result[5] += 0;
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
                result[0] += 0.024390243902439025;
                result[1] += 0;
                result[2] += 0.12195121951219512;
                result[3] += 0;
                result[4] += 0.0975609756097561;
                result[5] += 0.7560975609756098;
              }
            }
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)73.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)52.5) ) ) {
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
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.011844331641285956;
                result[4] += 0.008460236886632826;
                result[5] += 0.9796954314720813;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.09777777777777778;
                result[4] += 0.06666666666666667;
                result[5] += 0.8355555555555556;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2619047619047619;
                result[4] += 0.42857142857142855;
                result[5] += 0.30952380952380953;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.020833333333333332;
                result[3] += 0.0625;
                result[4] += 0.041666666666666664;
                result[5] += 0.875;
              }
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.017857142857142856;
                result[3] += 0.3392857142857143;
                result[4] += 0.16071428571428573;
                result[5] += 0.48214285714285715;
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
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)78) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.18181818181818182;
                result[5] += 0.8181818181818182;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5588235294117647;
                result[4] += 0;
                result[5] += 0.4411764705882353;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
                result[0] += 0.007042253521126761;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8028169014084507;
                result[4] += 0.028169014084507043;
                result[5] += 0.1619718309859155;
              } else {
                result[0] += 0.07142857142857142;
                result[1] += 0;
                result[2] += 0.39285714285714285;
                result[3] += 0.17857142857142858;
                result[4] += 0.03571428571428571;
                result[5] += 0.32142857142857145;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)52) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
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
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)38.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
                result[0] += 0.023809523809523808;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9761904761904762;
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)53.5) ) ) {
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
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
                result[0] += 0.9036697247706422;
                result[1] += 0.013761467889908258;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.07339449541284404;
                result[5] += 0.009174311926605505;
              } else {
                result[0] += 0.2926829268292683;
                result[1] += 0.07317073170731707;
                result[2] += 0;
                result[3] += 0.024390243902439025;
                result[4] += 0.36585365853658536;
                result[5] += 0.24390243902439024;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)52.5) ) ) {
                result[0] += 0;
                result[1] += 0.8666666666666667;
                result[2] += 0;
                result[3] += 0.06666666666666667;
                result[4] += 0.06666666666666667;
                result[5] += 0;
              } else {
                result[0] += 0.24752475247524755;
                result[1] += 0.10891089108910892;
                result[2] += 0;
                result[3] += 0.306930693069307;
                result[4] += 0.10891089108910892;
                result[5] += 0.22772277227722776;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)76) ) ) {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.4;
              } else {
                result[0] += 0.9981785063752276;
                result[1] += 0.0018214936247723133;
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.75;
                result[4] += 0.03125;
                result[5] += 0.21875;
              } else {
                result[0] += 0;
                result[1] += 0.03333333333333333;
                result[2] += 0.06666666666666667;
                result[3] += 0.23333333333333334;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)108.5) ) ) {
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
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)114.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70.5) ) ) {
                result[0] += 0.1;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0.65;
                result[5] += 0;
              } else {
                result[0] += 0.046511627906976744;
                result[1] += 0;
                result[2] += 0.5581395348837209;
                result[3] += 0.3023255813953488;
                result[4] += 0;
                result[5] += 0.09302325581395349;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16666666666666666;
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
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)92.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)90.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
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
                result[3] += 0.4230769230769231;
                result[4] += 0.038461538461538464;
                result[5] += 0.5384615384615384;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)76.5) ) ) {
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
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109) ) ) {
                result[0] += 0;
                result[1] += 0.02702702702702703;
                result[2] += 0.04054054054054054;
                result[3] += 0.8378378378378378;
                result[4] += 0;
                result[5] += 0.0945945945945946;
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.02;
                result[4] += 0.14;
                result[5] += 0.84;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06666666666666667;
                result[3] += 0.43333333333333335;
                result[4] += 0;
                result[5] += 0.5;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.875;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)65.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)119.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9411764705882353;
                result[3] += 0;
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
            }
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)95) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95.5) ) ) {
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
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)95) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0.4;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5333333333333333;
                result[5] += 0.06666666666666667;
              } else {
                result[0] += 0.05263157894736842;
                result[1] += 0;
                result[2] += 0.47368421052631576;
                result[3] += 0.05263157894736842;
                result[4] += 0;
                result[5] += 0.42105263157894735;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)119) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7407407407407407;
                result[3] += 0.25925925925925924;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)107) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)83) ) ) {
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7142857142857143;
                result[3] += 0.2706766917293233;
                result[4] += 0;
                result[5] += 0.015037593984962405;
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
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)100) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
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
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)104.5) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89) ) ) {
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8260869565217391;
                result[3] += 0.14130434782608695;
                result[4] += 0;
                result[5] += 0.03260869565217391;
              } else {
                result[0] += 0.018691588785046728;
                result[1] += 0;
                result[2] += 0.9532710280373832;
                result[3] += 0.028037383177570093;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
                result[0] += 0.011904761904761906;
                result[1] += 0;
                result[2] += 0.9166666666666667;
                result[3] += 0.07142857142857144;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9975124378109452;
                result[3] += 0.0024875621890547263;
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
