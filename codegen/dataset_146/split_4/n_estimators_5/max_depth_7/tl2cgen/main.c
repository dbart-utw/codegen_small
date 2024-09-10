
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)45) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)55.5) ) ) {
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
                result[4] += 0.42857142857142855;
                result[5] += 0.5714285714285714;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
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
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
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
                result[3] += 0.018575851393188854;
                result[4] += 0.009287925696594427;
                result[5] += 0.9721362229102167;
              }
            }
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61) ) ) {
                result[0] += 0.9473684210526316;
                result[1] += 0.026315789473684213;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.026315789473684213;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.21428571428571427;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2857142857142857;
                result[5] += 0.5;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8823529411764706;
                result[5] += 0.11764705882352941;
              } else {
                result[0] += 0;
                result[1] += 0.022082018927444796;
                result[2] += 0.006309148264984227;
                result[3] += 0.20504731861198738;
                result[4] += 0.1167192429022082;
                result[5] += 0.6498422712933754;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0.014084507042253521;
                result[2] += 0.028169014084507043;
                result[3] += 0.49295774647887325;
                result[4] += 0.014084507042253521;
                result[5] += 0.4507042253521127;
              } else {
                result[0] += 0.16666666666666666;
                result[1] += 0.05555555555555555;
                result[2] += 0.5555555555555556;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0.05555555555555555;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9841269841269841;
                result[4] += 0;
                result[5] += 0.015873015873015872;
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
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)73) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9857142857142858;
                result[5] += 0.014285714285714285;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0.07142857142857142;
                result[2] += 0;
                result[3] += 0.5714285714285714;
                result[4] += 0.35714285714285715;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.7;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)109) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)112.5) ) ) {
                result[0] += 0;
                result[1] += 0.8888888888888888;
                result[2] += 0;
                result[3] += 0.1111111111111111;
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
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
                result[0] += 0.4444444444444445;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16666666666666669;
                result[4] += 0.16666666666666669;
                result[5] += 0.22222222222222224;
              } else {
                result[0] += 0.14893617021276595;
                result[1] += 0.02127659574468085;
                result[2] += 0;
                result[3] += 0.10638297872340426;
                result[4] += 0.723404255319149;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
                result[0] += 0.9556898288016114;
                result[1] += 0.0020140986908358514;
                result[2] += 0.0010070493454179257;
                result[3] += 0.0020140986908358514;
                result[4] += 0.028197381671701917;
                result[5] += 0.011077542799597183;
              } else {
                result[0] += 0.4782608695652174;
                result[1] += 0;
                result[2] += 0.30434782608695654;
                result[3] += 0.21739130434782608;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
                result[0] += 0.05405405405405406;
                result[1] += 0.05405405405405406;
                result[2] += 0.08108108108108109;
                result[3] += 0.2702702702702703;
                result[4] += 0.2702702702702703;
                result[5] += 0.2702702702702703;
              } else {
                result[0] += 0.5185185185185185;
                result[1] += 0;
                result[2] += 0.48148148148148145;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0.009708737864077669;
                result[2] += 0;
                result[3] += 0.27184466019417475;
                result[4] += 0.11650485436893204;
                result[5] += 0.6019417475728155;
              } else {
                result[0] += 0.05494505494505495;
                result[1] += 0;
                result[2] += 0.08791208791208793;
                result[3] += 0.5054945054945056;
                result[4] += 0.15384615384615388;
                result[5] += 0.19780219780219782;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0.0967741935483871;
                result[2] += 0.7096774193548387;
                result[3] += 0.03225806451612903;
                result[4] += 0;
                result[5] += 0.16129032258064516;
              } else {
                result[0] += 0.4166666666666667;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0.4166666666666667;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
                result[0] += 0.4523809523809524;
                result[1] += 0.047619047619047616;
                result[2] += 0.11904761904761904;
                result[3] += 0.14285714285714285;
                result[4] += 0.23809523809523808;
                result[5] += 0;
              } else {
                result[0] += 0.9803921568627452;
                result[1] += 0;
                result[2] += 0.009803921568627453;
                result[3] += 0.009803921568627453;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
                result[0] += 0.6923076923076923;
                result[1] += 0.3076923076923077;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.12121212121212122;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0.12121212121212122;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)106.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0.6666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.022727272727272728;
                result[4] += 0;
                result[5] += 0.9772727272727273;
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)89.5) ) ) {
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9696969696969697;
                result[4] += 0;
                result[5] += 0.030303030303030304;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5555555555555556;
                result[4] += 0;
                result[5] += 0.4444444444444444;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.25;
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
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95) ) ) {
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)81.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)79) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)79) ) ) {
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
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.07692307692307693;
                result[1] += 0;
                result[2] += 0.07692307692307693;
                result[3] += 0.38461538461538464;
                result[4] += 0.07692307692307693;
                result[5] += 0.38461538461538464;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)95) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8666666666666667;
                result[3] += 0.06666666666666667;
                result[4] += 0;
                result[5] += 0.06666666666666667;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5454545454545454;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.45454545454545453;
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
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
                result[4] += 0.125;
                result[5] += 0.875;
              }
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1346153846153846;
                result[3] += 0.75;
                result[4] += 0.019230769230769232;
                result[5] += 0.09615384615384616;
              } else {
                result[0] += 0;
                result[1] += 0.25;
                result[2] += 0.25;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0.375;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)107) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)109) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666667;
                result[3] += 0.16666666666666669;
                result[4] += 0;
                result[5] += 0.16666666666666669;
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.27272727272727276;
                result[3] += 0.6818181818181819;
                result[4] += 0;
                result[5] += 0.04545454545454546;
              }
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
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)92.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8292682926829268;
                result[3] += 0.14634146341463414;
                result[4] += 0;
                result[5] += 0.024390243902439025;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.007434944237918215;
                result[1] += 0;
                result[2] += 0.895910780669145;
                result[3] += 0.09665427509293681;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)112) ) ) {
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
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9;
                result[3] += 0.1;
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
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9655172413793104;
                result[3] += 0.034482758620689655;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9971751412429378;
                result[3] += 0.002824858757062147;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)50.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)57.5) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
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
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)64.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)61.5) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)64) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.012924071082390954;
                result[4] += 0.0016155088852988692;
                result[5] += 0.9854604200323102;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4;
                result[4] += 0.4;
                result[5] += 0.2;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)64.5) ) ) {
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
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0.16666666666666666;
              }
            }
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)68.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
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
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)51) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.021739130434782608;
                result[2] += 0;
                result[3] += 0.021739130434782608;
                result[4] += 0.45652173913043476;
                result[5] += 0.5;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.05917159763313609;
                result[4] += 0.047337278106508875;
                result[5] += 0.893491124260355;
              } else {
                result[0] += 0.03636363636363636;
                result[1] += 0.14545454545454545;
                result[2] += 0;
                result[3] += 0.3090909090909091;
                result[4] += 0.03636363636363636;
                result[5] += 0.4727272727272727;
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4146341463414634;
                result[4] += 0;
                result[5] += 0.5853658536585366;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8345864661654135;
                result[4] += 0;
                result[5] += 0.16541353383458646;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.05555555555555555;
                result[4] += 0.05555555555555555;
                result[5] += 0.8888888888888888;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0.07142857142857142;
                result[4] += 0;
                result[5] += 0.17857142857142858;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)100.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)40) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
                result[0] += 0.01818181818181818;
                result[1] += 0.03636363636363636;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9363636363636364;
                result[5] += 0.00909090909090909;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.26666666666666666;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0.4;
              }
            }
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)76) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
                result[0] += 0;
                result[1] += 0.9591836734693877;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.04081632653061224;
                result[5] += 0;
              } else {
                result[0] += 0.2777777777777778;
                result[1] += 0.5;
                result[2] += 0.1111111111111111;
                result[3] += 0.05555555555555555;
                result[4] += 0.05555555555555555;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.043478260869565216;
                result[3] += 0.2608695652173913;
                result[4] += 0;
                result[5] += 0.6956521739130435;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)71.5) ) ) {
                result[0] += 0.46923076923076923;
                result[1] += 0.03076923076923077;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0.9205231388329981;
                result[1] += 0;
                result[2] += 0.0010060362173038232;
                result[3] += 0.028169014084507046;
                result[4] += 0.03521126760563381;
                result[5] += 0.015090543259557346;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.125;
                result[4] += 0.027777777777777776;
                result[5] += 0.8472222222222222;
              } else {
                result[0] += 0.06201550387596899;
                result[1] += 0.03875968992248062;
                result[2] += 0.09302325581395349;
                result[3] += 0.3488372093023256;
                result[4] += 0.17829457364341086;
                result[5] += 0.27906976744186046;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0.5833333333333334;
                result[5] += 0.16666666666666666;
              } else {
                result[0] += 0.8200000000000001;
                result[1] += 0;
                result[2] += 0.10000000000000002;
                result[3] += 0;
                result[4] += 0.08000000000000002;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
                result[0] += 0.2222222222222222;
                result[1] += 0;
                result[2] += 0.05555555555555555;
                result[3] += 0.1111111111111111;
                result[4] += 0.2777777777777778;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0.019108280254777073;
                result[1] += 0.019108280254777073;
                result[2] += 0.13375796178343952;
                result[3] += 0.6305732484076434;
                result[4] += 0.038216560509554146;
                result[5] += 0.15923566878980894;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7368421052631579;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.2631578947368421;
              } else {
                result[0] += 0.7142857142857143;
                result[1] += 0;
                result[2] += 0.14285714285714285;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0.1111111111111111;
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)99) ) ) {
                result[0] += 0.006802721088435374;
                result[1] += 0;
                result[2] += 0.8163265306122449;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0.01020408163265306;
              } else {
                result[0] += 0.75;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0;
                result[4] += 0.125;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)101.5) ) ) {
                result[0] += 0.014354066985645933;
                result[1] += 0;
                result[2] += 0.9585326953748007;
                result[3] += 0.02711323763955343;
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
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)94) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9411764705882353;
                result[1] += 0;
                result[2] += 0.058823529411764705;
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)100.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)118.5) ) ) {
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
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)92.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)106.5) ) ) {
                result[0] += 0.004081632653061225;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9795918367346939;
                result[5] += 0.0163265306122449;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)72) ) ) {
                result[0] += 0.21052631578947367;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.21052631578947367;
                result[5] += 0.5789473684210527;
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
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)48) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)80) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58.5) ) ) {
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
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)64.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61) ) ) {
                result[0] += 0;
                result[1] += 0.3157894736842105;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6842105263157895;
                result[5] += 0;
              } else {
                result[0] += 0.9351351351351351;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.06486486486486487;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
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
                result[4] += 0.20689655172413793;
                result[5] += 0.7931034482758621;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
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
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
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
                result[3] += 0.04078549848942598;
                result[4] += 0.022658610271903322;
                result[5] += 0.9365558912386707;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
                result[0] += 0.13333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4;
                result[4] += 0.4666666666666667;
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7777777777777778;
                result[5] += 0.2222222222222222;
              } else {
                result[0] += 0.00423728813559322;
                result[1] += 0;
                result[2] += 0.00423728813559322;
                result[3] += 0.18220338983050846;
                result[4] += 0.038135593220338986;
                result[5] += 0.7711864406779662;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)70.5) ) ) {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0.6;
                result[5] += 0.1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2777777777777778;
                result[4] += 0.05555555555555555;
                result[5] += 0.6666666666666666;
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.3;
                result[4] += 0.4;
                result[5] += 0.1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2564102564102564;
                result[4] += 0.05128205128205128;
                result[5] += 0.6923076923076923;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)68.5) ) ) {
                result[0] += 0.6923076923076923;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3076923076923077;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.01754385964912281;
                result[2] += 0.011695906432748539;
                result[3] += 0.7251461988304094;
                result[4] += 0.03508771929824562;
                result[5] += 0.2105263157894737;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
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
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0.1702127659574468;
                result[2] += 0;
                result[3] += 0.02127659574468085;
                result[4] += 0.7872340425531915;
                result[5] += 0.02127659574468085;
              } else {
                result[0] += 0.42857142857142855;
                result[1] += 0.42857142857142855;
                result[2] += 0.14285714285714285;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)110.5) ) ) {
                result[0] += 0.942578548212351;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.015167930660888408;
                result[4] += 0.04008667388949079;
                result[5] += 0.0021668472372697724;
              } else {
                result[0] += 0;
                result[1] += 0.9444444444444444;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.05555555555555555;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0625;
                result[4] += 0;
                result[5] += 0.9375;
              } else {
                result[0] += 0.16666666666666666;
                result[1] += 0.30952380952380953;
                result[2] += 0.16666666666666666;
                result[3] += 0.30952380952380953;
                result[4] += 0.023809523809523808;
                result[5] += 0.023809523809523808;
              }
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)109.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
                result[0] += 0.0136986301369863;
                result[1] += 0.1095890410958904;
                result[2] += 0.0410958904109589;
                result[3] += 0.2191780821917808;
                result[4] += 0.0958904109589041;
                result[5] += 0.5205479452054794;
              } else {
                result[0] += 0.02;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0.61;
                result[4] += 0;
                result[5] += 0.27;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.825;
                result[3] += 0.05;
                result[4] += 0;
                result[5] += 0.125;
              } else {
                result[0] += 0.625;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
                result[0] += 0.8787878787878788;
                result[1] += 0;
                result[2] += 0.030303030303030304;
                result[3] += 0;
                result[4] += 0.09090909090909091;
                result[5] += 0;
              } else {
                result[0] += 0.3;
                result[1] += 0;
                result[2] += 0.55;
                result[3] += 0;
                result[4] += 0.1;
                result[5] += 0.05;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)100) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)93) ) ) {
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
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)89) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)85) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
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
                result[3] += 0.7857142857142857;
                result[4] += 0;
                result[5] += 0.21428571428571427;
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)108) ) ) {
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)101) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.21428571428571427;
                result[3] += 0.7142857142857143;
                result[4] += 0;
                result[5] += 0.07142857142857142;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.1;
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)101) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)106.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)91) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.43333333333333335;
                result[3] += 0.5666666666666667;
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99.5) ) ) {
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8867924528301887;
                result[3] += 0.11320754716981132;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)109.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8571428571428571;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.48148148148148145;
                result[3] += 0.48148148148148145;
                result[4] += 0;
                result[5] += 0.037037037037037035;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
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
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)105) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)118.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9923076923076923;
                result[3] += 0.007692307692307693;
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
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8507462686567164;
                result[3] += 0.14925373134328357;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)108.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)114) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9743589743589743;
                result[3] += 0.02564102564102564;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7142857142857143;
                result[3] += 0.2857142857142857;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)109.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.96875;
                result[3] += 0.03125;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9971509971509972;
                result[3] += 0.002849002849002849;
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)114.5) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)52) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.047619047619047616;
                result[3] += 0;
                result[4] += 0.7142857142857143;
                result[5] += 0.23809523809523808;
              }
            }
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70) ) ) {
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
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)62.5) ) ) {
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
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.015100671140939598;
                result[4] += 0.01174496644295302;
                result[5] += 0.9731543624161074;
              } else {
                result[0] += 0;
                result[1] += 0.009900990099009901;
                result[2] += 0;
                result[3] += 0.10396039603960396;
                result[4] += 0.09900990099009901;
                result[5] += 0.7871287128712872;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60) ) ) {
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0.011627906976744186;
                result[2] += 0;
                result[3] += 0.011627906976744186;
                result[4] += 0.1511627906976744;
                result[5] += 0.8255813953488372;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16666666666666666;
                result[4] += 0.75;
                result[5] += 0.08333333333333333;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.19148936170212766;
                result[4] += 0.02127659574468085;
                result[5] += 0.7872340425531915;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7379679144385026;
                result[4] += 0;
                result[5] += 0.2620320855614973;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)57.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)43.5) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)113.5) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100) ) ) {
                result[0] += 0.15384615384615385;
                result[1] += 0.042735042735042736;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7948717948717948;
                result[5] += 0.008547008547008548;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0.35;
                result[2] += 0.05;
                result[3] += 0;
                result[4] += 0.6;
                result[5] += 0;
              } else {
                result[0] += 0.900375939849624;
                result[1] += 0.005639097744360902;
                result[2] += 0.002819548872180451;
                result[3] += 0.03101503759398496;
                result[4] += 0.041353383458646614;
                result[5] += 0.018796992481203006;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0.6818181818181818;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3181818181818182;
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69) ) ) {
                result[0] += 0.1111111111111111;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0.05555555555555555;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.028901734104046242;
                result[3] += 0.4046242774566474;
                result[4] += 0.023121387283236993;
                result[5] += 0.5433526011560693;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
                result[0] += 0.058823529411764705;
                result[1] += 0;
                result[2] += 0.17647058823529413;
                result[3] += 0.29411764705882354;
                result[4] += 0;
                result[5] += 0.47058823529411764;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9387755102040817;
                result[3] += 0.04081632653061224;
                result[4] += 0;
                result[5] += 0.02040816326530612;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
                result[0] += 0.34285714285714286;
                result[1] += 0;
                result[2] += 0.05714285714285714;
                result[3] += 0;
                result[4] += 0.5428571428571428;
                result[5] += 0.05714285714285714;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)92.5) ) ) {
                result[0] += 0.03125;
                result[1] += 0.03125;
                result[2] += 0.90625;
                result[3] += 0;
                result[4] += 0.03125;
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
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)57.5) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)69.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65.5) ) ) {
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
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.027777777777777776;
                result[4] += 0;
                result[5] += 0.9722222222222222;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69.5) ) ) {
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
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)94.5) ) ) {
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
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.11538461538461539;
                result[3] += 0.8846153846153846;
                result[4] += 0;
                result[5] += 0;
              }
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
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89) ) ) {
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
              result[4] += 1;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.3333333333333333;
                result[4] += 0.3333333333333333;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)114.5) ) ) {
                result[0] += 0.04054054054054054;
                result[1] += 0;
                result[2] += 0.8378378378378378;
                result[3] += 0.04054054054054054;
                result[4] += 0;
                result[5] += 0.08108108108108109;
              } else {
                result[0] += 0.625;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.25;
              }
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.9583333333333334;
                result[1] += 0;
                result[2] += 0.041666666666666664;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)125.5) ) ) {
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
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)101.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
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
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96) ) ) {
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90.5) ) ) {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0.25;
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.375;
                result[3] += 0.625;
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0.017543859649122806;
                result[2] += 0.6140350877192983;
                result[3] += 0.3157894736842105;
                result[4] += 0;
                result[5] += 0.05263157894736842;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9090909090909091;
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.40625;
                result[3] += 0.53125;
                result[4] += 0;
                result[5] += 0.0625;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82.5) ) ) {
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
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)119) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9480519480519481;
                result[3] += 0.04545454545454546;
                result[4] += 0;
                result[5] += 0.006493506493506495;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)110.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9615384615384616;
                result[3] += 0.038461538461538464;
                result[4] += 0;
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
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)72) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9948979591836735;
                result[3] += 0.00510204081632653;
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)64) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7142857142857143;
                result[5] += 0.2857142857142857;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.979253112033195;
                result[5] += 0.02074688796680498;
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
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)63) ) ) {
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0013550135501355014;
                result[3] += 0.025745257452574527;
                result[4] += 0.023035230352303523;
                result[5] += 0.9498644986449865;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.45454545454545453;
                result[4] += 0;
                result[5] += 0.5454545454545454;
              }
            }
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
                result[0] += 0.8571428571428571;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.20833333333333334;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.625;
                result[5] += 0.16666666666666666;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)52.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.011695906432748537;
                result[1] += 0;
                result[2] += 0.017543859649122806;
                result[3] += 0.17543859649122806;
                result[4] += 0.05847953216374269;
                result[5] += 0.7368421052631579;
              }
            }
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.09090909090909091;
                result[1] += 0.5454545454545454;
                result[2] += 0;
                result[3] += 0.36363636363636365;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.016129032258064516;
                result[2] += 0;
                result[3] += 0.8467741935483871;
                result[4] += 0;
                result[5] += 0.13709677419354838;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
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
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.75;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)99.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)64) ) ) {
                result[0] += 0;
                result[1] += 0.16666666666666666;
                result[2] += 0;
                result[3] += 0.1111111111111111;
                result[4] += 0.16666666666666666;
                result[5] += 0.5555555555555556;
              } else {
                result[0] += 0.06666666666666667;
                result[1] += 0.05555555555555555;
                result[2] += 0;
                result[3] += 0.06666666666666667;
                result[4] += 0.8111111111111111;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
                result[0] += 0.014925373134328358;
                result[1] += 0.8805970149253731;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1044776119402985;
                result[5] += 0;
              } else {
                result[0] += 0.7142857142857143;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2857142857142857;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
                result[0] += 0.1724137931034483;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8275862068965517;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.058823529411764705;
                result[2] += 0.058823529411764705;
                result[3] += 0.14705882352941177;
                result[4] += 0.38235294117647056;
                result[5] += 0.35294117647058826;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
                result[0] += 0.9261083743842364;
                result[1] += 0.0019704433497536944;
                result[2] += 0;
                result[3] += 0.016748768472906402;
                result[4] += 0.041379310344827586;
                result[5] += 0.013793103448275862;
              } else {
                result[0] += 0.39;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.21;
                result[4] += 0.11;
                result[5] += 0.29;
              }
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.016129032258064516;
                result[1] += 0;
                result[2] += 0.04838709677419355;
                result[3] += 0.45564516129032256;
                result[4] += 0.08064516129032258;
                result[5] += 0.39919354838709675;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.75;
              } else {
                result[0] += 0.012987012987012988;
                result[1] += 0.025974025974025976;
                result[2] += 0.7142857142857143;
                result[3] += 0.12987012987012986;
                result[4] += 0.012987012987012988;
                result[5] += 0.1038961038961039;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)52) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
                result[0] += 0.9767441860465116;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.023255813953488372;
                result[5] += 0;
              } else {
                result[0] += 0.6666666666666667;
                result[1] += 0;
                result[2] += 0.16666666666666669;
                result[3] += 0;
                result[4] += 0.16666666666666669;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)59.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)107.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)107.5) ) ) {
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
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)81) ) ) {
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
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)100) ) ) {
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
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)81) ) ) {
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
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.1111111111111111;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8421052631578947;
                result[3] += 0.15789473684210525;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0.3333333333333333;
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9565217391304348;
                result[3] += 0.043478260869565216;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)116) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90) ) ) {
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)98) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.20833333333333334;
                result[3] += 0.7916666666666666;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.782608695652174;
                result[3] += 0.13043478260869565;
                result[4] += 0;
                result[5] += 0.08695652173913043;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8803827751196173;
                result[3] += 0.11483253588516747;
                result[4] += 0;
                result[5] += 0.004784688995215311;
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
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9411764705882353;
                result[3] += 0.058823529411764705;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9956616052060737;
                result[3] += 0.004338394793926247;
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
  result[0] /= 5;
  result[1] /= 5;
  result[2] /= 5;
  result[3] /= 5;
  result[4] /= 5;
  result[5] /= 5;
  
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
