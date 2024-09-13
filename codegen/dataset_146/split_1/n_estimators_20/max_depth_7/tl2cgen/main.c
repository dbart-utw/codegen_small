
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
  if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)95.5) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)52) ) ) {
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
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)73) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
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
              result[3] += 0;
              result[4] += 1;
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
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)55.5) ) ) {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)59) ) ) {
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)62) ) ) {
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
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)66.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.007541478129713424;
                result[4] += 0.013574660633484163;
                result[5] += 0.9788838612368024;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2608695652173913;
                result[4] += 0.043478260869565216;
                result[5] += 0.6956521739130435;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0.20833333333333334;
                result[2] += 0;
                result[3] += 0.14583333333333334;
                result[4] += 0.4583333333333333;
                result[5] += 0.1875;
              } else {
                result[0] += 0.0035335689045936395;
                result[1] += 0.0035335689045936395;
                result[2] += 0.007067137809187279;
                result[3] += 0.14487632508833923;
                result[4] += 0.02120141342756184;
                result[5] += 0.8197879858657244;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)90) ) ) {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)80) ) ) {
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
                result[3] += 0.9142857142857143;
                result[4] += 0;
                result[5] += 0.08571428571428572;
              }
            } else {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
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
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0136986301369863;
                result[3] += 0.3424657534246575;
                result[4] += 0;
                result[5] += 0.6438356164383562;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0.25;
              }
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
                result[0] += 0.8333333333333334;
                result[1] += 0.16666666666666666;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.4;
                result[4] += 0.2;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
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
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)34.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
                result[0] += 0.023076923076923078;
                result[1] += 0.015384615384615385;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9384615384615385;
                result[5] += 0.023076923076923078;
              } else {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              }
            }
          } else {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
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
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)55.5) ) ) {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)92.5) ) ) {
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
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)99.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)56.5) ) ) {
                result[0] += 0;
                result[1] += 0.6666666666666666;
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
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)61) ) ) {
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
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0.04;
                result[2] += 0;
                result[3] += 0.04;
                result[4] += 0.28;
                result[5] += 0.64;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0.25;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)63) ) ) {
                result[0] += 0.8688524590163934;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.09836065573770492;
                result[5] += 0.03278688524590164;
              } else {
                result[0] += 0;
                result[1] += 0.037037037037037035;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0.5555555555555556;
                result[5] += 0.07407407407407407;
              }
            } else {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
                result[0] += 0.9463894967177244;
                result[1] += 0.009846827133479214;
                result[2] += 0;
                result[3] += 0.008752735229759301;
                result[4] += 0.03282275711159738;
                result[5] += 0.0021881838074398253;
              } else {
                result[0] += 0;
                result[1] += 0.125;
                result[2] += 0.625;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)84.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)67) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.044444444444444446;
                result[4] += 0;
                result[5] += 0.9555555555555556;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.28571428571428575;
                result[4] += 0.4285714285714286;
                result[5] += 0.28571428571428575;
              }
            } else {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.647887323943662;
                result[4] += 0.08450704225352113;
                result[5] += 0.2676056338028169;
              } else {
                result[0] += 0.08823529411764706;
                result[1] += 0.058823529411764705;
                result[2] += 0.38235294117647056;
                result[3] += 0.08823529411764706;
                result[4] += 0.11764705882352941;
                result[5] += 0.2647058823529412;
              }
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)94) ) ) {
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
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9487179487179487;
                result[1] += 0;
                result[2] += 0.02564102564102564;
                result[3] += 0;
                result[4] += 0.02564102564102564;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)88) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0.13333333333333333;
                result[2] += 0.3333333333333333;
                result[3] += 0.06666666666666667;
                result[4] += 0.4;
                result[5] += 0.06666666666666667;
              } else {
                result[0] += 0.012195121951219513;
                result[1] += 0.012195121951219513;
                result[2] += 0.012195121951219513;
                result[3] += 0.24390243902439024;
                result[4] += 0.04878048780487805;
                result[5] += 0.6707317073170732;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)72) ) ) {
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
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.15384615384615385;
                result[3] += 0.8153846153846154;
                result[4] += 0;
                result[5] += 0.03076923076923077;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
                result[0] += 0.1;
                result[1] += 0;
                result[2] += 0.15;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0.65;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4222222222222222;
                result[3] += 0.5111111111111111;
                result[4] += 0;
                result[5] += 0.06666666666666667;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)97) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)79.5) ) ) {
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
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.8;
              } else {
                result[0] += 0.023809523809523808;
                result[1] += 0;
                result[2] += 0.8571428571428571;
                result[3] += 0.11904761904761904;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)80.5) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.84;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0.02;
                result[4] += 0.04;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
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
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)85) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0625;
                result[3] += 0.9375;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5714285714285714;
                result[3] += 0.42857142857142855;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)97) ) ) {
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
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7058823529411765;
                result[3] += 0.29411764705882354;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9705882352941176;
                result[3] += 0.029411764705882353;
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
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.36363636363636365;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6363636363636364;
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
                result[2] += 0.6;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.4;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.905940594059406;
                result[3] += 0.08168316831683169;
                result[4] += 0;
                result[5] += 0.012376237623762377;
              }
            }
          } else {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)79) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.002386634844868735;
                result[1] += 0;
                result[2] += 0.9928400954653938;
                result[3] += 0.002386634844868735;
                result[4] += 0;
                result[5] += 0.002386634844868735;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
          if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)98) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)90.5) ) ) {
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
                result[4] += 0.625;
                result[5] += 0.375;
              }
            } else {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)61.5) ) ) {
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
                result[3] += 0;
                result[4] += 0.9375;
                result[5] += 0.0625;
              }
            }
          } else {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
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
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
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
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)63.5) ) ) {
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
                result[4] += 0.05128205128205128;
                result[5] += 0.9487179487179487;
              }
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)53) ) ) {
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
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
                result[0] += 1;
                result[1] += 0;
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
          }
        }
      } else {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
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
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          } else {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)78) ) ) {
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
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
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
                result[3] += 0.0192;
                result[4] += 0.0016;
                result[5] += 0.9792;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
            if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.030303030303030304;
                result[4] += 0.8181818181818182;
                result[5] += 0.15151515151515152;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.010638297872340425;
                result[3] += 0.16489361702127658;
                result[4] += 0.0797872340425532;
                result[5] += 0.7446808510638298;
              }
            } else {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)90) ) ) {
                result[0] += 0.021276595744680854;
                result[1] += 0.04255319148936171;
                result[2] += 0.04255319148936171;
                result[3] += 0.6808510638297873;
                result[4] += 0.08510638297872342;
                result[5] += 0.12765957446808512;
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
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)80) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)92) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07142857142857142;
                result[4] += 0.07142857142857142;
                result[5] += 0.8571428571428571;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)65.5) ) ) {
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
                result[3] += 0.896551724137931;
                result[4] += 0;
                result[5] += 0.10344827586206896;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)55.5) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
                result[0] += 0.05;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0.65;
                result[5] += 0.2;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0.047058823529411764;
                result[2] += 0;
                result[3] += 0.16470588235294117;
                result[4] += 0.058823529411764705;
                result[5] += 0.7294117647058823;
              } else {
                result[0] += 0;
                result[1] += 0.041666666666666664;
                result[2] += 0.11458333333333333;
                result[3] += 0.3645833333333333;
                result[4] += 0.03125;
                result[5] += 0.4479166666666667;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)42.5) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)82) ) ) {
                result[0] += 0.027777777777777776;
                result[1] += 0.9722222222222222;
                result[2] += 0;
                result[3] += 0;
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
            } else {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)98) ) ) {
                result[0] += 0.12396694214876033;
                result[1] += 0.01652892561983471;
                result[2] += 0;
                result[3] += 0.03305785123966942;
                result[4] += 0.8181818181818182;
                result[5] += 0.008264462809917356;
              } else {
                result[0] += 0.0625;
                result[1] += 0.9375;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)69) ) ) {
                result[0] += 0.23333333333333334;
                result[1] += 0.26666666666666666;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0.945;
                result[1] += 0;
                result[2] += 0.009;
                result[3] += 0.016;
                result[4] += 0.024;
                result[5] += 0.006;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
                result[0] += 0.12244897959183676;
                result[1] += 0.020408163265306124;
                result[2] += 0;
                result[3] += 0.5510204081632654;
                result[4] += 0.06122448979591838;
                result[5] += 0.24489795918367352;
              } else {
                result[0] += 0.6134453781512605;
                result[1] += 0;
                result[2] += 0.2689075630252101;
                result[3] += 0.05042016806722689;
                result[4] += 0.04201680672268908;
                result[5] += 0.025210084033613446;
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
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
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
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
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
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.25;
                result[1] += 0.25;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0.05555555555555555;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0.05555555555555555;
                result[5] += 0.2222222222222222;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.56;
                result[4] += 0;
                result[5] += 0.44;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.04651162790697675;
                result[3] += 0.9069767441860466;
                result[4] += 0;
                result[5] += 0.04651162790697675;
              }
            }
          } else {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
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
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
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
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.045454545454545456;
                result[3] += 0.8181818181818182;
                result[4] += 0;
                result[5] += 0.13636363636363635;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4782608695652174;
                result[3] += 0.34782608695652173;
                result[4] += 0;
                result[5] += 0.17391304347826086;
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
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)79) ) ) {
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
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9122807017543859;
                result[3] += 0.08771929824561403;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)72.5) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
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
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.0625;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9375;
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
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)100.5) ) ) {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)102.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0625;
                result[3] += 0.8125;
                result[4] += 0.125;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)110.5) ) ) {
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
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)81) ) ) {
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
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.773972602739726;
                result[3] += 0.2191780821917808;
                result[4] += 0;
                result[5] += 0.00684931506849315;
              } else {
                result[0] += 0.024390243902439025;
                result[1] += 0;
                result[2] += 0.926829268292683;
                result[3] += 0.024390243902439025;
                result[4] += 0.024390243902439025;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
            if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)118) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9523809523809524;
                result[3] += 0.009523809523809526;
                result[4] += 0;
                result[5] += 0.038095238095238106;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8461538461538461;
                result[3] += 0.15384615384615385;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94) ) ) {
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
            }
          } else {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)89.5) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.949238578680203;
                result[3] += 0.050761421319796954;
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
  if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)48.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
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
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.06451612903225808;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8064516129032259;
                result[5] += 0.12903225806451615;
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
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)57.5) ) ) {
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
            if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
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
                result[4] += 0.5;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
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
                result[3] += 0.35714285714285715;
                result[4] += 0.6428571428571429;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)58.5) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)70.5) ) ) {
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
                result[4] += 0.95;
                result[5] += 0.05;
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
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)76.5) ) ) {
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
                result[3] += 0.5384615384615384;
                result[4] += 0.46153846153846156;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.007541478129713424;
                result[4] += 0.01809954751131222;
                result[5] += 0.9743589743589743;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0.03333333333333333;
                result[5] += 0.7666666666666667;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.018867924528301886;
                result[2] += 0;
                result[3] += 0.018867924528301886;
                result[4] += 0.09433962264150944;
                result[5] += 0.8679245283018868;
              } else {
                result[0] += 0.007751937984496124;
                result[1] += 0;
                result[2] += 0.023255813953488372;
                result[3] += 0.32558139534883723;
                result[4] += 0.023255813953488372;
                result[5] += 0.6201550387596899;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)64) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.23529411764705882;
                result[3] += 0.5294117647058824;
                result[4] += 0.058823529411764705;
                result[5] += 0.17647058823529413;
              } else {
                result[0] += 0.012195121951219513;
                result[1] += 0.0975609756097561;
                result[2] += 0.012195121951219513;
                result[3] += 0.10975609756097561;
                result[4] += 0.12195121951219512;
                result[5] += 0.6463414634146342;
              }
            } else {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7962962962962963;
                result[4] += 0;
                result[5] += 0.2037037037037037;
              } else {
                result[0] += 0.15217391304347827;
                result[1] += 0;
                result[2] += 0.391304347826087;
                result[3] += 0.15217391304347827;
                result[4] += 0;
                result[5] += 0.30434782608695654;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)97) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)44.5) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)96) ) ) {
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
            } else {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
                result[0] += 0.06896551724137931;
                result[1] += 0.011494252873563218;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9195402298850575;
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
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)86) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)94) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8333333333333334;
                result[5] += 0.16666666666666666;
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
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)99.5) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)97.5) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)51) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.16666666666666666;
                result[1] += 0.16666666666666666;
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
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)89) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)54.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.022222222222222223;
                result[2] += 0;
                result[3] += 0.06666666666666667;
                result[4] += 0.044444444444444446;
                result[5] += 0.8666666666666667;
              }
            }
          } else {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)58.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.6666666666666666;
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
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
                result[0] += 0.047619047619047616;
                result[1] += 0.5238095238095238;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.42857142857142855;
                result[5] += 0;
              } else {
                result[0] += 0.9592850049652433;
                result[1] += 0.0009930486593843098;
                result[2] += 0.005958291956305859;
                result[3] += 0.006951340615690168;
                result[4] += 0.023833167825223437;
                result[5] += 0.0029791459781529296;
              }
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
                result[0] += 0.08823529411764706;
                result[1] += 0;
                result[2] += 0.029411764705882353;
                result[3] += 0.38235294117647056;
                result[4] += 0.35294117647058826;
                result[5] += 0.14705882352941177;
              } else {
                result[0] += 0.8888888888888888;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)88.5) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)55) ) ) {
                result[0] += 0;
                result[1] += 0.9285714285714286;
                result[2] += 0.07142857142857142;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.04838709677419355;
                result[1] += 0;
                result[2] += 0.25806451612903225;
                result[3] += 0.3225806451612903;
                result[4] += 0;
                result[5] += 0.3709677419354839;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0;
                result[4] += 0.16666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0.58;
                result[1] += 0;
                result[2] += 0.42;
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
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)69.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)84) ) ) {
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
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)109) ) ) {
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
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
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
            if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)116) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.016666666666666666;
                result[3] += 0.016666666666666666;
                result[4] += 0;
                result[5] += 0.9666666666666667;
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
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)87) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.012658227848101267;
                result[2] += 0.10126582278481014;
                result[3] += 0.6202531645569621;
                result[4] += 0;
                result[5] += 0.2658227848101266;
              }
            }
          } else {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
                result[0] += 0.4;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0.4;
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
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
            if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
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
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)102.5) ) ) {
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
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)98) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
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
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
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
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)104) ) ) {
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
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)79) ) ) {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)112.5) ) ) {
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
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)99.5) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.625;
                result[4] += 0;
                result[5] += 0.125;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9166666666666666;
                result[3] += 0.058333333333333334;
                result[4] += 0;
                result[5] += 0.025;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.52;
                result[3] += 0.48;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.017857142857142856;
                result[1] += 0;
                result[2] += 0.7946428571428571;
                result[3] += 0.17857142857142858;
                result[4] += 0;
                result[5] += 0.008928571428571428;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.16666666666666666;
              }
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
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
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)103.5) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7777777777777778;
                result[3] += 0.2222222222222222;
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
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
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
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)117.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.971830985915493;
                result[3] += 0.028169014084507043;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.76;
                result[3] += 0.24;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9090909090909091;
                result[3] += 0.09090909090909091;
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
  if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)45) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)65.5) ) ) {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)106) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.98989898989899;
                result[5] += 0.010101010101010102;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0.6666666666666666;
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
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)75) ) ) {
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
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)95) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.8;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)76) ) ) {
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
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)81) ) ) {
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
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)58) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)62.5) ) ) {
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
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.03571428571428571;
                result[5] += 0.9642857142857143;
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
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
        if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)59) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
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
                result[4] += 0.8;
                result[5] += 0.2;
              }
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
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
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)77) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73) ) ) {
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
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.96;
                result[5] += 0.04;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0.3333333333333333;
              }
            } else {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)62) ) ) {
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
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.009508716323296355;
                result[4] += 0.001584786053882726;
                result[5] += 0.9889064976228209;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3;
                result[4] += 0.02;
                result[5] += 0.68;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0.03875968992248062;
                result[2] += 0;
                result[3] += 0.2248062015503876;
                result[4] += 0.23255813953488372;
                result[5] += 0.5038759689922481;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.007633587786259542;
                result[3] += 0.1297709923664122;
                result[4] += 0.0648854961832061;
                result[5] += 0.7977099236641222;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
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
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
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
                result[3] += 0.9891304347826086;
                result[4] += 0;
                result[5] += 0.010869565217391304;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)108) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08333333333333333;
                result[4] += 0;
                result[5] += 0.9166666666666666;
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)92.5) ) ) {
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
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)86.5) ) ) {
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
                result[3] += 0.78125;
                result[4] += 0;
                result[5] += 0.21875;
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
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)54.5) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
        if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)55) ) ) {
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
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)100) ) ) {
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
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)40) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
                result[0] += 0.3142857142857143;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5428571428571428;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0.010309278350515464;
                result[1] += 0.010309278350515464;
                result[2] += 0;
                result[3] += 0.010309278350515464;
                result[4] += 0.9690721649484536;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.6666666666666666;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0.96;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.04;
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
          }
        } else {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)111.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
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
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
                result[0] += 0.3;
                result[1] += 0.4;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3;
                result[5] += 0;
              } else {
                result[0] += 0.9485657764589516;
                result[1] += 0.002967359050445104;
                result[2] += 0;
                result[3] += 0.012858555885262116;
                result[4] += 0.028684470820969338;
                result[5] += 0.006923837784371909;
              }
            }
          } else {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6875;
                result[4] += 0;
                result[5] += 0.3125;
              } else {
                result[0] += 0.08571428571428572;
                result[1] += 0.14285714285714285;
                result[2] += 0.014285714285714285;
                result[3] += 0.14285714285714285;
                result[4] += 0.18571428571428572;
                result[5] += 0.42857142857142855;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)96) ) ) {
                result[0] += 0.05;
                result[1] += 0;
                result[2] += 0.7;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.05;
              } else {
                result[0] += 0.9347826086956522;
                result[1] += 0;
                result[2] += 0.021739130434782608;
                result[3] += 0;
                result[4] += 0.043478260869565216;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0.05263157894736842;
                result[2] += 0.15789473684210525;
                result[3] += 0.15789473684210525;
                result[4] += 0;
                result[5] += 0.631578947368421;
              } else {
                result[0] += 0;
                result[1] += 0.007692307692307693;
                result[2] += 0.17692307692307693;
                result[3] += 0.6615384615384615;
                result[4] += 0.03076923076923077;
                result[5] += 0.12307692307692308;
              }
            } else {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
                result[0] += 0.028985507246376812;
                result[1] += 0;
                result[2] += 0.6521739130434783;
                result[3] += 0.18840579710144928;
                result[4] += 0.014492753623188406;
                result[5] += 0.11594202898550725;
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
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.20000000000000004;
                result[3] += 0.7000000000000001;
                result[4] += 0;
                result[5] += 0.10000000000000002;
              } else {
                result[0] += 0.03070175438596491;
                result[1] += 0;
                result[2] += 0.8552631578947368;
                result[3] += 0.07894736842105263;
                result[4] += 0;
                result[5] += 0.03508771929824561;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
                result[0] += 0.7450980392156863;
                result[1] += 0;
                result[2] += 0.23529411764705882;
                result[3] += 0.0196078431372549;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.07692307692307693;
                result[1] += 0;
                result[2] += 0.9230769230769231;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)73) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3;
                result[3] += 0.7;
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
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
                result[0] += 0.09090909090909091;
                result[1] += 0;
                result[2] += 0.36363636363636365;
                result[3] += 0.5454545454545454;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9090909090909091;
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7647058823529411;
                result[3] += 0.23529411764705882;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9790322580645161;
                result[3] += 0.020967741935483872;
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
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8947368421052632;
                result[5] += 0.10526315789473684;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4146341463414634;
                result[5] += 0.5853658536585366;
              }
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)66) ) ) {
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
          }
        } else {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)62) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)106) ) ) {
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
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)74.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
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
        }
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.23529411764705882;
                result[5] += 0.7647058823529411;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6;
                result[4] += 0.4;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)64.5) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)62) ) ) {
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
                result[3] += 0.013422818791946308;
                result[4] += 0.0016778523489932886;
                result[5] += 0.9848993288590604;
              }
            } else {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06763285024154589;
                result[4] += 0.06763285024154589;
                result[5] += 0.8647342995169082;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.26666666666666666;
                result[4] += 0.05333333333333334;
                result[5] += 0.68;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.01818181818181818;
                result[4] += 0.09090909090909091;
                result[5] += 0.8909090909090909;
              } else {
                result[0] += 0.02;
                result[1] += 0.01;
                result[2] += 0;
                result[3] += 0.4;
                result[4] += 0.1;
                result[5] += 0.47;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
                result[0] += 0;
                result[1] += 0.6666666666666666;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.8333333333333334;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.05555555555555555;
                result[5] += 0.1111111111111111;
              }
            }
          } else {
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0.006756756756756757;
                result[2] += 0;
                result[3] += 0.9324324324324325;
                result[4] += 0;
                result[5] += 0.060810810810810814;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0.8333333333333334;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0.08333333333333333;
                result[2] += 0;
                result[3] += 0.5833333333333334;
                result[4] += 0.25;
                result[5] += 0.08333333333333333;
              } else {
                result[0] += 0.125;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.20833333333333334;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)44) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0.7142857142857143;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2857142857142857;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9814814814814815;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.018518518518518517;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)68.5) ) ) {
                result[0] += 0;
                result[1] += 0.09090909090909091;
                result[2] += 0;
                result[3] += 0.18181818181818182;
                result[4] += 0.18181818181818182;
                result[5] += 0.5454545454545454;
              } else {
                result[0] += 0.050505050505050504;
                result[1] += 0.0707070707070707;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8787878787878788;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
                result[0] += 0.18181818181818182;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8181818181818182;
                result[5] += 0;
              } else {
                result[0] += 0.05;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.45;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
                result[0] += 0.37037037037037035;
                result[1] += 0.07407407407407407;
                result[2] += 0;
                result[3] += 0.07407407407407407;
                result[4] += 0.07407407407407407;
                result[5] += 0.4074074074074074;
              } else {
                result[0] += 0.9401709401709402;
                result[1] += 0.000949667616334283;
                result[2] += 0;
                result[3] += 0.017094017094017096;
                result[4] += 0.030389363722697058;
                result[5] += 0.011396011396011397;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)57) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.037037037037037035;
                result[3] += 0.2222222222222222;
                result[4] += 0.5555555555555556;
                result[5] += 0.18518518518518517;
              }
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.17142857142857143;
                result[4] += 0.05714285714285714;
                result[5] += 0.7714285714285715;
              } else {
                result[0] += 0.017094017094017096;
                result[1] += 0.008547008547008548;
                result[2] += 0.08547008547008547;
                result[3] += 0.6581196581196581;
                result[4] += 0.02564102564102564;
                result[5] += 0.20512820512820512;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)109.5) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
                result[0] += 0.1627906976744186;
                result[1] += 0.0697674418604651;
                result[2] += 0.30232558139534876;
                result[3] += 0.15116279069767438;
                result[4] += 0.1395348837209302;
                result[5] += 0.17441860465116277;
              } else {
                result[0] += 0.047619047619047616;
                result[1] += 0;
                result[2] += 0.7976190476190477;
                result[3] += 0.09523809523809523;
                result[4] += 0;
                result[5] += 0.05952380952380952;
              }
            } else {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)77.5) ) ) {
                result[0] += 0.8103448275862069;
                result[1] += 0.08620689655172414;
                result[2] += 0.06896551724137931;
                result[3] += 0;
                result[4] += 0.034482758620689655;
                result[5] += 0;
              } else {
                result[0] += 0.20000000000000004;
                result[1] += 0;
                result[2] += 0.7000000000000001;
                result[3] += 0;
                result[4] += 0.10000000000000002;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)97) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)98.5) ) ) {
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
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
      if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)102.5) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)94.5) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.14285714285714285;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8571428571428571;
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)80.5) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)71) ) ) {
            if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)94.5) ) ) {
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
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)85.5) ) ) {
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
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
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
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)81) ) ) {
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
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)99.5) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)102.5) ) ) {
                result[0] += 0.07792207792207792;
                result[1] += 0;
                result[2] += 0.6363636363636364;
                result[3] += 0.18181818181818182;
                result[4] += 0;
                result[5] += 0.1038961038961039;
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
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.868421052631579;
                result[3] += 0.11578947368421053;
                result[4] += 0;
                result[5] += 0.015789473684210527;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4761904761904762;
                result[3] += 0.4285714285714286;
                result[4] += 0;
                result[5] += 0.09523809523809525;
              }
            } else {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9645868465430016;
                result[3] += 0.03541315345699832;
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
    if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)45) ) ) {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
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
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
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
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0.8;
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
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)59) ) ) {
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
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)71) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.696969696969697;
                result[5] += 0.30303030303030304;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
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
            }
          } else {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.003669724770642202;
                result[4] += 0.001834862385321101;
                result[5] += 0.9944954128440368;
              } else {
                result[0] += 0.0041841004184100415;
                result[1] += 0.008368200836820083;
                result[2] += 0;
                result[3] += 0.100418410041841;
                result[4] += 0.05439330543933055;
                result[5] += 0.8326359832635983;
              }
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
                result[0] += 0.38461538461538464;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.46153846153846156;
                result[5] += 0.15384615384615385;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3170731707317073;
                result[4] += 0.024390243902439025;
                result[5] += 0.6585365853658537;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)65.5) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.875;
                result[1] += 0.08333333333333333;
                result[2] += 0;
                result[3] += 0.041666666666666664;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0.2857142857142857;
                result[2] += 0.14285714285714285;
                result[3] += 0.21428571428571427;
                result[4] += 0.35714285714285715;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.027777777777777776;
                result[2] += 0.05555555555555555;
                result[3] += 0.16666666666666666;
                result[4] += 0.06944444444444445;
                result[5] += 0.6805555555555556;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)64.5) ) ) {
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
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0.005347593582887701;
                result[2] += 0.010695187165775402;
                result[3] += 0.823529411764706;
                result[4] += 0;
                result[5] += 0.16042780748663105;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4482758620689655;
                result[3] += 0.13793103448275862;
                result[4] += 0;
                result[5] += 0.41379310344827586;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)55.5) ) ) {
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
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)52) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.058823529411764705;
                result[4] += 0.9411764705882353;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.7;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.3;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)102) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)98) ) ) {
                result[0] += 0.04918032786885246;
                result[1] += 0.01639344262295082;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9180327868852459;
                result[5] += 0.01639344262295082;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0.08333333333333333;
                result[5] += 0.4166666666666667;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0.9565217391304348;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.043478260869565216;
                result[5] += 0;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
                result[0] += 0.7494033412887828;
                result[1] += 0.014319809069212411;
                result[2] += 0;
                result[3] += 0.0405727923627685;
                result[4] += 0.15274463007159905;
                result[5] += 0.04295942720763723;
              } else {
                result[0] += 0.9878682842287695;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0017331022530329288;
                result[4] += 0.010398613518197574;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0.010309278350515464;
                result[2] += 0.13402061855670103;
                result[3] += 0.14432989690721648;
                result[4] += 0.12371134020618557;
                result[5] += 0.5876288659793815;
              } else {
                result[0] += 0.6976744186046512;
                result[1] += 0;
                result[2] += 0.023255813953488372;
                result[3] += 0.046511627906976744;
                result[4] += 0.20930232558139536;
                result[5] += 0.023255813953488372;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
                result[0] += 0.008695652173913044;
                result[1] += 0.0782608695652174;
                result[2] += 0.008695652173913044;
                result[3] += 0.30434782608695654;
                result[4] += 0.11304347826086956;
                result[5] += 0.48695652173913045;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.088;
                result[3] += 0.656;
                result[4] += 0.024;
                result[5] += 0.232;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.6315789473684211;
                result[1] += 0;
                result[2] += 0.052631578947368425;
                result[3] += 0;
                result[4] += 0.31578947368421056;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
              if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)82) ) ) {
                result[0] += 0.9873417721518988;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.012658227848101266;
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
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)121) ) ) {
                result[0] += 0.10227272727272728;
                result[1] += 0;
                result[2] += 0.7386363636363636;
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0.06818181818181818;
              } else {
                result[0] += 0.6315789473684211;
                result[1] += 0;
                result[2] += 0.052631578947368425;
                result[3] += 0.10526315789473685;
                result[4] += 0.2105263157894737;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)81.5) ) ) {
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
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8888888888888888;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)73) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)76) ) ) {
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
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)93.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.803921568627451;
                result[3] += 0.13725490196078433;
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
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
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
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)97) ) ) {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)83) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)105) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)76.5) ) ) {
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
                result[3] += 0.8;
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
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)89) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)85.5) ) ) {
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
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
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
            if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.025;
                result[1] += 0;
                result[2] += 0.7;
                result[3] += 0.275;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9761904761904762;
                result[3] += 0.023809523809523808;
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
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)96) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
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
              if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
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
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9787234042553191;
                result[3] += 0.02127659574468085;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.825;
                result[3] += 0.175;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
                result[0] += 0.125;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.125;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9801526717557252;
                result[3] += 0.01984732824427481;
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
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
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
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)51.5) ) ) {
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
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)67.5) ) ) {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0.041666666666666664;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.20833333333333334;
                result[5] += 0.75;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2857142857142857;
                result[4] += 0.7142857142857143;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)83.5) ) ) {
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
        }
      } else {
        if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)63) ) ) {
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
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
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
                result[3] += 0.0052173913043478265;
                result[4] += 0.0034782608695652175;
                result[5] += 0.991304347826087;
              }
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.09345794392523364;
                result[2] += 0;
                result[3] += 0.037383177570093455;
                result[4] += 0.037383177570093455;
                result[5] += 0.8317757009345794;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.13846153846153847;
                result[3] += 0.46153846153846156;
                result[4] += 0.015384615384615385;
                result[5] += 0.38461538461538464;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
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
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.2;
                result[1] += 0.8;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0.006666666666666667;
                result[2] += 0;
                result[3] += 0.05333333333333334;
                result[4] += 0.09333333333333334;
                result[5] += 0.8466666666666667;
              } else {
                result[0] += 0;
                result[1] += 0.015384615384615385;
                result[2] += 0;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0.5846153846153846;
              }
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)82) ) ) {
                result[0] += 0.013513513513513514;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.14864864864864866;
                result[4] += 0.32432432432432434;
                result[5] += 0.5135135135135135;
              } else {
                result[0] += 0.00546448087431694;
                result[1] += 0.01639344262295082;
                result[2] += 0;
                result[3] += 0.7431693989071039;
                result[4] += 0.01639344262295082;
                result[5] += 0.2185792349726776;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)100) ) ) {
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
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)111) ) ) {
            if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
                result[0] += 0.047619047619047616;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9523809523809523;
                result[5] += 0;
              } else {
                result[0] += 0.05555555555555555;
                result[1] += 0.1111111111111111;
                result[2] += 0;
                result[3] += 0.05555555555555555;
                result[4] += 0.6111111111111112;
                result[5] += 0.16666666666666666;
              }
            } else {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)102) ) ) {
                result[0] += 0.08333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9166666666666666;
                result[5] += 0;
              } else {
                result[0] += 0.08000000000000002;
                result[1] += 0.6400000000000001;
                result[2] += 0;
                result[3] += 0.20000000000000004;
                result[4] += 0.08000000000000002;
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
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)102) ) ) {
                result[0] += 0.32;
                result[1] += 0.08;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.52;
                result[5] += 0.08;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
                result[0] += 0.9245454545454547;
                result[1] += 0.006363636363636365;
                result[2] += 0.004545454545454546;
                result[3] += 0.009090909090909092;
                result[4] += 0.04363636363636365;
                result[5] += 0.01181818181818182;
              } else {
                result[0] += 0.30000000000000004;
                result[1] += 0;
                result[2] += 0.33333333333333337;
                result[3] += 0.20000000000000004;
                result[4] += 0.16666666666666669;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)113.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
                result[0] += 0.017921146953405017;
                result[1] += 0.021505376344086023;
                result[2] += 0.06451612903225806;
                result[3] += 0.37992831541218636;
                result[4] += 0.06810035842293907;
                result[5] += 0.44802867383512546;
              } else {
                result[0] += 0.05102040816326531;
                result[1] += 0.02040816326530612;
                result[2] += 0.6530612244897959;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0.1326530612244898;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)96) ) ) {
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
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)88) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)85) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)65.5) ) ) {
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
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)71.5) ) ) {
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
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.075;
                result[3] += 0.8;
                result[4] += 0;
                result[5] += 0.125;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0.1;
              } else {
                result[0] += 0.045454545454545456;
                result[1] += 0;
                result[2] += 0.2727272727272727;
                result[3] += 0.6363636363636364;
                result[4] += 0;
                result[5] += 0.045454545454545456;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)89) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
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
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)86.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)101.5) ) ) {
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
        if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)109.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
            if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)79) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0.875;
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
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)112.5) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7384615384615385;
                result[3] += 0.2153846153846154;
                result[4] += 0;
                result[5] += 0.046153846153846156;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.42857142857142855;
                result[3] += 0.5714285714285714;
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
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)130) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.01020408163265306;
                result[1] += 0;
                result[2] += 0.9489795918367347;
                result[3] += 0.04081632653061224;
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
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)113) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)107.5) ) ) {
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
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)103.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8787878787878788;
                result[3] += 0.12121212121212122;
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
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)89.5) ) ) {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)119) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.975609756097561;
                result[3] += 0.024390243902439025;
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
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)116.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)78.5) ) ) {
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
                result[4] += 0.9655172413793104;
                result[5] += 0.034482758620689655;
              }
            } else {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)62) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8421052631578947;
                result[5] += 0.15789473684210525;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
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
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)59) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)68.5) ) ) {
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
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)103.5) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
                result[0] += 0.0029455081001472753;
                result[1] += 0.0014727540500736377;
                result[2] += 0;
                result[3] += 0.026509572901325478;
                result[4] += 0.016200294550810016;
                result[5] += 0.9528718703976435;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2727272727272727;
                result[4] += 0.06060606060606061;
                result[5] += 0.6666666666666666;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)90.5) ) ) {
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
            }
          }
        } else {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)59) ) ) {
                result[0] += 0;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0.5;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)66.5) ) ) {
                result[0] += 0.023809523809523808;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.09523809523809523;
                result[4] += 0.5;
                result[5] += 0.38095238095238093;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1943127962085308;
                result[4] += 0.05687203791469194;
                result[5] += 0.7488151658767772;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6;
                result[4] += 0.4;
                result[5] += 0;
              } else {
                result[0] += 0.017241379310344827;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.15517241379310345;
                result[4] += 0;
                result[5] += 0.8275862068965517;
              }
            } else {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0.015384615384615385;
                result[2] += 0;
                result[3] += 0.8769230769230769;
                result[4] += 0;
                result[5] += 0.1076923076923077;
              } else {
                result[0] += 0.125;
                result[1] += 0.125;
                result[2] += 0.0625;
                result[3] += 0.0625;
                result[4] += 0;
                result[5] += 0.625;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)45) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)46.5) ) ) {
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
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)122) ) ) {
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
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)112.5) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)85) ) ) {
                result[0] += 0.014492753623188406;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9855072463768116;
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
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
                result[0] += 0.08333333333333333;
                result[1] += 0.08333333333333333;
                result[2] += 0.16666666666666666;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.8666666666666667;
                result[2] += 0;
                result[3] += 0.13333333333333333;
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
        if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)51) ) ) {
                result[0] += 0;
                result[1] += 0.8571428571428571;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0;
              } else {
                result[0] += 0.041666666666666664;
                result[1] += 0.041666666666666664;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.875;
                result[5] += 0.041666666666666664;
              }
            } else {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0.2222222222222222;
                result[4] += 0.5555555555555556;
                result[5] += 0;
              } else {
                result[0] += 0.9422382671480144;
                result[1] += 0;
                result[2] += 0.0036101083032490976;
                result[3] += 0.0036101083032490976;
                result[4] += 0.036101083032490974;
                result[5] += 0.01444043321299639;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)95) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0.05333333333333334;
                result[2] += 0.013333333333333334;
                result[3] += 0.12;
                result[4] += 0.48;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0.03773584905660377;
                result[1] += 0;
                result[2] += 0.09433962264150944;
                result[3] += 0.49433962264150944;
                result[4] += 0.04150943396226415;
                result[5] += 0.3320754716981132;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)61) ) ) {
                result[0] += 0;
                result[1] += 0.9629629629629629;
                result[2] += 0;
                result[3] += 0.037037037037037035;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.5;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)104) ) ) {
              if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)88.5) ) ) {
                result[0] += 0.1388888888888889;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8055555555555556;
                result[5] += 0.05555555555555555;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
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
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
                result[0] += 0.9633649932157395;
                result[1] += 0.00135685210312076;
                result[2] += 0;
                result[3] += 0.0067842605156038;
                result[4] += 0.02849389416553596;
                result[5] += 0;
              } else {
                result[0] += 0.6111111111111112;
                result[1] += 0;
                result[2] += 0.06666666666666667;
                result[3] += 0.08888888888888889;
                result[4] += 0.15555555555555556;
                result[5] += 0.07777777777777778;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
                result[0] += 0.6944444444444444;
                result[1] += 0.027777777777777776;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0.027777777777777776;
                result[5] += 0;
              } else {
                result[0] += 0.02;
                result[1] += 0;
                result[2] += 0.64;
                result[3] += 0.06;
                result[4] += 0.02;
                result[5] += 0.26;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
            if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
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
                result[3] += 0.7936507936507936;
                result[4] += 0;
                result[5] += 0.12698412698412698;
              }
            } else {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)82) ) ) {
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
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)92.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9090909090909091;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.09090909090909091;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)86) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06666666666666667;
                result[3] += 0.9333333333333333;
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)86) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8947368421052632;
                result[3] += 0.07894736842105263;
                result[4] += 0;
                result[5] += 0.02631578947368421;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.75;
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
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)81) ) ) {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5555555555555556;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.1111111111111111;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9473684210526315;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.05263157894736842;
              }
            } else {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.08333333333333333;
                result[3] += 0.9166666666666666;
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
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)122.5) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)88.5) ) ) {
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
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)112) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8571428571428571;
                result[3] += 0.09523809523809523;
                result[4] += 0;
                result[5] += 0.047619047619047616;
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
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)105) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)98) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9559471365638766;
                result[3] += 0.030837004405286344;
                result[4] += 0;
                result[5] += 0.013215859030837005;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.020833333333333332;
                result[1] += 0;
                result[2] += 0.7916666666666666;
                result[3] += 0.1875;
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
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)95.5) ) ) {
            if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)87) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
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
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)84) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)98) ) ) {
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
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9714285714285714;
                result[3] += 0.02857142857142857;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9977973568281938;
                result[3] += 0.0022026431718061676;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)65.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)68.5) ) ) {
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
            if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)68.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)73) ) ) {
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
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)58.5) ) ) {
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
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)50.5) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
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
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)54) ) ) {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0.06666666666666667;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9333333333333333;
                result[5] += 0;
              } else {
                result[0] += 0.75;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.25;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)61) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8333333333333334;
                result[5] += 0.16666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0.002628120893561104;
                result[2] += 0;
                result[3] += 0.03942181340341656;
                result[4] += 0.040735873850197106;
                result[5] += 0.9172141918528253;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)113.5) ) ) {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1875;
                result[4] += 0.5;
                result[5] += 0.0625;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)114.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16363636363636364;
                result[4] += 0.01818181818181818;
                result[5] += 0.8181818181818182;
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
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)75) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9423076923076923;
                result[4] += 0;
                result[5] += 0.057692307692307696;
              } else {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              }
            } else {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.037037037037037035;
                result[3] += 0.25925925925925924;
                result[4] += 0;
                result[5] += 0.7037037037037037;
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
      if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)97) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)41) ) ) {
                result[0] += 0;
                result[1] += 0.7142857142857143;
                result[2] += 0;
                result[3] += 0.08571428571428572;
                result[4] += 0.17142857142857143;
                result[5] += 0.02857142857142857;
              } else {
                result[0] += 0.04697986577181208;
                result[1] += 0.006711409395973154;
                result[2] += 0;
                result[3] += 0.026845637583892617;
                result[4] += 0.8523489932885906;
                result[5] += 0.06711409395973154;
              }
            } else {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)51) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
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
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)70.5) ) ) {
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)83.5) ) ) {
                result[0] += 0.09433962264150944;
                result[1] += 0.03773584905660377;
                result[2] += 0;
                result[3] += 0.05660377358490566;
                result[4] += 0.1509433962264151;
                result[5] += 0.660377358490566;
              } else {
                result[0] += 0.18181818181818182;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5909090909090909;
                result[4] += 0.045454545454545456;
                result[5] += 0.18181818181818182;
              }
            } else {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
                result[0] += 0.13461538461538464;
                result[1] += 0.019230769230769235;
                result[2] += 0.03846153846153847;
                result[3] += 0.5384615384615385;
                result[4] += 0.13461538461538464;
                result[5] += 0.13461538461538464;
              } else {
                result[0] += 0.9059590316573557;
                result[1] += 0.00558659217877095;
                result[2] += 0.00186219739292365;
                result[3] += 0.019553072625698324;
                result[4] += 0.06052141527001862;
                result[5] += 0.006517690875232775;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
            if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
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
                result[3] += 0.05555555555555555;
                result[4] += 0.013888888888888888;
                result[5] += 0.9305555555555556;
              }
            } else {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0.040268456375838924;
                result[2] += 0.013422818791946308;
                result[3] += 0.7919463087248322;
                result[4] += 0.026845637583892617;
                result[5] += 0.12751677852348994;
              } else {
                result[0] += 0.006711409395973154;
                result[1] += 0.006711409395973154;
                result[2] += 0.06711409395973154;
                result[3] += 0.4966442953020134;
                result[4] += 0;
                result[5] += 0.4228187919463087;
              }
            }
          } else {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
                result[0] += 0.06349206349206349;
                result[1] += 0.015873015873015872;
                result[2] += 0.1746031746031746;
                result[3] += 0.19047619047619047;
                result[4] += 0.015873015873015872;
                result[5] += 0.5396825396825397;
              } else {
                result[0] += 0.06481481481481481;
                result[1] += 0;
                result[2] += 0.7592592592592593;
                result[3] += 0.08333333333333333;
                result[4] += 0.018518518518518517;
                result[5] += 0.07407407407407407;
              }
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
                result[0] += 0.043478260869565216;
                result[1] += 0.17391304347826086;
                result[2] += 0.13043478260869565;
                result[3] += 0.13043478260869565;
                result[4] += 0.5217391304347826;
                result[5] += 0;
              } else {
                result[0] += 0.8181818181818182;
                result[1] += 0;
                result[2] += 0.16883116883116883;
                result[3] += 0;
                result[4] += 0.012987012987012988;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)110.5) ) ) {
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
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)52) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)74.5) ) ) {
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
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)64.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
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
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
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
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)95) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)109) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
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
        }
      } else {
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)94.5) ) ) {
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
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.25;
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
          } else {
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)110) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
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
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)102.5) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
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
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
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
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)109.5) ) ) {
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
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)85.5) ) ) {
                result[0] += 0.8;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.03333333333333333;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0.03333333333333333;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2857142857142857;
                result[3] += 0.7142857142857143;
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
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9090909090909092;
                result[3] += 0.04545454545454546;
                result[4] += 0;
                result[5] += 0.04545454545454546;
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
        }
      } else {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)83) ) ) {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8571428571428571;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.14285714285714285;
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
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
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)111.5) ) ) {
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)121) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9078947368421053;
                result[3] += 0.09210526315789473;
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
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9411764705882353;
                result[3] += 0.058823529411764705;
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
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9642857142857143;
                result[3] += 0.03571428571428571;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9970414201183432;
                result[3] += 0.0029585798816568047;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)98.5) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
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
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)81) ) ) {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
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
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.5;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)104) ) ) {
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
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
                result[0] += 0.038461538461538464;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8846153846153846;
                result[5] += 0.07692307692307693;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0.75;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7692307692307693;
                result[5] += 0.23076923076923078;
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
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.00792393026941363;
                result[4] += 0.012678288431061807;
                result[5] += 0.9793977812995246;
              } else {
                result[0] += 0.004975124378109453;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08955223880597014;
                result[4] += 0.1791044776119403;
                result[5] += 0.7263681592039801;
              }
            } else {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0.010638297872340425;
                result[2] += 0;
                result[3] += 0.13829787234042554;
                result[4] += 0.1276595744680851;
                result[5] += 0.723404255319149;
              } else {
                result[0] += 0.04;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.56;
                result[4] += 0;
                result[5] += 0.4;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)79.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
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
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.95;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4444444444444444;
                result[4] += 0;
                result[5] += 0.5555555555555556;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)80) ) ) {
                result[0] += 0.05263157894736842;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5789473684210527;
                result[4] += 0;
                result[5] += 0.3684210526315789;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9714285714285714;
                result[4] += 0;
                result[5] += 0.02857142857142857;
              }
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
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
        }
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)99.5) ) ) {
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
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
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
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)54) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.125;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.875;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)98) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)81.5) ) ) {
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
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
                result[0] += 0.044444444444444446;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9555555555555556;
                result[5] += 0;
              } else {
                result[0] += 0.8507462686567164;
                result[1] += 0.004975124378109453;
                result[2] += 0;
                result[3] += 0.01990049751243781;
                result[4] += 0.07462686567164178;
                result[5] += 0.04975124378109453;
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
            if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
                result[0] += 0.010582010582010581;
                result[1] += 0.042328042328042326;
                result[2] += 0.005291005291005291;
                result[3] += 0.30687830687830686;
                result[4] += 0.047619047619047616;
                result[5] += 0.5873015873015873;
              } else {
                result[0] += 0.22;
                result[1] += 0;
                result[2] += 0.36;
                result[3] += 0.28;
                result[4] += 0;
                result[5] += 0.14;
              }
            } else {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
                result[0] += 0.011627906976744186;
                result[1] += 0.023255813953488372;
                result[2] += 0.09302325581395349;
                result[3] += 0.686046511627907;
                result[4] += 0.05813953488372093;
                result[5] += 0.12790697674418605;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5217391304347826;
                result[3] += 0.2898550724637681;
                result[4] += 0;
                result[5] += 0.18840579710144928;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
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
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)99) ) ) {
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
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)69.5) ) ) {
                result[0] += 0.8717948717948718;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.10256410256410256;
                result[5] += 0.02564102564102564;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.34375;
                result[3] += 0.46875;
                result[4] += 0.03125;
                result[5] += 0.15625;
              }
            } else {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
                result[0] += 0.9572519083969466;
                result[1] += 0.0015267175572519086;
                result[2] += 0;
                result[3] += 0.004580152671755726;
                result[4] += 0.029007633587786262;
                result[5] += 0.0076335877862595426;
              } else {
                result[0] += 0.7090909090909092;
                result[1] += 0;
                result[2] += 0.18181818181818185;
                result[3] += 0.027272727272727275;
                result[4] += 0.08181818181818183;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)85) ) ) {
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
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)71) ) ) {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8;
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
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.025;
                result[3] += 0.05;
                result[4] += 0;
                result[5] += 0.925;
              }
            }
          } else {
            if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)112) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)118.5) ) ) {
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
          }
        }
      } else {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)70) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8888888888888888;
              }
            } else {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0.06060606060606061;
                result[2] += 0.06060606060606061;
                result[3] += 0.8787878787878788;
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
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)81.5) ) ) {
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
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)86) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)97) ) ) {
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
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.12121212121212122;
                result[3] += 0.8181818181818182;
                result[4] += 0;
                result[5] += 0.06060606060606061;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)113.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0.16666666666666666;
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
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9354838709677419;
                result[3] += 0.06451612903225806;
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
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)113.5) ) ) {
            if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5833333333333334;
                result[3] += 0.4166666666666667;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.007692307692307693;
                result[1] += 0;
                result[2] += 0.9384615384615385;
                result[3] += 0.05384615384615385;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)105) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
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
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)97.5) ) ) {
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
        if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
            if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)105) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.6;
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
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9294117647058824;
                result[3] += 0.07058823529411765;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9958333333333333;
                result[3] += 0.004166666666666667;
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
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)49.5) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)63) ) ) {
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
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)64.5) ) ) {
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
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59) ) ) {
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
                result[3] += 0.028785982478097622;
                result[4] += 0.025031289111389236;
                result[5] += 0.9461827284105131;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.23076923076923078;
                result[4] += 0.7692307692307693;
                result[5] += 0;
              } else {
                result[0] += 0.024193548387096774;
                result[1] += 0.008064516129032258;
                result[2] += 0;
                result[3] += 0.23387096774193547;
                result[4] += 0.08064516129032258;
                result[5] += 0.6532258064516129;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
              if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)70.5) ) ) {
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
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
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
                result[3] += 0.13043478260869565;
                result[4] += 0;
                result[5] += 0.8695652173913043;
              }
            }
          } else {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)65) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8027210884353742;
                result[4] += 0.027210884353741496;
                result[5] += 0.17006802721088435;
              } else {
                result[0] += 0;
                result[1] += 0.06818181818181818;
                result[2] += 0.03409090909090909;
                result[3] += 0.45454545454545453;
                result[4] += 0;
                result[5] += 0.4431818181818182;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)64.5) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)49.5) ) ) {
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
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)89) ) ) {
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
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)98) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)51.5) ) ) {
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
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.8;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)115) ) ) {
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
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)98.5) ) ) {
                result[0] += 0.1357142857142857;
                result[1] += 0.007142857142857143;
                result[2] += 0;
                result[3] += 0.014285714285714285;
                result[4] += 0.8285714285714286;
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
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
                result[0] += 0.9383116883116883;
                result[1] += 0.00974025974025974;
                result[2] += 0;
                result[3] += 0.00974025974025974;
                result[4] += 0.04220779220779221;
                result[5] += 0;
              } else {
                result[0] += 0.1810344827586207;
                result[1] += 0.0603448275862069;
                result[2] += 0.0603448275862069;
                result[3] += 0.22413793103448276;
                result[4] += 0.25862068965517243;
                result[5] += 0.21551724137931033;
              }
            }
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)73) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.23529411764705882;
                result[1] += 0.058823529411764705;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7058823529411765;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)88) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.9712556732223904;
                result[1] += 0;
                result[2] += 0.006051437216338881;
                result[3] += 0.006051437216338881;
                result[4] += 0.01664145234493192;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0.11363636363636363;
                result[2] += 0.022727272727272728;
                result[3] += 0.1590909090909091;
                result[4] += 0.09090909090909091;
                result[5] += 0.6136363636363636;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.36363636363636365;
                result[3] += 0.09090909090909091;
                result[4] += 0.5454545454545454;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
                result[0] += 0.015151515151515152;
                result[1] += 0.015151515151515152;
                result[2] += 0.09090909090909091;
                result[3] += 0.6818181818181818;
                result[4] += 0;
                result[5] += 0.19696969696969696;
              } else {
                result[0] += 0.020833333333333332;
                result[1] += 0.041666666666666664;
                result[2] += 0.4791666666666667;
                result[3] += 0.22916666666666666;
                result[4] += 0;
                result[5] += 0.22916666666666666;
              }
            }
          } else {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)68.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.1149425287356322;
                result[1] += 0;
                result[2] += 0.6666666666666667;
                result[3] += 0.02298850574712644;
                result[4] += 0.12643678160919544;
                result[5] += 0.06896551724137932;
              }
            } else {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.3125;
                result[1] += 0;
                result[2] += 0.6875;
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
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)74) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
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
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
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
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)72) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
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
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0.3333333333333333;
              }
            } else {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.18181818181818182;
                result[3] += 0.36363636363636365;
                result[4] += 0;
                result[5] += 0.45454545454545453;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)69.5) ) ) {
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)83) ) ) {
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
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)91) ) ) {
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
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)86) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.6818181818181818;
                result[4] += 0;
                result[5] += 0.06818181818181818;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0.26666666666666666;
                result[4] += 0;
                result[5] += 0.06666666666666667;
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
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.42307692307692313;
                result[3] += 0.5384615384615385;
                result[4] += 0;
                result[5] += 0.03846153846153847;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.1;
              }
            } else {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
                result[0] += 0.04255319148936171;
                result[1] += 0;
                result[2] += 0.8936170212765958;
                result[3] += 0.021276595744680854;
                result[4] += 0.04255319148936171;
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
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)106.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
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
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)112) ) ) {
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
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)110) ) ) {
                result[0] += 0.00625;
                result[1] += 0;
                result[2] += 0.90625;
                result[3] += 0.08125;
                result[4] += 0;
                result[5] += 0.00625;
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
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)108.5) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)99) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7631578947368421;
                result[3] += 0.21052631578947367;
                result[4] += 0;
                result[5] += 0.02631578947368421;
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
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9809523809523809;
                result[3] += 0.01904761904761905;
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
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
    if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)97) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)97) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)41) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.007518796992481203;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.981203007518797;
                result[5] += 0.011278195488721804;
              }
            } else {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)60.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.06666666666666667;
                result[5] += 0.9333333333333333;
              } else {
                result[0] += 0.20512820512820512;
                result[1] += 0;
                result[2] += 0.008547008547008548;
                result[3] += 0.02564102564102564;
                result[4] += 0.6495726495726496;
                result[5] += 0.1111111111111111;
              }
            }
          } else {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)63) ) ) {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.9259259259259259;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.07407407407407407;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8571428571428571;
                result[4] += 0;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0.3;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)54) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)66) ) ) {
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
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              }
            }
          } else {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)69.5) ) ) {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.9792284866468842;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.020771513353115726;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)92) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.4444444444444444;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2222222222222222;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)80) ) ) {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0.06666666666666667;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.26666666666666666;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8372093023255814;
                result[5] += 0.16279069767441862;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
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
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)59) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8333333333333334;
                result[5] += 0.16666666666666666;
              } else {
                result[0] += 0.00129366106080207;
                result[1] += 0;
                result[2] += 0.00258732212160414;
                result[3] += 0.03363518758085381;
                result[4] += 0.0129366106080207;
                result[5] += 0.9495472186287193;
              }
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.125;
                result[4] += 0.625;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.203125;
                result[4] += 0.171875;
                result[5] += 0.625;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)67.5) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)76) ) ) {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.075;
                result[1] += 0.025;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.875;
                result[5] += 0.025;
              }
            } else {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)95) ) ) {
                result[0] += 0.09615384615384616;
                result[1] += 0.019230769230769232;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0.11538461538461539;
                result[5] += 0.5192307692307693;
              } else {
                result[0] += 0.7647058823529412;
                result[1] += 0.023529411764705885;
                result[2] += 0;
                result[3] += 0.03529411764705883;
                result[4] += 0.14117647058823532;
                result[5] += 0.03529411764705883;
              }
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)96) ) ) {
                result[0] += 0.09090909090909091;
                result[1] += 0.18181818181818182;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5909090909090909;
                result[5] += 0.13636363636363635;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
                result[0] += 0.05806451612903226;
                result[1] += 0.025806451612903226;
                result[2] += 0;
                result[3] += 0.2967741935483871;
                result[4] += 0.03870967741935484;
                result[5] += 0.5806451612903226;
              } else {
                result[0] += 0.02040816326530612;
                result[1] += 0.0058309037900874635;
                result[2] += 0.052478134110787174;
                result[3] += 0.5685131195335277;
                result[4] += 0.02040816326530612;
                result[5] += 0.3323615160349854;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)108.5) ) ) {
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)105) ) ) {
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
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)72) ) ) {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
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
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)64.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)74) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0.983433734939759;
                result[1] += 0;
                result[2] += 0.0030120481927710845;
                result[3] += 0.004518072289156626;
                result[4] += 0.007530120481927711;
                result[5] += 0.0015060240963855422;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)91.5) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)81.5) ) ) {
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
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)98.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0.06896551724137931;
                result[1] += 0;
                result[2] += 0.9310344827586207;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
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
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)110.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07142857142857142;
                result[3] += 0.8809523809523809;
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
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.6;
                result[4] += 0;
                result[5] += 0.2;
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
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.7;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)83) ) ) {
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
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)88) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9310344827586207;
                result[3] += 0.06896551724137931;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
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
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)86) ) ) {
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
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)85) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
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
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9375;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.0625;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
                result[0] += 0.7142857142857143;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2857142857142857;
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
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.002336448598130841;
                result[1] += 0;
                result[2] += 0.866822429906542;
                result[3] += 0.11214953271028037;
                result[4] += 0;
                result[5] += 0.018691588785046728;
              }
            }
          } else {
            if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)130.5) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0055147058823529415;
                result[1] += 0;
                result[2] += 0.9705882352941176;
                result[3] += 0.02022058823529412;
                result[4] += 0;
                result[5] += 0.003676470588235294;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)116.5) ) ) {
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
  }
  if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)66.5) ) ) {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)46.5) ) ) {
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
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)74) ) ) {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
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
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)86) ) ) {
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
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)79.5) ) ) {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)73.5) ) ) {
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
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8666666666666667;
                result[5] += 0.13333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0.2857142857142857;
                result[2] += 0;
                result[3] += 0.35714285714285715;
                result[4] += 0;
                result[5] += 0.35714285714285715;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)64.5) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)64.5) ) ) {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)51.5) ) ) {
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
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)62.5) ) ) {
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
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.01507537688442211;
                result[4] += 0.0016750418760469012;
                result[5] += 0.983249581239531;
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
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)66.5) ) ) {
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.034482758620689655;
                result[4] += 0.9655172413793104;
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)69) ) ) {
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
                result[3] += 0.07407407407407407;
                result[4] += 0.18518518518518517;
                result[5] += 0.7407407407407407;
              }
            }
          } else {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)55.5) ) ) {
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
                result[3] += 0.08450704225352113;
                result[4] += 0.028169014084507043;
                result[5] += 0.8873239436619719;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.15384615384615385;
                result[4] += 0.23076923076923078;
                result[5] += 0.6153846153846154;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7333333333333333;
                result[4] += 0;
                result[5] += 0.26666666666666666;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)68) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)67.5) ) ) {
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
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0425531914893617;
                result[4] += 0.0425531914893617;
                result[5] += 0.9148936170212766;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0.6;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)69.5) ) ) {
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
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.91875;
                result[4] += 0;
                result[5] += 0.08125;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.14285714285714285;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8571428571428571;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7222222222222222;
                result[4] += 0;
                result[5] += 0.2777777777777778;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.10526315789473684;
                result[4] += 0.10526315789473684;
                result[5] += 0.7894736842105263;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)85) ) ) {
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
            if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)100.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)96) ) ) {
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
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)54) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0.2857142857142857;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7142857142857143;
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
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)108) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)40) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.043478260869565216;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9565217391304348;
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
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)74) ) ) {
                result[0] += 0.6796116504854369;
                result[1] += 0.038834951456310676;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.27184466019417475;
                result[5] += 0.009708737864077669;
              } else {
                result[0] += 0.9497326203208556;
                result[1] += 0.006417112299465241;
                result[2] += 0;
                result[3] += 0.009625668449197862;
                result[4] += 0.03208556149732621;
                result[5] += 0.0021390374331550803;
              }
            } else {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0.027397260273972605;
                result[2] += 0.23287671232876714;
                result[3] += 0.27397260273972607;
                result[4] += 0.10958904109589042;
                result[5] += 0.35616438356164387;
              } else {
                result[0] += 0.8928571428571429;
                result[1] += 0;
                result[2] += 0.10714285714285714;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)108.5) ) ) {
                result[0] += 0;
                result[1] += 0.05;
                result[2] += 0.03333333333333333;
                result[3] += 0.5166666666666667;
                result[4] += 0.06666666666666667;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0.06666666666666667;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0;
                result[4] += 0.06666666666666667;
                result[5] += 0.06666666666666667;
              }
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
                result[0] += 0.36363636363636365;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.045454545454545456;
                result[4] += 0.5909090909090909;
                result[5] += 0;
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
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)73) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0.16666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.02702702702702703;
                result[3] += 0.1891891891891892;
                result[4] += 0;
                result[5] += 0.7837837837837838;
              }
            } else {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.8;
              } else {
                result[0] += 0;
                result[1] += 0.09090909090909091;
                result[2] += 0;
                result[3] += 0.6818181818181818;
                result[4] += 0.13636363636363635;
                result[5] += 0.09090909090909091;
              }
            }
          } else {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.12371134020618557;
                result[3] += 0.6391752577319587;
                result[4] += 0;
                result[5] += 0.23711340206185566;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5333333333333333;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.13333333333333333;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8571428571428571;
                result[4] += 0;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0.22916666666666666;
                result[4] += 0;
                result[5] += 0.020833333333333332;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)111.5) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)95) ) ) {
                result[0] += 0.1875;
                result[1] += 0;
                result[2] += 0.8125;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0.25;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)107) ) ) {
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
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)100) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.8;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.92;
                result[3] += 0.08;
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
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)85) ) ) {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)88) ) ) {
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
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
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
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)112.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666667;
                result[3] += 0.23333333333333336;
                result[4] += 0;
                result[5] += 0.10000000000000002;
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
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.125;
                result[1] += 0;
                result[2] += 0.5625;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0.1875;
              }
            } else {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.811965811965812;
                result[3] += 0.1623931623931624;
                result[4] += 0;
                result[5] += 0.02564102564102564;
              } else {
                result[0] += 0.008207934336525308;
                result[1] += 0;
                result[2] += 0.9658002735978112;
                result[3] += 0.023255813953488372;
                result[4] += 0;
                result[5] += 0.0027359781121751026;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)68) ) ) {
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
                result[4] += 0.8333333333333334;
                result[5] += 0.16666666666666666;
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8333333333333334;
                result[5] += 0.16666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
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
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)81.5) ) ) {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
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
                result[4] += 0;
                result[5] += 1;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)61) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)56) ) ) {
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
                result[3] += 0.8;
                result[4] += 0.2;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
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
                result[4] += 0.5;
                result[5] += 0.25;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)78) ) ) {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4074074074074074;
                result[5] += 0.5925925925925926;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9090909090909091;
                result[5] += 0.09090909090909091;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)69.5) ) ) {
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
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.009416195856873822;
                result[4] += 0.0018832391713747645;
                result[5] += 0.9887005649717514;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1267605633802817;
                result[4] += 0.056338028169014086;
                result[5] += 0.8169014084507042;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.10344827586206896;
                result[4] += 0.6896551724137931;
                result[5] += 0.20689655172413793;
              } else {
                result[0] += 0;
                result[1] += 0.004830917874396135;
                result[2] += 0;
                result[3] += 0.21256038647342995;
                result[4] += 0.033816425120772944;
                result[5] += 0.748792270531401;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)73) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.031746031746031744;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0.8253968253968254;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.025;
                result[3] += 0.675;
                result[4] += 0;
                result[5] += 0.3;
              } else {
                result[0] += 0.2857142857142857;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.7142857142857143;
              }
            } else {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)75) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9791666666666666;
                result[4] += 0;
                result[5] += 0.020833333333333332;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.7;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)76.5) ) ) {
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
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)51.5) ) ) {
                result[0] += 0.8;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.037383177570093455;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9626168224299065;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)76.5) ) ) {
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
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)54.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.12280701754385966;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.03508771929824562;
                result[4] += 0.736842105263158;
                result[5] += 0.10526315789473685;
              }
            } else {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0.5555555555555556;
                result[2] += 0;
                result[3] += 0.07407407407407407;
                result[4] += 0.37037037037037035;
                result[5] += 0;
              } else {
                result[0] += 0.9486203615604186;
                result[1] += 0.0009514747859181732;
                result[2] += 0.0019029495718363464;
                result[3] += 0.006660323501427212;
                result[4] += 0.03235014272121789;
                result[5] += 0.009514747859181731;
              }
            }
          } else {
            if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)114.5) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05555555555555555;
                result[3] += 0.3181818181818182;
                result[4] += 0.015151515151515152;
                result[5] += 0.6111111111111112;
              } else {
                result[0] += 0.09022556390977443;
                result[1] += 0.05263157894736842;
                result[2] += 0.41353383458646614;
                result[3] += 0.2556390977443609;
                result[4] += 0.10526315789473684;
                result[5] += 0.08270676691729323;
              }
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)101) ) ) {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0;
                result[4] += 0.5555555555555556;
                result[5] += 0.2222222222222222;
              } else {
                result[0] += 0.9523809523809523;
                result[1] += 0;
                result[2] += 0.047619047619047616;
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
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
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
                result[3] += 0.2857142857142857;
                result[4] += 0;
                result[5] += 0.7142857142857143;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
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
                result[3] += 0.9473684210526315;
                result[4] += 0;
                result[5] += 0.05263157894736842;
              }
            }
          } else {
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)71.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06060606060606061;
                result[4] += 0;
                result[5] += 0.9393939393939394;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.14285714285714288;
                result[3] += 0.28571428571428575;
                result[4] += 0.28571428571428575;
                result[5] += 0.28571428571428575;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)87.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)109.5) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7272727272727273;
                result[4] += 0;
                result[5] += 0.2727272727272727;
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
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
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
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.16666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)89) ) ) {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
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
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)89) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)94.5) ) ) {
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)82) ) ) {
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
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)103.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.26666666666666666;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.06666666666666667;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.016666666666666666;
                result[1] += 0;
                result[2] += 0.7833333333333333;
                result[3] += 0.18333333333333332;
                result[4] += 0;
                result[5] += 0.016666666666666666;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)83.5) ) ) {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)110) ) ) {
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
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)106.5) ) ) {
            if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)105.5) ) ) {
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
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)106.5) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)113) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              }
            }
          } else {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0.2;
                result[2] += 0.6;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.2;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
                result[0] += 0.014035087719298246;
                result[1] += 0;
                result[2] += 0.8666666666666667;
                result[3] += 0.10175438596491228;
                result[4] += 0;
                result[5] += 0.017543859649122806;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9817578772802653;
                result[3] += 0.013266998341625208;
                result[4] += 0;
                result[5] += 0.004975124378109453;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)79) ) ) {
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
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)49.5) ) ) {
                result[0] += 0.16666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8333333333333334;
                result[5] += 0;
              } else {
                result[0] += 0.004739336492890996;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.995260663507109;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)77.5) ) ) {
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
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)75) ) ) {
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
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
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
                result[4] += 0.15;
                result[5] += 0.85;
              }
            }
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)59) ) ) {
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
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)78.5) ) ) {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)52) ) ) {
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
                result[4] += 0.17647058823529413;
                result[5] += 0.8235294117647058;
              }
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)57.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.037037037037037035;
                result[2] += 0;
                result[3] += 0.1111111111111111;
                result[4] += 0.6666666666666666;
                result[5] += 0.18518518518518517;
              }
            }
          } else {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)64.5) ) ) {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.02631578947368421;
                result[4] += 0.009868421052631578;
                result[5] += 0.9638157894736842;
              } else {
                result[0] += 0;
                result[1] += 0.16666666666666669;
                result[2] += 0;
                result[3] += 0.16666666666666669;
                result[4] += 0.5000000000000001;
                result[5] += 0.16666666666666669;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0.030303030303030304;
                result[2] += 0;
                result[3] += 0.07575757575757576;
                result[4] += 0.3939393939393939;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0.003424657534246575;
                result[2] += 0;
                result[3] += 0.14383561643835616;
                result[4] += 0.0273972602739726;
                result[5] += 0.8253424657534246;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5294117647058824;
                result[4] += 0.029411764705882353;
                result[5] += 0.4411764705882353;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.027777777777777776;
                result[3] += 0.1111111111111111;
                result[4] += 0.027777777777777776;
                result[5] += 0.8333333333333334;
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
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
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
                result[3] += 0.9224137931034483;
                result[4] += 0;
                result[5] += 0.07758620689655173;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
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
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)97) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)97) ) ) {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)40) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.025000000000000005;
                result[1] += 0.012500000000000002;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9500000000000001;
                result[5] += 0.012500000000000002;
              }
            } else {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
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
            if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)92) ) ) {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)88) ) ) {
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
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)57) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)55.5) ) ) {
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
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)56) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)62) ) ) {
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
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)109) ) ) {
                result[0] += 0.09523809523809523;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9047619047619048;
                result[5] += 0;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)83.5) ) ) {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.2916666666666667;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.125;
                result[4] += 0.5833333333333334;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
                result[0] += 0.19047619047619047;
                result[1] += 0.6666666666666666;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0;
              } else {
                result[0] += 0.9348659003831418;
                result[1] += 0.004789272030651341;
                result[2] += 0;
                result[3] += 0.01053639846743295;
                result[4] += 0.04597701149425287;
                result[5] += 0.0038314176245210726;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6222222222222222;
                result[4] += 0;
                result[5] += 0.37777777777777777;
              } else {
                result[0] += 0;
                result[1] += 0.06382978723404255;
                result[2] += 0.02127659574468085;
                result[3] += 0.2553191489361702;
                result[4] += 0;
                result[5] += 0.6595744680851063;
              }
            } else {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
                result[0] += 0.0078125;
                result[1] += 0.0078125;
                result[2] += 0.0703125;
                result[3] += 0.7265625;
                result[4] += 0.015625;
                result[5] += 0.171875;
              } else {
                result[0] += 0.10256410256410256;
                result[1] += 0.07692307692307693;
                result[2] += 0.3333333333333333;
                result[3] += 0.23076923076923078;
                result[4] += 0.1794871794871795;
                result[5] += 0.07692307692307693;
              }
            }
          } else {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4230769230769231;
                result[3] += 0.34615384615384615;
                result[4] += 0;
                result[5] += 0.23076923076923078;
              } else {
                result[0] += 0.046875;
                result[1] += 0;
                result[2] += 0.8125;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0.015625;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)108.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
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
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)92) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
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
            if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)102) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9583333333333334;
                result[4] += 0;
                result[5] += 0.041666666666666664;
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
        } else {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)109) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06666666666666667;
                result[3] += 0.9333333333333333;
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
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)100) ) ) {
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
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)80) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
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
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
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
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)106) ) ) {
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
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)89) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.11111111111111112;
                result[3] += 0.6666666666666667;
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
      if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)77) ) ) {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)114) ) ) {
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
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)76) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
                result[0] += 0.16666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
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
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)95.5) ) ) {
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.47368421052631576;
                result[3] += 0.47368421052631576;
                result[4] += 0;
                result[5] += 0.05263157894736842;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8275862068965517;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.1724137931034483;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8994708994708994;
                result[3] += 0.08465608465608465;
                result[4] += 0;
                result[5] += 0.015873015873015872;
              }
            }
          } else {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
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
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)111.5) ) ) {
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
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)76.5) ) ) {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)116.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8181818181818182;
                result[3] += 0.18181818181818182;
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
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9778129952456418;
                result[3] += 0.022187004754358162;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)62.5) ) ) {
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
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)71.5) ) ) {
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
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.030303030303030304;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.9696969696969697;
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
        if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)55.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.01951219512195122;
                result[4] += 0.004878048780487805;
                result[5] += 0.975609756097561;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2692307692307692;
                result[4] += 0.07692307692307693;
                result[5] += 0.6538461538461539;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)66.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)67) ) ) {
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
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)73.5) ) ) {
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
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.015625;
                result[2] += 0.0234375;
                result[3] += 0.0703125;
                result[4] += 0;
                result[5] += 0.890625;
              }
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07142857142857142;
                result[4] += 0.09523809523809523;
                result[5] += 0.8333333333333334;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0449438202247191;
                result[3] += 0.6179775280898876;
                result[4] += 0;
                result[5] += 0.33707865168539325;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)48.5) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0.016129032258064516;
                result[1] += 0.9838709677419355;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)105.5) ) ) {
                result[0] += 0.024096385542168676;
                result[1] += 0.012048192771084338;
                result[2] += 0;
                result[3] += 0.03614457831325301;
                result[4] += 0.9036144578313253;
                result[5] += 0.024096385542168676;
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
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
                result[0] += 0.888;
                result[1] += 0.024;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.08;
                result[5] += 0.008;
              } else {
                result[0] += 0.0072992700729927005;
                result[1] += 0.11678832116788321;
                result[2] += 0.029197080291970802;
                result[3] += 0.25547445255474455;
                result[4] += 0.13138686131386862;
                result[5] += 0.45985401459854014;
              }
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)66.5) ) ) {
                result[0] += 0.25;
                result[1] += 0.125;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0.2916666666666667;
                result[5] += 0;
              } else {
                result[0] += 0.9111111111111111;
                result[1] += 0.007407407407407408;
                result[2] += 0.007407407407407408;
                result[3] += 0.022222222222222223;
                result[4] += 0.04259259259259259;
                result[5] += 0.009259259259259259;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06666666666666667;
                result[4] += 0.8666666666666667;
                result[5] += 0.06666666666666667;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.01762114537444934;
                result[3] += 0.6167400881057269;
                result[4] += 0.01762114537444934;
                result[5] += 0.34801762114537443;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)98.5) ) ) {
                result[0] += 0.039473684210526314;
                result[1] += 0.039473684210526314;
                result[2] += 0.15789473684210525;
                result[3] += 0.3026315789473684;
                result[4] += 0.06578947368421052;
                result[5] += 0.39473684210526316;
              } else {
                result[0] += 0.06382978723404256;
                result[1] += 0;
                result[2] += 0.5106382978723405;
                result[3] += 0.21276595744680854;
                result[4] += 0.08510638297872342;
                result[5] += 0.12765957446808512;
              }
            }
          } else {
            if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)103.5) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
                result[0] += 0.21428571428571427;
                result[1] += 0.14285714285714285;
                result[2] += 0.32142857142857145;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0.17857142857142858;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.864406779661017;
                result[3] += 0.01694915254237288;
                result[4] += 0;
                result[5] += 0.11864406779661017;
              }
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)90.5) ) ) {
                result[0] += 0.2857142857142857;
                result[1] += 0;
                result[2] += 0.7142857142857143;
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
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)76) ) ) {
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
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)105) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)55) ) ) {
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
      }
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)75.5) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
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
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)98.5) ) ) {
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
        if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
            if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4;
                result[5] += 0.6;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07317073170731708;
                result[3] += 0.8292682926829269;
                result[4] += 0;
                result[5] += 0.09756097560975611;
              }
            } else {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0.1111111111111111;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0.2222222222222222;
                result[2] += 0.4444444444444444;
                result[3] += 0;
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
            } else {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0.8333333333333334;
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
            }
          }
        } else {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)130.5) ) ) {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)105) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7755102040816326;
                result[3] += 0.20408163265306123;
                result[4] += 0;
                result[5] += 0.02040816326530612;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.47368421052631576;
                result[3] += 0.5263157894736842;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)104) ) ) {
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
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)100) ) ) {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
            if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)114.5) ) ) {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.09090909090909091;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.9090909090909091;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)70.5) ) ) {
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
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.125;
                result[1] += 0;
                result[2] += 0.875;
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)76) ) ) {
            if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
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
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
                result[0] += 0.010752688172043012;
                result[1] += 0;
                result[2] += 0.7634408602150538;
                result[3] += 0.20430107526881722;
                result[4] += 0;
                result[5] += 0.021505376344086023;
              } else {
                result[0] += 0.016260162601626018;
                result[1] += 0;
                result[2] += 0.9349593495934959;
                result[3] += 0.04878048780487805;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)102) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0.7777777777777778;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)98) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5555555555555556;
                result[3] += 0.4444444444444444;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9662921348314607;
                result[3] += 0.033707865168539325;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)118) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9411764705882353;
                result[3] += 0.058823529411764705;
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
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9961538461538462;
                result[3] += 0.0038461538461538464;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.034482758620689655;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9655172413793104;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)59.5) ) ) {
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
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)54.5) ) ) {
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
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)63) ) ) {
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
        if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)73.5) ) ) {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)67) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9523809523809523;
                result[5] += 0.047619047619047616;
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
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0.42857142857142855;
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
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0.002898550724637681;
                result[2] += 0;
                result[3] += 0.02318840579710145;
                result[4] += 0.021739130434782608;
                result[5] += 0.9521739130434783;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.027777777777777776;
                result[3] += 0.2361111111111111;
                result[4] += 0.05555555555555555;
                result[5] += 0.6805555555555556;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
                result[0] += 0.9333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.06666666666666667;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.5384615384615384;
                result[2] += 0;
                result[3] += 0.07692307692307693;
                result[4] += 0.3076923076923077;
                result[5] += 0.07692307692307693;
              }
            } else {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.22797927461139897;
                result[4] += 0.07253886010362694;
                result[5] += 0.6994818652849741;
              } else {
                result[0] += 0;
                result[1] += 0.024390243902439025;
                result[2] += 0;
                result[3] += 0.6829268292682927;
                result[4] += 0;
                result[5] += 0.2926829268292683;
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)109) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0.1;
                result[5] += 0.5666666666666667;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9875;
                result[4] += 0;
                result[5] += 0.0125;
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
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)81.5) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)91.5) ) ) {
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
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)81) ) ) {
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
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)65.5) ) ) {
            if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)110) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)49.5) ) ) {
                result[0] += 0.5;
                result[1] += 0;
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
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)45) ) ) {
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
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)94) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)68.5) ) ) {
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
                result[3] += 0.25;
                result[4] += 0.25;
                result[5] += 0.5;
              }
            } else {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0.9375;
                result[2] += 0;
                result[3] += 0.0625;
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)52.5) ) ) {
                result[0] += 0;
                result[1] += 0.95;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.05;
                result[5] += 0;
              } else {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
                result[0] += 0.4956521739130435;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1826086956521739;
                result[4] += 0.11304347826086956;
                result[5] += 0.20869565217391303;
              } else {
                result[0] += 0.9225556631171346;
                result[1] += 0.002904162633107454;
                result[2] += 0.003872216844143272;
                result[3] += 0.005808325266214908;
                result[4] += 0.049370764762826716;
                result[5] += 0.015488867376573089;
              }
            }
          } else {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
                result[0] += 0.021834061135371178;
                result[1] += 0.013100436681222707;
                result[2] += 0.06986899563318777;
                result[3] += 0.4279475982532751;
                result[4] += 0.008733624454148471;
                result[5] += 0.4585152838427948;
              } else {
                result[0] += 0.02564102564102564;
                result[1] += 0;
                result[2] += 0.6837606837606838;
                result[3] += 0.19658119658119658;
                result[4] += 0;
                result[5] += 0.09401709401709402;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)105) ) ) {
                result[0] += 0.2686567164179105;
                result[1] += 0.05970149253731344;
                result[2] += 0.3432835820895523;
                result[3] += 0.17910447761194032;
                result[4] += 0.1492537313432836;
                result[5] += 0;
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
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)86) ) ) {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)57.5) ) ) {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
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
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
                result[0] += 0.07692307692307693;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.038461538461538464;
                result[4] += 0.038461538461538464;
                result[5] += 0.8461538461538461;
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
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)91) ) ) {
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
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
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
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.75;
              }
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
                result[2] += 0;
                result[3] += 0.625;
                result[4] += 0;
                result[5] += 0.375;
              }
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0.7777777777777778;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.043478260869565216;
                result[1] += 0;
                result[2] += 0.6521739130434783;
                result[3] += 0.21739130434782608;
                result[4] += 0;
                result[5] += 0.08695652173913043;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
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
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)86) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.908256880733945;
                result[3] += 0.08256880733944955;
                result[4] += 0;
                result[5] += 0.009174311926605505;
              }
            } else {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7857142857142857;
                result[3] += 0.21428571428571427;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
            if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
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
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.875;
                result[4] += 0;
                result[5] += 0.125;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7333333333333333;
                result[3] += 0.26666666666666666;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9583333333333334;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.041666666666666664;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)77.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)112.5) ) ) {
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
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)111) ) ) {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)109) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)97) ) ) {
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
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)77.5) ) ) {
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
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
            if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)120.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)118.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9647058823529412;
                result[3] += 0.03529411764705882;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7619047619047619;
                result[3] += 0.23809523809523808;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)109.5) ) ) {
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
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8867924528301887;
                result[3] += 0.09433962264150944;
                result[4] += 0;
                result[5] += 0.018867924528301886;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9811320754716981;
                result[3] += 0.018867924528301886;
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
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)69.5) ) ) {
            if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9142857142857143;
                result[5] += 0.08571428571428572;
              } else {
                result[0] += 0.004484304932735426;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9955156950672646;
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
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.125;
                result[1] += 0.0625;
                result[2] += 0;
                result[3] += 0.0625;
                result[4] += 0.625;
                result[5] += 0.125;
              }
            }
          } else {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)59) ) ) {
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
                result[3] += 0.010954616588419406;
                result[4] += 0.017214397496087636;
                result[5] += 0.971830985915493;
              }
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.045454545454545456;
                result[4] += 0.3939393939393939;
                result[5] += 0.5606060606060606;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.135;
                result[4] += 0.015;
                result[5] += 0.85;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)81) ) ) {
                result[0] += 0.7777777777777778;
                result[1] += 0.037037037037037035;
                result[2] += 0;
                result[3] += 0.037037037037037035;
                result[4] += 0.14814814814814814;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.3;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0.020618556701030927;
                result[2] += 0.010309278350515464;
                result[3] += 0.16494845360824742;
                result[4] += 0.061855670103092786;
                result[5] += 0.7422680412371134;
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
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0.006134969325153374;
                result[2] += 0;
                result[3] += 0.9079754601226994;
                result[4] += 0;
                result[5] += 0.08588957055214724;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.44;
                result[4] += 0;
                result[5] += 0.56;
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
                result[0] += 0.015625;
                result[1] += 0.078125;
                result[2] += 0.046875;
                result[3] += 0.515625;
                result[4] += 0.015625;
                result[5] += 0.328125;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)62) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)74.5) ) ) {
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
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)67.5) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)49.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)89) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.15555555555555556;
                result[1] += 0.8222222222222222;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.022222222222222223;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0.11538461538461539;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8461538461538461;
                result[5] += 0.038461538461538464;
              } else {
                result[0] += 0.24489795918367346;
                result[1] += 0.12244897959183673;
                result[2] += 0.061224489795918366;
                result[3] += 0.061224489795918366;
                result[4] += 0.3673469387755102;
                result[5] += 0.14285714285714285;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
                result[0] += 0.35714285714285715;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.21428571428571427;
                result[4] += 0.2857142857142857;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0.9655521783181358;
                result[1] += 0.00303951367781155;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.028368794326241134;
                result[5] += 0.00303951367781155;
              }
            } else {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.043478260869565216;
                result[3] += 0.6086956521739131;
                result[4] += 0.021739130434782608;
                result[5] += 0.32608695652173914;
              } else {
                result[0] += 0.5897435897435898;
                result[1] += 0.0641025641025641;
                result[2] += 0.10256410256410256;
                result[3] += 0.038461538461538464;
                result[4] += 0.20512820512820512;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)67.5) ) ) {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0.08333333333333334;
                result[2] += 0;
                result[3] += 0.33333333333333337;
                result[4] += 0.41666666666666674;
                result[5] += 0.16666666666666669;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07692307692307694;
                result[3] += 0.6923076923076924;
                result[4] += 0.015384615384615387;
                result[5] += 0.21538461538461542;
              } else {
                result[0] += 0.14285714285714285;
                result[1] += 0;
                result[2] += 0.34285714285714286;
                result[3] += 0.14285714285714285;
                result[4] += 0.02857142857142857;
                result[5] += 0.34285714285714286;
              }
            }
          } else {
            if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1388888888888889;
                result[3] += 0.19444444444444445;
                result[4] += 0.1388888888888889;
                result[5] += 0.5277777777777778;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)113.5) ) ) {
                result[0] += 0.021276595744680854;
                result[1] += 0.021276595744680854;
                result[2] += 0.8510638297872342;
                result[3] += 0.08510638297872342;
                result[4] += 0.010638297872340427;
                result[5] += 0.010638297872340427;
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
      }
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)111) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)66.5) ) ) {
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
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)74.5) ) ) {
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
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)75) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
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
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07317073170731707;
                result[3] += 0.8780487804878049;
                result[4] += 0;
                result[5] += 0.04878048780487805;
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
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)100.5) ) ) {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0.3;
                result[4] += 0;
                result[5] += 0.6;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
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
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)97) ) ) {
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
        }
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)90) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)78) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
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
                result[4] += 0.3333333333333333;
                result[5] += 0.6666666666666666;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
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
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0.3333333333333333;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)106.5) ) ) {
                result[0] += 0.058823529411764705;
                result[1] += 0.029411764705882353;
                result[2] += 0.8823529411764706;
                result[3] += 0.029411764705882353;
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
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)76) ) ) {
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
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
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
                result[3] += 0.05405405405405406;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)79) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)96) ) ) {
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
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)116.5) ) ) {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)121) ) ) {
                result[0] += 0.005235602094240838;
                result[1] += 0;
                result[2] += 0.9057591623036649;
                result[3] += 0.08900523560209424;
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
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)89.5) ) ) {
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
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0032948929159802307;
                result[1] += 0;
                result[2] += 0.9934102141680395;
                result[3] += 0.0032948929159802307;
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
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)50) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)51.5) ) ) {
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
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)71.5) ) ) {
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
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)64.5) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8888888888888888;
                result[5] += 0.1111111111111111;
              } else {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
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
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
                result[0] += 0.13333333333333333;
                result[1] += 0.06666666666666667;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7333333333333333;
                result[5] += 0.06666666666666667;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.125;
                result[5] += 0.875;
              }
            } else {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.017142857142857144;
                result[4] += 0.01;
                result[5] += 0.9728571428571429;
              } else {
                result[0] += 0.021739130434782608;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.11413043478260869;
                result[4] += 0.10326086956521739;
                result[5] += 0.7608695652173914;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
                result[0] += 0.5;
                result[1] += 0.1875;
                result[2] += 0;
                result[3] += 0.0625;
                result[4] += 0.1875;
                result[5] += 0.0625;
              } else {
                result[0] += 0;
                result[1] += 0.03076923076923077;
                result[2] += 0.046153846153846156;
                result[3] += 0.08461538461538462;
                result[4] += 0.11538461538461539;
                result[5] += 0.7230769230769231;
              }
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.09375;
                result[2] += 0;
                result[3] += 0.15625;
                result[4] += 0.4375;
                result[5] += 0.3125;
              }
            }
          } else {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.573170731707317;
                result[4] += 0.036585365853658534;
                result[5] += 0.3902439024390244;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.865546218487395;
                result[4] += 0.008403361344537815;
                result[5] += 0.12605042016806722;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
                result[0] += 0.14285714285714288;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5714285714285715;
                result[4] += 0;
                result[5] += 0.28571428571428575;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.17647058823529413;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8235294117647058;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)38.5) ) ) {
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
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)87) ) ) {
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
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)108.5) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.2916666666666667;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7083333333333334;
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
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)57.5) ) ) {
                result[0] += 0.4666666666666667;
                result[1] += 0.4666666666666667;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.06666666666666667;
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
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.25;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
                result[0] += 0.3829787234042553;
                result[1] += 0.1276595744680851;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.48936170212765956;
                result[5] += 0;
              } else {
                result[0] += 0.960325534079349;
                result[1] += 0.001017293997965412;
                result[2] += 0.001017293997965412;
                result[3] += 0.008138351983723296;
                result[4] += 0.022380467955239063;
                result[5] += 0.007121057985757884;
              }
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
                result[0] += 0.125;
                result[1] += 0.07291666666666667;
                result[2] += 0.041666666666666664;
                result[3] += 0.23958333333333334;
                result[4] += 0.3541666666666667;
                result[5] += 0.16666666666666666;
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
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)110.5) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0.011627906976744186;
                result[2] += 0.05813953488372093;
                result[3] += 0.26744186046511625;
                result[4] += 0.011627906976744186;
                result[5] += 0.6511627906976745;
              } else {
                result[0] += 0.046511627906976744;
                result[1] += 0.023255813953488372;
                result[2] += 0.32558139534883723;
                result[3] += 0.5581395348837209;
                result[4] += 0;
                result[5] += 0.046511627906976744;
              }
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
                result[0] += 0.2558139534883721;
                result[1] += 0.023255813953488372;
                result[2] += 0.09302325581395349;
                result[3] += 0.37209302325581395;
                result[4] += 0.16279069767441862;
                result[5] += 0.09302325581395349;
              } else {
                result[0] += 0.015873015873015872;
                result[1] += 0;
                result[2] += 0.6984126984126984;
                result[3] += 0.23809523809523808;
                result[4] += 0;
                result[5] += 0.047619047619047616;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
                result[0] += 0.46153846153846156;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5384615384615384;
                result[5] += 0;
              } else {
                result[0] += 0.9696969696969697;
                result[1] += 0;
                result[2] += 0.030303030303030304;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.1;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
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
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.8;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05454545454545454;
                result[3] += 0.8909090909090909;
                result[4] += 0;
                result[5] += 0.05454545454545454;
              }
            }
          } else {
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
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
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
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
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
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
            if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)77) ) ) {
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
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)104.5) ) ) {
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
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
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
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)116) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)100) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9555555555555556;
                result[3] += 0.044444444444444446;
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
      if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)85) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)76.5) ) ) {
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
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
            if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)106.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4782608695652174;
                result[3] += 0.43478260869565216;
                result[4] += 0;
                result[5] += 0.08695652173913043;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8455284552845529;
                result[3] += 0.13008130081300814;
                result[4] += 0;
                result[5] += 0.024390243902439025;
              }
            } else {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
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
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)119) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9130434782608695;
                result[3] += 0.08695652173913043;
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
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)108.5) ) ) {
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)119) ) ) {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9280575539568345;
                result[3] += 0.07194244604316546;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)81.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
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
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)77.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)107.5) ) ) {
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
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9565217391304348;
                result[3] += 0.043478260869565216;
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
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)65.5) ) ) {
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
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)54.5) ) ) {
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
                result[4] += 0.8181818181818182;
                result[5] += 0.18181818181818182;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.08333333333333333;
                result[5] += 0.9166666666666666;
              } else {
                result[0] += 0;
                result[1] += 0.1;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0.6;
                result[5] += 0.1;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
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
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.019363762102351315;
                result[4] += 0.011065006915629323;
                result[5] += 0.9695712309820194;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3888888888888889;
                result[4] += 0;
                result[5] += 0.6111111111111112;
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
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)60.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5555555555555556;
                result[5] += 0.1111111111111111;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)65.5) ) ) {
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
            }
          } else {
            if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)88) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.17482517482517482;
                result[4] += 0.10839160839160839;
                result[5] += 0.7167832167832168;
              } else {
                result[0] += 0;
                result[1] += 0.29411764705882354;
                result[2] += 0.058823529411764705;
                result[3] += 0.5882352941176471;
                result[4] += 0;
                result[5] += 0.058823529411764705;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.22727272727272727;
                result[4] += 0;
                result[5] += 0.7727272727272727;
              } else {
                result[0] += 0.016260162601626018;
                result[1] += 0.008130081300813009;
                result[2] += 0;
                result[3] += 0.7886178861788617;
                result[4] += 0;
                result[5] += 0.18699186991869918;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)38.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
                result[0] += 0.036585365853658534;
                result[1] += 0.024390243902439025;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9390243902439024;
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
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)53) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)52.5) ) ) {
                result[0] += 0;
                result[1] += 0.75;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
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
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)89) ) ) {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
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
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
                result[0] += 0.27272727272727276;
                result[1] += 0.030303030303030307;
                result[2] += 0;
                result[3] += 0.12121212121212123;
                result[4] += 0.4242424242424243;
                result[5] += 0.15151515151515155;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)76.5) ) ) {
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
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)87.5) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
                result[0] += 0.0888888888888889;
                result[1] += 0.04444444444444445;
                result[2] += 0.022222222222222227;
                result[3] += 0.2666666666666667;
                result[4] += 0.2888888888888889;
                result[5] += 0.2888888888888889;
              } else {
                result[0] += 0.7111111111111111;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.24444444444444444;
                result[5] += 0.044444444444444446;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
                result[0] += 0.9315206445115811;
                result[1] += 0.012084592145015106;
                result[2] += 0;
                result[3] += 0.00906344410876133;
                result[4] += 0.04632426988922457;
                result[5] += 0.0010070493454179255;
              } else {
                result[0] += 0.14285714285714285;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.35714285714285715;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.04;
                result[3] += 0.09333333333333334;
                result[4] += 0.02666666666666667;
                result[5] += 0.84;
              } else {
                result[0] += 0;
                result[1] += 0.11363636363636363;
                result[2] += 0.022727272727272728;
                result[3] += 0.4090909090909091;
                result[4] += 0.11363636363636363;
                result[5] += 0.3409090909090909;
              }
            } else {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.037037037037037035;
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0.12962962962962962;
              } else {
                result[0] += 0.09375;
                result[1] += 0.03125;
                result[2] += 0.11458333333333333;
                result[3] += 0.3333333333333333;
                result[4] += 0.0625;
                result[5] += 0.3645833333333333;
              }
            }
          } else {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
                result[0] += 0.1282051282051282;
                result[1] += 0.02564102564102564;
                result[2] += 0.20512820512820512;
                result[3] += 0.3076923076923077;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0.028985507246376812;
                result[1] += 0;
                result[2] += 0.8115942028985508;
                result[3] += 0.057971014492753624;
                result[4] += 0.043478260869565216;
                result[5] += 0.057971014492753624;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)111.5) ) ) {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9803921568627451;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.0196078431372549;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
        if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
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
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.8;
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
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)73) ) ) {
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
            if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)97.5) ) ) {
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
                result[3] += 0;
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
        }
      } else {
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)83) ) ) {
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)76) ) ) {
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
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)100.5) ) ) {
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
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
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
      if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9090909090909091;
                result[4] += 0;
                result[5] += 0.09090909090909091;
              }
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
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
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7973856209150327;
                result[3] += 0.17647058823529413;
                result[4] += 0;
                result[5] += 0.026143790849673203;
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
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)111.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9883720930232558;
                result[3] += 0.011627906976744186;
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
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
            if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5714285714285714;
                result[3] += 0.21428571428571427;
                result[4] += 0;
                result[5] += 0.21428571428571427;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)118) ) ) {
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
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)99.5) ) ) {
            if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)128.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)110.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9565217391304348;
                result[3] += 0.043478260869565216;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6923076923076923;
                result[3] += 0.3076923076923077;
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
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7272727272727273;
                result[3] += 0.2727272727272727;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9375;
                result[3] += 0.0625;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
                result[0] += 0.2857142857142857;
                result[1] += 0;
                result[2] += 0.5714285714285714;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9848993288590604;
                result[3] += 0.015100671140939598;
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
  result[0] /= 20;
  result[1] /= 20;
  result[2] /= 20;
  result[3] /= 20;
  result[4] /= 20;
  result[5] /= 20;
  
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
    

    FILE* file = fopen("./codegen_small/dataset_146/split_1/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
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
