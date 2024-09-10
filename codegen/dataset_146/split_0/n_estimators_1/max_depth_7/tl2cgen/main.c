
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
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
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
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
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.08333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
                result[5] += 0.25;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)55.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)73) ) ) {
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
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)70.5) ) ) {
                result[0] += 0.045454545454545456;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4090909090909091;
                result[5] += 0.5454545454545454;
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
                result[0] += 0;
                result[1] += 0.33333333333333337;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5000000000000001;
                result[5] += 0.16666666666666669;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.006920415224913495;
                result[4] += 0.005190311418685121;
                result[5] += 0.9878892733564014;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
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
                result[3] += 0.09467455621301775;
                result[4] += 0.05325443786982249;
                result[5] += 0.8520710059171598;
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55) ) ) {
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
                result[3] += 0.03333333333333333;
                result[4] += 0.05;
                result[5] += 0.9166666666666666;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.024844720496894408;
                result[3] += 0.7204968944099379;
                result[4] += 0;
                result[5] += 0.2546583850931677;
              } else {
                result[0] += 0;
                result[1] += 0.012195121951219513;
                result[2] += 0.024390243902439025;
                result[3] += 0.4024390243902439;
                result[4] += 0;
                result[5] += 0.5609756097560976;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
                result[0] += 0.2777777777777778;
                result[1] += 0.2222222222222222;
                result[2] += 0;
                result[3] += 0.018518518518518517;
                result[4] += 0.48148148148148145;
                result[5] += 0;
              } else {
                result[0] += 0.019417475728155338;
                result[1] += 0.019417475728155338;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.883495145631068;
                result[5] += 0.07766990291262135;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
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
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)117.5) ) ) {
                result[0] += 0.05405405405405406;
                result[1] += 0.08108108108108109;
                result[2] += 0;
                result[3] += 0.13513513513513514;
                result[4] += 0.4594594594594595;
                result[5] += 0.2702702702702703;
              } else {
                result[0] += 0;
                result[1] += 0.8421052631578947;
                result[2] += 0;
                result[3] += 0.15789473684210525;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
                result[0] += 0.2857142857142857;
                result[1] += 0;
                result[2] += 0.02040816326530612;
                result[3] += 0.2653061224489796;
                result[4] += 0.1836734693877551;
                result[5] += 0.24489795918367346;
              } else {
                result[0] += 0.941541186891054;
                result[1] += 0.002657218777679362;
                result[2] += 0.002657218777679362;
                result[3] += 0.013286093888396812;
                result[4] += 0.03365810451727192;
                result[5] += 0.006200177147918512;
              }
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)109.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
                result[0] += 0.030120481927710843;
                result[1] += 0.030120481927710843;
                result[2] += 0.07228915662650602;
                result[3] += 0.1686746987951807;
                result[4] += 0.21084337349397592;
                result[5] += 0.4879518072289157;
              } else {
                result[0] += 0.012121212121212123;
                result[1] += 0.018181818181818184;
                result[2] += 0.08484848484848487;
                result[3] += 0.5636363636363637;
                result[4] += 0.060606060606060615;
                result[5] += 0.2606060606060607;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)92) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8709677419354839;
                result[3] += 0.0967741935483871;
                result[4] += 0;
                result[5] += 0.03225806451612903;
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.2;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.9672131147540983;
                result[1] += 0;
                result[2] += 0.03278688524590164;
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
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)117) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0.11111111111111112;
                result[2] += 0.22222222222222224;
                result[3] += 0.4444444444444445;
                result[4] += 0.22222222222222224;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.16666666666666666;
                result[5] += 0.8333333333333334;
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
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
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
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)101) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)121) ) ) {
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
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
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
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)90) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
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
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)71) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.16666666666666666;
              } else {
                result[0] += 0.03225806451612903;
                result[1] += 0.06451612903225806;
                result[2] += 0.3225806451612903;
                result[3] += 0.5161290322580645;
                result[4] += 0;
                result[5] += 0.06451612903225806;
              }
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
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
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.88;
                result[3] += 0.12;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)124.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0.5;
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
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
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
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.006172839506172839;
                result[1] += 0;
                result[2] += 0.9382716049382716;
                result[3] += 0.043209876543209874;
                result[4] += 0;
                result[5] += 0.012345679012345678;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
                result[0] += 0.016666666666666666;
                result[1] += 0;
                result[2] += 0.6166666666666667;
                result[3] += 0.36666666666666664;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8873239436619719;
                result[3] += 0.11267605633802817;
                result[4] += 0;
                result[5] += 0;
              }
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)128.5) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
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
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7777777777777778;
                result[3] += 0.2222222222222222;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9976744186046511;
                result[3] += 0.002325581395348837;
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
