
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)99.5) ) ) {
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)102) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)48.5) ) ) {
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
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.21052631578947367;
                result[5] += 0.7894736842105263;
              } else {
                result[0] += 0.16;
                result[1] += 0.04;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.78;
                result[5] += 0.02;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65.5) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58.5) ) ) {
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
                result[3] += 0;
                result[4] += 0.12;
                result[5] += 0.88;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)55.5) ) ) {
                result[0] += 0.6666666666666666;
                result[1] += 0.08333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0;
              } else {
                result[0] += 0.05405405405405406;
                result[1] += 0.08108108108108109;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7837837837837838;
                result[5] += 0.08108108108108109;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)66) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.9854651162790697;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.014534883720930232;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)74.5) ) ) {
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
                result[4] += 0.2;
                result[5] += 0.8;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0.18181818181818182;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.45454545454545453;
                result[5] += 0.36363636363636365;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.011254019292604502;
                result[4] += 0.006430868167202572;
                result[5] += 0.9823151125401929;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)70.5) ) ) {
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.09375;
                result[4] += 0;
                result[5] += 0.90625;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.48;
                result[4] += 0.08;
                result[5] += 0.44;
              }
            }
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0.1;
                result[5] += 0.8;
              } else {
                result[0] += 0.02631578947368421;
                result[1] += 0.13157894736842105;
                result[2] += 0;
                result[3] += 0.05263157894736842;
                result[4] += 0.5789473684210527;
                result[5] += 0.21052631578947367;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
                result[0] += 0.12;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.68;
                result[5] += 0;
              } else {
                result[0] += 0.8815789473684211;
                result[1] += 0.052631578947368425;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.06578947368421054;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7;
                result[5] += 0.3;
              } else {
                result[0] += 0;
                result[1] += 0.004405286343612335;
                result[2] += 0.00881057268722467;
                result[3] += 0.15859030837004406;
                result[4] += 0.00881057268722467;
                result[5] += 0.8193832599118943;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
                result[0] += 0.004889975550122249;
                result[1] += 0.004889975550122249;
                result[2] += 0.009779951100244499;
                result[3] += 0.5256723716381418;
                result[4] += 0.11246943765281174;
                result[5] += 0.3422982885085575;
              } else {
                result[0] += 0.18253968253968253;
                result[1] += 0.06349206349206349;
                result[2] += 0.2777777777777778;
                result[3] += 0.09523809523809523;
                result[4] += 0.2777777777777778;
                result[5] += 0.10317460317460317;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)92.5) ) ) {
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
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)94.5) ) ) {
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)71.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9906976744186047;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0031007751937984496;
                result[4] += 0.006201550387596899;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16666666666666666;
                result[4] += 0.8333333333333334;
                result[5] += 0;
              } else {
                result[0] += 0.28571428571428575;
                result[1] += 0;
                result[2] += 0.42857142857142866;
                result[3] += 0.14285714285714288;
                result[4] += 0;
                result[5] += 0.14285714285714288;
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)89.5) ) ) {
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
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)117) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0.3;
                result[4] += 0;
                result[5] += 0.6;
              } else {
                result[0] += 0;
                result[1] += 0.014285714285714285;
                result[2] += 0.07142857142857142;
                result[3] += 0.8857142857142857;
                result[4] += 0;
                result[5] += 0.02857142857142857;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8125;
                result[3] += 0.1875;
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)62) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0.08823529411764706;
                result[2] += 0.20588235294117646;
                result[3] += 0.08823529411764706;
                result[4] += 0.11764705882352941;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.23529411764705882;
                result[3] += 0.7058823529411765;
                result[4] += 0;
                result[5] += 0.058823529411764705;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75) ) ) {
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0.1;
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4827586206896552;
                result[3] += 0.4827586206896552;
                result[4] += 0;
                result[5] += 0.034482758620689655;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
                result[0] += 0.6;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4;
                result[5] += 0;
              } else {
                result[0] += 0.06521739130434784;
                result[1] += 0;
                result[2] += 0.8478260869565218;
                result[3] += 0.06521739130434784;
                result[4] += 0;
                result[5] += 0.02173913043478261;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
                result[0] += 0.6;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.001310615989515072;
                result[1] += 0;
                result[2] += 0.9528178243774574;
                result[3] += 0.04456094364351245;
                result[4] += 0;
                result[5] += 0.001310615989515072;
              }
            }
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)88) ) ) {
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
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)93.5) ) ) {
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)48.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)111) ) ) {
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
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)76) ) ) {
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
                result[4] += 0.9375;
                result[5] += 0.0625;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)55.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)75) ) ) {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 0.07142857142857142;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0.7857142857142857;
              } else {
                result[0] += 0;
                result[1] += 0.3181818181818182;
                result[2] += 0;
                result[3] += 0.18181818181818182;
                result[4] += 0.5;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)50.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.003243243243243243;
                result[1] += 0.001081081081081081;
                result[2] += 0;
                result[3] += 0.04216216216216216;
                result[4] += 0.02918918918918919;
                result[5] += 0.9243243243243243;
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)59.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)72) ) ) {
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
                result[3] += 0.8;
                result[4] += 0;
                result[5] += 0.2;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.09523809523809523;
                result[4] += 0.023809523809523808;
                result[5] += 0.8809523809523809;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.5;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0.8333333333333334;
              } else {
                result[0] += 0.015748031496062992;
                result[1] += 0.007874015748031496;
                result[2] += 0;
                result[3] += 0.8740157480314961;
                result[4] += 0;
                result[5] += 0.10236220472440945;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.17647058823529413;
                result[1] += 0;
                result[2] += 0.23529411764705882;
                result[3] += 0.47058823529411764;
                result[4] += 0;
                result[5] += 0.11764705882352941;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
                result[0] += 0.017857142857142856;
                result[1] += 0;
                result[2] += 0.008928571428571428;
                result[3] += 0.008928571428571428;
                result[4] += 0.9642857142857143;
                result[5] += 0;
              } else {
                result[0] += 0.21052631578947367;
                result[1] += 0.03508771929824561;
                result[2] += 0;
                result[3] += 0.08771929824561403;
                result[4] += 0.5964912280701754;
                result[5] += 0.07017543859649122;
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.375;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.625;
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
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)74) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.1282051282051282;
                result[1] += 0.038461538461538464;
                result[2] += 0;
                result[3] += 0.038461538461538464;
                result[4] += 0.6025641025641025;
                result[5] += 0.19230769230769232;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
                result[0] += 0.023809523809523808;
                result[1] += 0.023809523809523808;
                result[2] += 0.047619047619047616;
                result[3] += 0.30952380952380953;
                result[4] += 0.14285714285714285;
                result[5] += 0.4523809523809524;
              } else {
                result[0] += 0.955044955044955;
                result[1] += 0.000999000999000999;
                result[2] += 0.001998001998001998;
                result[3] += 0.008991008991008992;
                result[4] += 0.029970029970029972;
                result[5] += 0.002997002997002997;
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)109.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
                result[0] += 0.006578947368421053;
                result[1] += 0.03289473684210527;
                result[2] += 0.0723684210526316;
                result[3] += 0.44078947368421056;
                result[4] += 0.006578947368421053;
                result[5] += 0.44078947368421056;
              } else {
                result[0] += 0.12121212121212122;
                result[1] += 0;
                result[2] += 0.5606060606060606;
                result[3] += 0.12121212121212122;
                result[4] += 0.07575757575757576;
                result[5] += 0.12121212121212122;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
                result[0] += 0.7846153846153846;
                result[1] += 0;
                result[2] += 0.015384615384615385;
                result[3] += 0;
                result[4] += 0.18461538461538463;
                result[5] += 0.015384615384615385;
              } else {
                result[0] += 0.07142857142857142;
                result[1] += 0;
                result[2] += 0.9285714285714286;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)33) ) ) {
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
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)115.5) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)90.5) ) ) {
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
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)94) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.25;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)80) ) ) {
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
                result[3] += 0.0967741935483871;
                result[4] += 0;
                result[5] += 0.9032258064516129;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)70.5) ) ) {
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
                result[3] += 0.5454545454545454;
                result[4] += 0;
                result[5] += 0.45454545454545453;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
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
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.5;
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.08695652173913043;
                result[3] += 0.8695652173913043;
                result[4] += 0;
                result[5] += 0.043478260869565216;
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
                result[2] += 0.16666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8333333333333334;
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.14285714285714285;
                result[3] += 0.8571428571428571;
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
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)90) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)81) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)94) ) ) {
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)85) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)83.5) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)63) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.9;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0.9;
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.5625;
                result[4] += 0;
                result[5] += 0.1875;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9583333333333334;
                result[3] += 0.041666666666666664;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8247863247863247;
                result[3] += 0.14957264957264957;
                result[4] += 0.004273504273504274;
                result[5] += 0.021367521367521368;
              } else {
                result[0] += 0.08333333333333333;
                result[1] += 0;
                result[2] += 0.4166666666666667;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9828571428571429;
                result[3] += 0.017142857142857144;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8387096774193549;
                result[3] += 0.16129032258064516;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)109.5) ) ) {
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
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9906542056074766;
                result[3] += 0.009345794392523364;
                result[4] += 0;
                result[5] += 0;
              }
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)111.5) ) ) {
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
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)73) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.11111111111111112;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8148148148148149;
                result[5] += 0.07407407407407408;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)81.5) ) ) {
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)60.5) ) ) {
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
                result[4] += 0.6875;
                result[5] += 0.3125;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.011570247933884297;
                result[4] += 0.001652892561983471;
                result[5] += 0.9867768595041322;
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)76) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)47.5) ) ) {
                result[0] += 0;
                result[1] += 0.8;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.2;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63) ) ) {
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
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0.011235955056179775;
                result[2] += 0.0056179775280898875;
                result[3] += 0.14606741573033707;
                result[4] += 0.09550561797752809;
                result[5] += 0.7415730337078652;
              } else {
                result[0] += 0.02857142857142857;
                result[1] += 0.3142857142857143;
                result[2] += 0.11428571428571428;
                result[3] += 0.2;
                result[4] += 0.2;
                result[5] += 0.14285714285714285;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.03508771929824561;
                result[2] += 0.14035087719298245;
                result[3] += 0.24561403508771928;
                result[4] += 0.017543859649122806;
                result[5] += 0.5614035087719298;
              } else {
                result[0] += 0;
                result[1] += 0.006993006993006993;
                result[2] += 0.013986013986013986;
                result[3] += 0.8251748251748252;
                result[4] += 0;
                result[5] += 0.15384615384615385;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)43.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
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
                result[4] += 0.6666666666666666;
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75) ) ) {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41.5) ) ) {
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
                result[4] += 0.9508196721311475;
                result[5] += 0.04918032786885246;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0.7;
                result[4] += 0.05;
                result[5] += 0.05;
              }
            }
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)109.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)69) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
                result[0] += 0;
                result[1] += 0.9411764705882353;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.058823529411764705;
                result[5] += 0;
              } else {
                result[0] += 0.04285714285714286;
                result[1] += 0.02857142857142857;
                result[2] += 0;
                result[3] += 0.07142857142857142;
                result[4] += 0.8428571428571429;
                result[5] += 0.014285714285714285;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
                result[0] += 0.9242424242424242;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.047979797979797977;
                result[5] += 0.027777777777777776;
              } else {
                result[0] += 0.5;
                result[1] += 0.02459016393442623;
                result[2] += 0.00819672131147541;
                result[3] += 0.07377049180327869;
                result[4] += 0.2786885245901639;
                result[5] += 0.11475409836065574;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0.01092896174863388;
                result[2] += 0.03278688524590164;
                result[3] += 0.47540983606557374;
                result[4] += 0.060109289617486336;
                result[5] += 0.4207650273224044;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0.2727272727272727;
                result[3] += 0.13636363636363635;
                result[4] += 0;
                result[5] += 0.09090909090909091;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
                result[0] += 0.6428571428571429;
                result[1] += 0;
                result[2] += 0.047619047619047616;
                result[3] += 0.09523809523809523;
                result[4] += 0.19047619047619047;
                result[5] += 0.023809523809523808;
              } else {
                result[0] += 0.050847457627118654;
                result[1] += 0.050847457627118654;
                result[2] += 0.5932203389830509;
                result[3] += 0.22033898305084748;
                result[4] += 0.03389830508474577;
                result[5] += 0.050847457627118654;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
                result[0] += 0.8513513513513514;
                result[1] += 0.027027027027027032;
                result[2] += 0.013513513513513516;
                result[3] += 0;
                result[4] += 0.10810810810810813;
                result[5] += 0;
              } else {
                result[0] += 0.07142857142857142;
                result[1] += 0.14285714285714285;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7857142857142857;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77.5) ) ) {
                result[0] += 0.991166077738516;
                result[1] += 0;
                result[2] += 0.0088339222614841;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.5555555555555556;
                result[1] += 0;
                result[2] += 0.4444444444444444;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)116) ) ) {
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
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
                result[3] += 0.02564102564102564;
                result[4] += 0.02564102564102564;
                result[5] += 0.9487179487179487;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0.023809523809523808;
                result[2] += 0.07142857142857142;
                result[3] += 0.09523809523809523;
                result[4] += 0.047619047619047616;
                result[5] += 0.7619047619047619;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.29411764705882354;
                result[3] += 0.47058823529411764;
                result[4] += 0;
                result[5] += 0.23529411764705882;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)81) ) ) {
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)92) ) ) {
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
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
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
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.696969696969697;
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0.21212121212121213;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3421052631578948;
                result[3] += 0.6315789473684211;
                result[4] += 0;
                result[5] += 0.026315789473684213;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
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
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)116) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9375;
                result[3] += 0.0625;
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
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73) ) ) {
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
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)81) ) ) {
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)107.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.65;
                result[3] += 0.35;
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)129.5) ) ) {
                result[0] += 0.0035460992907801418;
                result[1] += 0;
                result[2] += 0.9113475177304965;
                result[3] += 0.08156028368794327;
                result[4] += 0;
                result[5] += 0.0035460992907801418;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9487179487179487;
                result[3] += 0.05128205128205128;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9950617283950617;
                result[3] += 0.0049382716049382715;
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)30) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)62.5) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)51) ) ) {
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
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)73.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)52.5) ) ) {
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
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.85;
                result[5] += 0.15;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)62) ) ) {
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
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.01293103448275862;
                result[4] += 0.010057471264367816;
                result[5] += 0.9770114942528736;
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
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0.4;
                result[2] += 0;
                result[3] += 0.6;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.18181818181818182;
                result[1] += 0;
                result[2] += 0.18181818181818182;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6363636363636364;
              }
            }
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
                result[0] += 0.75;
                result[1] += 0;
                result[2] += 0;
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
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6727272727272727;
                result[5] += 0.32727272727272727;
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.05442176870748299;
                result[4] += 0.013605442176870748;
                result[5] += 0.9319727891156463;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.07936507936507936;
                result[1] += 0.07936507936507936;
                result[2] += 0.031746031746031744;
                result[3] += 0.5396825396825397;
                result[4] += 0.07936507936507936;
                result[5] += 0.19047619047619047;
              }
            }
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8888888888888888;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.027777777777777776;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0.2222222222222222;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)70) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9;
                result[4] += 0;
                result[5] += 0.1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.22950819672131148;
                result[4] += 0;
                result[5] += 0.7704918032786885;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)72.5) ) ) {
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
                result[3] += 0.967741935483871;
                result[4] += 0;
                result[5] += 0.03225806451612903;
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)102.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
                result[0] += 0.6833333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.016666666666666666;
                result[4] += 0.3;
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
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.015873015873015872;
                result[1] += 0.015873015873015872;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9523809523809523;
                result[5] += 0.015873015873015872;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41.5) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
                result[0] += 0.06382978723404255;
                result[1] += 0.06382978723404255;
                result[2] += 0.10638297872340426;
                result[3] += 0.3829787234042553;
                result[4] += 0.1276595744680851;
                result[5] += 0.2553191489361702;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.043478260869565216;
                result[3] += 0.17391304347826086;
                result[4] += 0.043478260869565216;
                result[5] += 0.7391304347826086;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
                result[0] += 0.175;
                result[1] += 0.175;
                result[2] += 0.025;
                result[3] += 0.025;
                result[4] += 0.45;
                result[5] += 0.15;
              } else {
                result[0] += 0.948432760364004;
                result[1] += 0.005055611729019211;
                result[2] += 0.0010111223458038423;
                result[3] += 0.014155712841253791;
                result[4] += 0.024266936299292215;
                result[5] += 0.007077856420626896;
              }
            }
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)85.5) ) ) {
                result[0] += 0.06976744186046512;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06976744186046512;
                result[4] += 0.13953488372093023;
                result[5] += 0.7209302325581395;
              } else {
                result[0] += 0.018518518518518517;
                result[1] += 0;
                result[2] += 0.018518518518518517;
                result[3] += 0.7037037037037037;
                result[4] += 0;
                result[5] += 0.25925925925925924;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
                result[0] += 0.2954545454545455;
                result[1] += 0.13636363636363638;
                result[2] += 0.06818181818181819;
                result[3] += 0.04545454545454546;
                result[4] += 0.2954545454545455;
                result[5] += 0.15909090909090912;
              } else {
                result[0] += 0.864406779661017;
                result[1] += 0;
                result[2] += 0.13559322033898305;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
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
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.10526315789473684;
                result[3] += 0.15789473684210525;
                result[4] += 0;
                result[5] += 0.7368421052631579;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.13043478260869565;
                result[3] += 0.7391304347826086;
                result[4] += 0;
                result[5] += 0.13043478260869565;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)90) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9285714285714286;
                result[3] += 0.07142857142857142;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.42857142857142855;
                result[4] += 0;
                result[5] += 0.5714285714285714;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05555555555555555;
                result[3] += 0.9444444444444444;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
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
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)104.5) ) ) {
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
                result[2] += 0.8181818181818182;
                result[3] += 0.14545454545454545;
                result[4] += 0;
                result[5] += 0.03636363636363636;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3125;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0.5625;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5714285714285714;
                result[3] += 0.3877551020408163;
                result[4] += 0.02040816326530612;
                result[5] += 0.02040816326530612;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
                result[0] += 0.09090909090909091;
                result[1] += 0;
                result[2] += 0.2727272727272727;
                result[3] += 0.18181818181818182;
                result[4] += 0;
                result[5] += 0.45454545454545453;
              } else {
                result[0] += 0.009404388714733543;
                result[1] += 0;
                result[2] += 0.896551724137931;
                result[3] += 0.08150470219435736;
                result[4] += 0;
                result[5] += 0.012539184952978056;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0.3333333333333333;
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)61) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0017152658662092624;
                result[1] += 0;
                result[2] += 0.9845626072041166;
                result[3] += 0.0137221269296741;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)48.5) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)64.5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)94) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)63.5) ) ) {
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
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0.4;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)68) ) ) {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8888888888888888;
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)119) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)52.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59) ) ) {
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)67) ) ) {
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
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)53.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.034482758620689655;
                result[2] += 0;
                result[3] += 0.06896551724137931;
                result[4] += 0.20689655172413793;
                result[5] += 0.6896551724137931;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0.1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4;
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
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0.0012033694344163659;
                result[2] += 0;
                result[3] += 0.018050541516245487;
                result[4] += 0.021660649819494584;
                result[5] += 0.9590854392298436;
              } else {
                result[0] += 0.01639344262295082;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.14754098360655737;
                result[4] += 0.18032786885245902;
                result[5] += 0.6557377049180327;
              }
            }
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.8;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
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
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.27586206896551724;
                result[4] += 0;
                result[5] += 0.7241379310344828;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.019230769230769232;
                result[3] += 0.6346153846153846;
                result[4] += 0.019230769230769232;
                result[5] += 0.3269230769230769;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.56;
                result[4] += 0;
                result[5] += 0.44;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9487179487179487;
                result[4] += 0;
                result[5] += 0.05128205128205128;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)110.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
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
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)44) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)43.5) ) ) {
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
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)62.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65.5) ) ) {
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
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)49.5) ) ) {
                result[0] += 0;
                result[1] += 0.8;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87) ) ) {
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)108) ) ) {
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)110) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54) ) ) {
                result[0] += 0.6388888888888888;
                result[1] += 0.3055555555555556;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.05555555555555555;
                result[5] += 0;
              } else {
                result[0] += 0.046875;
                result[1] += 0.015625;
                result[2] += 0;
                result[3] += 0.015625;
                result[4] += 0.78125;
                result[5] += 0.140625;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0.07692307692307693;
                result[2] += 0.3076923076923077;
                result[3] += 0.15384615384615385;
                result[4] += 0;
                result[5] += 0.46153846153846156;
              } else {
                result[0] += 0.9108910891089109;
                result[1] += 0.004500450045004501;
                result[2] += 0.009000900090009001;
                result[3] += 0.019801980198019802;
                result[4] += 0.046804680468046804;
                result[5] += 0.009000900090009001;
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)54.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5148514851485149;
                result[4] += 0.0297029702970297;
                result[5] += 0.45544554455445546;
              } else {
                result[0] += 0.14285714285714288;
                result[1] += 0;
                result[2] += 0.5714285714285715;
                result[3] += 0.28571428571428575;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)67) ) ) {
                result[0] += 0.8333333333333334;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.16666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0.058823529411764705;
                result[1] += 0;
                result[2] += 0.29411764705882354;
                result[3] += 0.058823529411764705;
                result[4] += 0.47058823529411764;
                result[5] += 0.11764705882352941;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0;
                result[4] += 0.9;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5645161290322581;
                result[4] += 0;
                result[5] += 0.43548387096774194;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.12121212121212122;
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0.7878787878787878;
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
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)103.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0.25;
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)46.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)114.5) ) ) {
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
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05555555555555555;
                result[3] += 0.1111111111111111;
                result[4] += 0.05555555555555555;
                result[5] += 0.7777777777777778;
              } else {
                result[0] += 0.07142857142857142;
                result[1] += 0;
                result[2] += 0.07142857142857142;
                result[3] += 0;
                result[4] += 0.7142857142857143;
                result[5] += 0.14285714285714285;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2328767123287671;
                result[3] += 0.6575342465753424;
                result[4] += 0.0410958904109589;
                result[5] += 0.0684931506849315;
              } else {
                result[0] += 0.02564102564102564;
                result[1] += 0;
                result[2] += 0.717948717948718;
                result[3] += 0.20512820512820512;
                result[4] += 0;
                result[5] += 0.05128205128205128;
              }
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8888888888888888;
                result[4] += 0;
                result[5] += 0.1111111111111111;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)72) ) ) {
                result[0] += 0.8;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.015706806282722512;
                result[1] += 0;
                result[2] += 0.8141361256544503;
                result[3] += 0.13612565445026178;
                result[4] += 0.002617801047120419;
                result[5] += 0.031413612565445025;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
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
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)61) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8260869565217391;
                result[3] += 0.17391304347826086;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9837728194726166;
                result[3] += 0.016227180527383367;
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
