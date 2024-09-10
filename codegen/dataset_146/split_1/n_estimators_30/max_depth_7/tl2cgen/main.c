
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)50.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)65) ) ) {
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
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107.5) ) ) {
                result[0] += 0.004048582995951417;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9878542510121457;
                result[5] += 0.008097165991902834;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61) ) ) {
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
                result[4] += 0.2222222222222222;
                result[5] += 0.7777777777777778;
              }
            }
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)68) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
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
                result[4] += 0.05;
                result[5] += 0.95;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)69) ) ) {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0;
              } else {
                result[0] += 0.7368421052631579;
                result[1] += 0.10526315789473684;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.10526315789473684;
                result[5] += 0.05263157894736842;
              }
            }
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)80) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)81.5) ) ) {
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
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)51.5) ) ) {
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
                result[4] += 0.9696969696969697;
                result[5] += 0.030303030303030304;
              }
            }
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1111111111111111;
                result[4] += 0.6111111111111112;
                result[5] += 0.2777777777777778;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0388739946380697;
                result[4] += 0.02680965147453083;
                result[5] += 0.9343163538873994;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)66.5) ) ) {
                result[0] += 0.23529411764705882;
                result[1] += 0.11764705882352941;
                result[2] += 0;
                result[3] += 0.35294117647058826;
                result[4] += 0.29411764705882354;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.028985507246376812;
                result[3] += 0.2463768115942029;
                result[4] += 0.057971014492753624;
                result[5] += 0.6666666666666666;
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)90.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.05;
                result[4] += 0;
                result[5] += 0.95;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5714285714285714;
                result[4] += 0;
                result[5] += 0.42857142857142855;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
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
                result[3] += 0.8571428571428571;
                result[4] += 0;
                result[5] += 0.14285714285714285;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)94.5) ) ) {
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
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.07142857142857142;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0.14285714285714285;
                result[5] += 0.6428571428571429;
              } else {
                result[0] += 0.012048192771084338;
                result[1] += 0;
                result[2] += 0.006024096385542169;
                result[3] += 0.8253012048192772;
                result[4] += 0.006024096385542169;
                result[5] += 0.15060240963855423;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)48.5) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65.5) ) ) {
                result[0] += 0.021052631578947368;
                result[1] += 0.031578947368421054;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9368421052631579;
                result[5] += 0.010526315789473684;
              } else {
                result[0] += 0;
                result[1] += 0.5555555555555556;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0.1111111111111111;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)80.5) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54.5) ) ) {
                result[0] += 0.9333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.06666666666666667;
                result[5] += 0;
              } else {
                result[0] += 0.12195121951219512;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7804878048780488;
                result[5] += 0.0975609756097561;
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
                result[0] += 0.2777777777777778;
                result[1] += 0.2222222222222222;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4444444444444444;
                result[5] += 0.05555555555555555;
              } else {
                result[0] += 0.9278656126482213;
                result[1] += 0.001976284584980237;
                result[2] += 0;
                result[3] += 0.024703557312252964;
                result[4] += 0.03458498023715415;
                result[5] += 0.010869565217391304;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.16666666666666666;
                result[1] += 0;
                result[2] += 0.4166666666666667;
                result[3] += 0.4166666666666667;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)108.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
                result[0] += 0.010638297872340425;
                result[1] += 0.0070921985815602835;
                result[2] += 0.07801418439716312;
                result[3] += 0.5035460992907801;
                result[4] += 0.05319148936170213;
                result[5] += 0.3475177304964539;
              } else {
                result[0] += 0.4117647058823529;
                result[1] += 0.11764705882352941;
                result[2] += 0.47058823529411764;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.07766990291262137;
                result[1] += 0;
                result[2] += 0.5825242718446603;
                result[3] += 0.14563106796116507;
                result[4] += 0.01941747572815534;
                result[5] += 0.1747572815533981;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0.6666666666666666;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.8444444444444444;
                result[1] += 0.011111111111111112;
                result[2] += 0.03333333333333333;
                result[3] += 0;
                result[4] += 0.1111111111111111;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
                result[0] += 0.7857142857142857;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.21428571428571427;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0.8518518518518519;
                result[3] += 0;
                result[4] += 0.037037037037037035;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)106.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)76.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
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
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16279069767441862;
                result[3] += 0.813953488372093;
                result[4] += 0;
                result[5] += 0.023255813953488372;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.4;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)81) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0.6666666666666666;
                result[2] += 0;
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
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)111.5) ) ) {
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
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)94) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
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
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9166666666666667;
                result[3] += 0.04166666666666667;
                result[4] += 0;
                result[5] += 0.04166666666666667;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6153846153846154;
                result[3] += 0.38461538461538464;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8;
                result[4] += 0;
                result[5] += 0.2;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5833333333333334;
                result[3] += 0.4166666666666667;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82) ) ) {
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)102.5) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
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
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)112) ) ) {
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
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9285714285714286;
                result[3] += 0.07142857142857142;
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
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
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)85.5) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)80) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)110) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.896774193548387;
                result[3] += 0.1032258064516129;
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
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9487179487179487;
                result[3] += 0.05128205128205128;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)126.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67) ) ) {
                result[0] += 0.0038910505836575876;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9961089494163424;
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
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)63.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65.5) ) ) {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.008759124087591242;
                result[4] += 0.021897810218978103;
                result[5] += 0.9693430656934306;
              } else {
                result[0] += 0;
                result[1] += 0.2;
                result[2] += 0.6;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65.5) ) ) {
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.09090909090909091;
                result[4] += 0.509090909090909;
                result[5] += 0.4;
              } else {
                result[0] += 0.005076142131979695;
                result[1] += 0.04060913705583756;
                result[2] += 0;
                result[3] += 0.1319796954314721;
                result[4] += 0.07614213197969544;
                result[5] += 0.7461928934010152;
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0.0875;
                result[5] += 0.6625;
              } else {
                result[0] += 0.0038461538461538464;
                result[1] += 0.019230769230769232;
                result[2] += 0.011538461538461539;
                result[3] += 0.7076923076923077;
                result[4] += 0.0038461538461538464;
                result[5] += 0.25384615384615383;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65.5) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)43.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)114.5) ) ) {
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
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)129.5) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)102) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72.5) ) ) {
                result[0] += 0.018018018018018018;
                result[1] += 0.1981981981981982;
                result[2] += 0;
                result[3] += 0.009009009009009009;
                result[4] += 0.7747747747747747;
                result[5] += 0;
              } else {
                result[0] += 0.33999999999999997;
                result[1] += 0.039999999999999994;
                result[2] += 0.04999999999999999;
                result[3] += 0.11999999999999997;
                result[4] += 0.33999999999999997;
                result[5] += 0.10999999999999997;
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
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)64.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)44.5) ) ) {
                result[0] += 0;
                result[1] += 0.9285714285714286;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.07142857142857142;
                result[5] += 0;
              } else {
                result[0] += 0.08695652173913043;
                result[1] += 0.13043478260869565;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.782608695652174;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
                result[0] += 0.3181818181818182;
                result[1] += 0.015151515151515152;
                result[2] += 0;
                result[3] += 0.15151515151515152;
                result[4] += 0.13636363636363635;
                result[5] += 0.3787878787878788;
              } else {
                result[0] += 0.9559613319011815;
                result[1] += 0.00322234156820623;
                result[2] += 0.0010741138560687433;
                result[3] += 0.010741138560687433;
                result[4] += 0.02685284640171858;
                result[5] += 0.0021482277121374865;
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06060606060606061;
                result[3] += 0.6565656565656566;
                result[4] += 0.020202020202020204;
                result[5] += 0.26262626262626265;
              } else {
                result[0] += 0.015384615384615385;
                result[1] += 0;
                result[2] += 0.3384615384615385;
                result[3] += 0.23076923076923078;
                result[4] += 0.06153846153846154;
                result[5] += 0.35384615384615387;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
                result[0] += 0.025;
                result[1] += 0.05;
                result[2] += 0.15;
                result[3] += 0.5;
                result[4] += 0.075;
                result[5] += 0.2;
              } else {
                result[0] += 0.05063291139240506;
                result[1] += 0;
                result[2] += 0.8860759493670886;
                result[3] += 0.0379746835443038;
                result[4] += 0;
                result[5] += 0.02531645569620253;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)110) ) ) {
                result[0] += 0.1;
                result[1] += 0;
                result[2] += 0.15;
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)113.5) ) ) {
                result[0] += 0.2857142857142857;
                result[1] += 0;
                result[2] += 0.2857142857142857;
                result[3] += 0;
                result[4] += 0.42857142857142855;
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
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
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
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0425531914893617;
                result[3] += 0.1276595744680851;
                result[4] += 0;
                result[5] += 0.8297872340425532;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
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
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)109.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)77.5) ) ) {
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
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)76.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
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
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)121) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)112.5) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)66) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
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
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98.5) ) ) {
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)107) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.15384615384615385;
                result[3] += 0.7692307692307693;
                result[4] += 0;
                result[5] += 0.07692307692307693;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.65;
                result[3] += 0.2833333333333333;
                result[4] += 0;
                result[5] += 0.06666666666666667;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)117.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8666666666666667;
                result[3] += 0.13333333333333333;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)116.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7142857142857143;
                result[3] += 0.2857142857142857;
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
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9504950495049505;
                result[3] += 0.019801980198019802;
                result[4] += 0;
                result[5] += 0.0297029702970297;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.42857142857142855;
                result[3] += 0.5714285714285714;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)111.5) ) ) {
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
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)103.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
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
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)105.5) ) ) {
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9545454545454546;
                result[3] += 0.045454545454545456;
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
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)94.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
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
                result[2] += 0.7931034482758621;
                result[3] += 0.20689655172413793;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)119) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9090909090909091;
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9976415094339622;
                result[3] += 0.0023584905660377358;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)109.5) ) ) {
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
            }
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)80) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
                result[0] += 0.004464285714285714;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9910714285714286;
                result[5] += 0.004464285714285714;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6;
                result[5] += 0.4;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86.5) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)57.5) ) ) {
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.0625;
                result[5] += 0.9375;
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
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9;
                result[5] += 0.1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6;
                result[4] += 0.26666666666666666;
                result[5] += 0.13333333333333333;
              }
            }
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
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
                result[3] += 0.034532374100719423;
                result[4] += 0.0057553956834532375;
                result[5] += 0.9597122302158273;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)64.5) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.11764705882352941;
                result[3] += 0;
                result[4] += 0.8235294117647058;
                result[5] += 0.058823529411764705;
              } else {
                result[0] += 0;
                result[1] += 0.6470588235294118;
                result[2] += 0;
                result[3] += 0.29411764705882354;
                result[4] += 0;
                result[5] += 0.058823529411764705;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9767441860465116;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.023255813953488372;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0.05405405405405406;
                result[2] += 0;
                result[3] += 0.10810810810810811;
                result[4] += 0.5135135135135135;
                result[5] += 0.32432432432432434;
              } else {
                result[0] += 0;
                result[1] += 0.02403846153846154;
                result[2] += 0.009615384615384616;
                result[3] += 0.23557692307692307;
                result[4] += 0.0673076923076923;
                result[5] += 0.6634615384615384;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0.0625;
                result[5] += 0.6875;
              } else {
                result[0] += 0.010204081632653062;
                result[1] += 0;
                result[2] += 0.04081632653061225;
                result[3] += 0.8673469387755103;
                result[4] += 0;
                result[5] += 0.0816326530612245;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)94) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)73) ) ) {
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
                result[4] += 0.8333333333333334;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)76) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)103.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
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
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)51) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.043478260869565216;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9565217391304348;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.125;
                result[1] += 0.20833333333333334;
                result[2] += 0;
                result[3] += 0.125;
                result[4] += 0.5416666666666666;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06976744186046512;
                result[3] += 0.11627906976744186;
                result[4] += 0.046511627906976744;
                result[5] += 0.7674418604651163;
              } else {
                result[0] += 0.7073170731707317;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0975609756097561;
                result[4] += 0.04878048780487805;
                result[5] += 0.14634146341463414;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
                result[0] += 0.9467336683417084;
                result[1] += 0.002010050251256281;
                result[2] += 0.005025125628140703;
                result[3] += 0.004020100502512562;
                result[4] += 0.03919597989949748;
                result[5] += 0.003015075376884421;
              } else {
                result[0] += 0.43333333333333335;
                result[1] += 0.06666666666666667;
                result[2] += 0.05;
                result[3] += 0.16666666666666666;
                result[4] += 0.13333333333333333;
                result[5] += 0.15;
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
                result[0] += 0.1111111111111111;
                result[1] += 0.19444444444444445;
                result[2] += 0;
                result[3] += 0.027777777777777776;
                result[4] += 0.3333333333333333;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0.019230769230769232;
                result[2] += 0.028846153846153848;
                result[3] += 0.5673076923076923;
                result[4] += 0.04807692307692308;
                result[5] += 0.33653846153846156;
              }
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)121) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.90625;
                result[3] += 0.03125;
                result[4] += 0;
                result[5] += 0.0625;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0;
                result[4] += 0.5555555555555556;
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
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)115.5) ) ) {
                result[0] += 0.15789473684210525;
                result[1] += 0;
                result[2] += 0.8421052631578947;
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)91) ) ) {
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)106) ) ) {
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)50.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.15789473684210525;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8421052631578947;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69) ) ) {
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
                result[3] += 0.15151515151515152;
                result[4] += 0;
                result[5] += 0.8484848484848485;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.13559322033898305;
                result[3] += 0.6949152542372882;
                result[4] += 0;
                result[5] += 0.1694915254237288;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.45;
                result[3] += 0.05;
                result[4] += 0;
                result[5] += 0.5;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65.5) ) ) {
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
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)89) ) ) {
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)108.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16216216216216217;
                result[3] += 0.8378378378378378;
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
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
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98) ) ) {
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
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.125;
              }
            }
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
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
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)116.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.84;
                result[3] += 0.16;
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
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)88) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
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
                result[0] += 0.16666666666666669;
                result[1] += 0;
                result[2] += 0.6666666666666667;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.16666666666666669;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)103.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7924528301886793;
                result[3] += 0.20754716981132076;
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
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)109.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.42857142857142855;
                result[3] += 0.5714285714285714;
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0.8;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.10526315789473684;
                result[1] += 0;
                result[2] += 0.7894736842105263;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.10526315789473684;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9111111111111111;
                result[3] += 0.08888888888888889;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9840637450199203;
                result[3] += 0.01593625498007968;
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
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
                result[4] += 0.8;
                result[5] += 0.2;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)57.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3;
                result[5] += 0.7;
              } else {
                result[0] += 0.03846153846153847;
                result[1] += 0.03846153846153847;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8846153846153847;
                result[5] += 0.03846153846153847;
              }
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82.5) ) ) {
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
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)57.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
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
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61) ) ) {
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
                result[4] += 0.1;
                result[5] += 0.9;
              }
            }
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2222222222222222;
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
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59) ) ) {
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
                result[3] += 0.0077279752704791345;
                result[4] += 0.00927357032457496;
                result[5] += 0.9829984544049459;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0.6666666666666666;
                result[5] += 0.08333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.152;
                result[4] += 0;
                result[5] += 0.848;
              }
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)76) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
                result[0] += 0.06666666666666667;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.03333333333333333;
                result[4] += 0.8;
                result[5] += 0.1;
              } else {
                result[0] += 0;
                result[1] += 0.05555555555555555;
                result[2] += 0.013888888888888888;
                result[3] += 0.08333333333333333;
                result[4] += 0.2916666666666667;
                result[5] += 0.5555555555555556;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06172839506172839;
                result[4] += 0.037037037037037035;
                result[5] += 0.9012345679012346;
              } else {
                result[0] += 0;
                result[1] += 0.009174311926605505;
                result[2] += 0.009174311926605505;
                result[3] += 0.45871559633027525;
                result[4] += 0;
                result[5] += 0.5229357798165137;
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.041666666666666664;
                result[3] += 0.3125;
                result[4] += 0.020833333333333332;
                result[5] += 0.625;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
                result[0] += 0.016666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8916666666666667;
                result[4] += 0;
                result[5] += 0.09166666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2727272727272727;
                result[4] += 0;
                result[5] += 0.7272727272727273;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)102) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0.033707865168539325;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9550561797752809;
                result[5] += 0.011235955056179775;
              } else {
                result[0] += 0.32;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.64;
                result[5] += 0.04;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.6666666666666666;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)106) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)74) ) ) {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6;
                result[4] += 0.2;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.03333333333333333;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0.8666666666666667;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
                result[0] += 0.9226361031518625;
                result[1] += 0.004775549188156638;
                result[2] += 0.0019102196752626551;
                result[3] += 0.013371537726838587;
                result[4] += 0.049665711556829036;
                result[5] += 0.007640878701050621;
              } else {
                result[0] += 0.42857142857142866;
                result[1] += 0.03174603174603175;
                result[2] += 0.2063492063492064;
                result[3] += 0.17460317460317462;
                result[4] += 0.14285714285714288;
                result[5] += 0.015873015873015876;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.02564102564102564;
                result[3] += 0.3525641025641026;
                result[4] += 0.00641025641025641;
                result[5] += 0.6153846153846154;
              } else {
                result[0] += 0.05714285714285714;
                result[1] += 0.017142857142857144;
                result[2] += 0.3314285714285714;
                result[3] += 0.32;
                result[4] += 0.09142857142857143;
                result[5] += 0.18285714285714286;
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)113.5) ) ) {
                result[0] += 0.15789473684210525;
                result[1] += 0.2631578947368421;
                result[2] += 0.3684210526315789;
                result[3] += 0;
                result[4] += 0.21052631578947367;
                result[5] += 0;
              } else {
                result[0] += 0.9054054054054054;
                result[1] += 0;
                result[2] += 0.02702702702702703;
                result[3] += 0;
                result[4] += 0.04054054054054054;
                result[5] += 0.02702702702702703;
              }
            }
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
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
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67) ) ) {
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
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.058823529411764705;
                result[3] += 0.9411764705882353;
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7058823529411765;
                result[3] += 0.23529411764705882;
                result[4] += 0;
                result[5] += 0.058823529411764705;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)76.5) ) ) {
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
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
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
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)107) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)128.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.21052631578947367;
                result[3] += 0.7105263157894737;
                result[4] += 0;
                result[5] += 0.07894736842105263;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9;
                result[3] += 0.1;
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)67) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9090909090909091;
                result[3] += 0.06818181818181818;
                result[4] += 0;
                result[5] += 0.022727272727272728;
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)106.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.09090909090909091;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9090909090909091;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)125) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)109.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)108.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)94.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)102) ) ) {
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102) ) ) {
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
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99.5) ) ) {
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
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
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9343065693430657;
                result[3] += 0.06569343065693431;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0018050541516245488;
                result[1] += 0;
                result[2] += 0.9855595667870036;
                result[3] += 0.010830324909747292;
                result[4] += 0;
                result[5] += 0.0018050541516245488;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)28) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.023809523809523808;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9285714285714286;
                result[5] += 0.047619047619047616;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)59) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.08;
                result[2] += 0;
                result[3] += 0.04;
                result[4] += 0.6;
                result[5] += 0.28;
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.19230769230769232;
                result[5] += 0.8076923076923077;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
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
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8461538461538461;
                result[5] += 0.15384615384615385;
              } else {
                result[0] += 0;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)58.5) ) ) {
                result[0] += 0;
                result[1] += 0.07692307692307693;
                result[2] += 0;
                result[3] += 0.46153846153846156;
                result[4] += 0;
                result[5] += 0.46153846153846156;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.019877675840978593;
                result[4] += 0.021406727828746176;
                result[5] += 0.9587155963302753;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.09090909090909091;
                result[4] += 0.8484848484848485;
                result[5] += 0.06060606060606061;
              } else {
                result[0] += 0;
                result[1] += 0.09090909090909091;
                result[2] += 0;
                result[3] += 0.45454545454545453;
                result[4] += 0;
                result[5] += 0.45454545454545453;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
                result[0] += 0.10526315789473684;
                result[1] += 0.05263157894736842;
                result[2] += 0;
                result[3] += 0.10526315789473684;
                result[4] += 0.5263157894736842;
                result[5] += 0.21052631578947367;
              } else {
                result[0] += 0;
                result[1] += 0.00392156862745098;
                result[2] += 0;
                result[3] += 0.1568627450980392;
                result[4] += 0.03137254901960784;
                result[5] += 0.807843137254902;
              }
            }
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.39473684210526316;
                result[4] += 0;
                result[5] += 0.6052631578947368;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.04081632653061224;
                result[4] += 0;
                result[5] += 0.9591836734693877;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61) ) ) {
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
                result[0] += 0.03048780487804878;
                result[1] += 0.006097560975609756;
                result[2] += 0.012195121951219513;
                result[3] += 0.7560975609756098;
                result[4] += 0;
                result[5] += 0.1951219512195122;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0.9;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)68.5) ) ) {
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77.5) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)105) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)93) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
                result[0] += 0;
                result[1] += 0.9545454545454546;
                result[2] += 0;
                result[3] += 0.022727272727272728;
                result[4] += 0.022727272727272728;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.6;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)108) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)51) ) ) {
                result[0] += 0.6;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0;
              } else {
                result[0] += 0.012048192771084338;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9879518072289156;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)76.5) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)107.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)83.5) ) ) {
                result[0] += 0.15384615384615385;
                result[1] += 0;
                result[2] += 0.20512820512820512;
                result[3] += 0.2564102564102564;
                result[4] += 0.28205128205128205;
                result[5] += 0.10256410256410256;
              } else {
                result[0] += 0.9090056285178237;
                result[1] += 0.005628517823639776;
                result[2] += 0.010318949343339589;
                result[3] += 0.01782363977485929;
                result[4] += 0.05065666041275798;
                result[5] += 0.006566604127579739;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)91) ) ) {
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
            }
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)113.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
                result[0] += 0.005988023952095809;
                result[1] += 0.005988023952095809;
                result[2] += 0.09580838323353294;
                result[3] += 0.5329341317365269;
                result[4] += 0.017964071856287425;
                result[5] += 0.3413173652694611;
              } else {
                result[0] += 0.072;
                result[1] += 0;
                result[2] += 0.656;
                result[3] += 0.152;
                result[4] += 0.024;
                result[5] += 0.096;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82) ) ) {
                result[0] += 0.875;
                result[1] += 0;
                result[2] += 0.05;
                result[3] += 0;
                result[4] += 0.075;
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
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)74) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78) ) ) {
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
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)87) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)106.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.05;
                result[4] += 0;
                result[5] += 0.75;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.12;
                result[3] += 0.56;
                result[4] += 0.08;
                result[5] += 0.24;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86) ) ) {
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0.8888888888888888;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5384615384615384;
                result[3] += 0.46153846153846156;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
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
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)112) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7857142857142857;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0.07142857142857142;
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)106.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67) ) ) {
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
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
                result[3] += 0.06493506493506493;
                result[4] += 0;
                result[5] += 0.01948051948051948;
              }
            }
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)106) ) ) {
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
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88) ) ) {
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
            }
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)112.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72) ) ) {
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)120.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.92;
                result[3] += 0.08;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4444444444444444;
                result[3] += 0.5555555555555556;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)115.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9166666666666666;
                result[3] += 0.08333333333333333;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.992;
                result[3] += 0.008;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)107.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9411764705882353;
                result[3] += 0.058823529411764705;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
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
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)118.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9583333333333334;
                result[3] += 0.041666666666666664;
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)117) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)111.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)91.5) ) ) {
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)48.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.00411522633744856;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9958847736625515;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)72) ) ) {
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)61.5) ) ) {
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
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.0041265474552957355;
                result[2] += 0;
                result[3] += 0.02200825309491059;
                result[4] += 0.009628610729023384;
                result[5] += 0.9642365887207703;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79.5) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)68) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9767441860465116;
                result[1] += 0.023255813953488372;
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
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)64.5) ) ) {
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
                result[3] += 0.11917098445595854;
                result[4] += 0.08290155440414508;
                result[5] += 0.7979274611398963;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.1111111111111111;
                result[2] += 0;
                result[3] += 0.05555555555555555;
                result[4] += 0.25;
                result[5] += 0.5833333333333334;
              } else {
                result[0] += 0.012987012987012988;
                result[1] += 0.004329004329004329;
                result[2] += 0.04329004329004329;
                result[3] += 0.6277056277056277;
                result[4] += 0.021645021645021644;
                result[5] += 0.29004329004329005;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)40) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.1647727272727273;
                result[1] += 0.02840909090909091;
                result[2] += 0;
                result[3] += 0.011363636363636366;
                result[4] += 0.7613636363636365;
                result[5] += 0.034090909090909095;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)47) ) ) {
                result[0] += 0;
                result[1] += 0.9824561403508771;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.017543859649122806;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.625;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.375;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.175;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.825;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
                result[0] += 0.9568106312292359;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.014396456256921373;
                result[4] += 0.023255813953488372;
                result[5] += 0.005537098560354375;
              } else {
                result[0] += 0.5072463768115943;
                result[1] += 0.014492753623188408;
                result[2] += 0.1449275362318841;
                result[3] += 0.1449275362318841;
                result[4] += 0.11594202898550726;
                result[5] += 0.07246376811594205;
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0.17857142857142858;
                result[2] += 0;
                result[3] += 0.03571428571428571;
                result[4] += 0.6428571428571429;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0.02586206896551724;
                result[1] += 0;
                result[2] += 0.008620689655172414;
                result[3] += 0.14655172413793102;
                result[4] += 0.11206896551724138;
                result[5] += 0.7068965517241379;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
                result[0] += 0.07575757575757576;
                result[1] += 0;
                result[2] += 0.06060606060606061;
                result[3] += 0.5681818181818182;
                result[4] += 0.022727272727272728;
                result[5] += 0.2727272727272727;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7037037037037037;
                result[3] += 0.25925925925925924;
                result[4] += 0;
                result[5] += 0.037037037037037035;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.8958333333333334;
                result[1] += 0;
                result[2] += 0.10416666666666667;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0.016666666666666663;
                result[1] += 0;
                result[2] += 0.8999999999999998;
                result[3] += 0.04999999999999999;
                result[4] += 0.016666666666666663;
                result[5] += 0.016666666666666663;
              }
            }
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101.5) ) ) {
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)118) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)58) ) ) {
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
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)92) ) ) {
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.034482758620689655;
                result[3] += 0.896551724137931;
                result[4] += 0;
                result[5] += 0.06896551724137931;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)79) ) ) {
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
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.8;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0.3333333333333333;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)112) ) ) {
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
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.09090909090909091;
                result[3] += 0.9090909090909091;
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
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)111) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
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
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.696969696969697;
                result[3] += 0.18181818181818182;
                result[4] += 0;
                result[5] += 0.12121212121212122;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.35714285714285715;
                result[3] += 0.6428571428571429;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)111.5) ) ) {
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
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)88.5) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)119.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8632478632478633;
                result[3] += 0.13675213675213677;
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
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9901960784313726;
                result[3] += 0.00980392156862745;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.03225806451612903;
                result[1] += 0;
                result[2] += 0.8387096774193549;
                result[3] += 0.12903225806451613;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)113.5) ) ) {
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102) ) ) {
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
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.954954954954955;
                result[3] += 0.04504504504504504;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89) ) ) {
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
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.95;
                result[3] += 0.05;
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
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)51.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
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
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)56) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66.5) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84) ) ) {
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
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)60) ) ) {
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
                result[3] += 0.019858156028368795;
                result[4] += 0.02127659574468085;
                result[5] += 0.9588652482269504;
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62) ) ) {
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
                result[3] += 0.09836065573770492;
                result[4] += 0.02459016393442623;
                result[5] += 0.8770491803278688;
              } else {
                result[0] += 0;
                result[1] += 0.10497237569060773;
                result[2] += 0;
                result[3] += 0.1712707182320442;
                result[4] += 0.26519337016574585;
                result[5] += 0.4585635359116022;
              }
            }
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8676470588235294;
                result[4] += 0;
                result[5] += 0.1323529411764706;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2222222222222222;
                result[4] += 0.1111111111111111;
                result[5] += 0.6666666666666666;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.041666666666666664;
                result[4] += 0;
                result[5] += 0.9583333333333334;
              } else {
                result[0] += 0.043478260869565216;
                result[1] += 0;
                result[2] += 0.4782608695652174;
                result[3] += 0.13043478260869565;
                result[4] += 0;
                result[5] += 0.34782608695652173;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)63) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)84.5) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)50) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)86) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
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
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)46) ) ) {
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)49.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)121) ) ) {
                result[0] += 0;
                result[1] += 0.02040816326530612;
                result[2] += 0.02040816326530612;
                result[3] += 0.02040816326530612;
                result[4] += 0.9387755102040817;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54.5) ) ) {
                result[0] += 0.5555555555555556;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4444444444444444;
                result[5] += 0;
              } else {
                result[0] += 0.024691358024691357;
                result[1] += 0.12345679012345678;
                result[2] += 0;
                result[3] += 0.024691358024691357;
                result[4] += 0.7530864197530864;
                result[5] += 0.07407407407407407;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)108.5) ) ) {
                result[0] += 0;
                result[1] += 0.9016393442622951;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.09836065573770492;
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
                result[0] += 0.13333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8666666666666667;
                result[5] += 0;
              } else {
                result[0] += 0.93488824101069;
                result[1] += 0.006802721088435374;
                result[2] += 0;
                result[3] += 0.010689990281827016;
                result[4] += 0.03304178814382896;
                result[5] += 0.014577259475218658;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
                result[0] += 0.03125;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0.25;
                result[4] += 0.34375;
                result[5] += 0.25;
              } else {
                result[0] += 0.6111111111111112;
                result[1] += 0;
                result[2] += 0.3888888888888889;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)113.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.13114754098360656;
                result[4] += 0;
                result[5] += 0.8688524590163934;
              } else {
                result[0] += 0;
                result[1] += 0.012987012987012988;
                result[2] += 0.06493506493506493;
                result[3] += 0.4935064935064935;
                result[4] += 0.05194805194805195;
                result[5] += 0.37662337662337664;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
                result[0] += 0.02631578947368421;
                result[1] += 0;
                result[2] += 0.2894736842105263;
                result[3] += 0.5131578947368421;
                result[4] += 0.05263157894736842;
                result[5] += 0.11842105263157894;
              } else {
                result[0] += 0.07936507936507937;
                result[1] += 0;
                result[2] += 0.7460317460317462;
                result[3] += 0.14285714285714288;
                result[4] += 0.015873015873015876;
                result[5] += 0.015873015873015876;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
                result[0] += 0.42857142857142855;
                result[1] += 0;
                result[2] += 0.5714285714285714;
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69) ) ) {
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.875;
                result[4] += 0;
                result[5] += 0.125;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.36363636363636365;
                result[3] += 0.6363636363636364;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)116.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102.5) ) ) {
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)60) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)100.5) ) ) {
                result[0] += 0.007731958762886598;
                result[1] += 0;
                result[2] += 0.8711340206185567;
                result[3] += 0.11082474226804123;
                result[4] += 0;
                result[5] += 0.010309278350515464;
              } else {
                result[0] += 0.8;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)123) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9791666666666666;
                result[3] += 0.020833333333333332;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7948717948717948;
                result[3] += 0.20512820512820512;
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
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
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
                result[4] += 0.9642857142857143;
                result[5] += 0.03571428571428571;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1111111111111111;
                result[5] += 0.8888888888888888;
              } else {
                result[0] += 0.037037037037037035;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9259259259259259;
                result[5] += 0.037037037037037035;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67) ) ) {
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)49.5) ) ) {
                result[0] += 0.75;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.08333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9166666666666666;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)50) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9166666666666666;
                result[5] += 0.08333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0.6;
                result[2] += 0;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
                result[0] += 0.0014245014245014246;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.021367521367521368;
                result[4] += 0.017094017094017096;
                result[5] += 0.9601139601139601;
              } else {
                result[0] += 0.005988023952095809;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.17964071856287425;
                result[4] += 0.09580838323353294;
                result[5] += 0.718562874251497;
              }
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
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
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)78) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)80) ) ) {
                result[0] += 0.022222222222222223;
                result[1] += 0.06666666666666667;
                result[2] += 0;
                result[3] += 0.06666666666666667;
                result[4] += 0.7555555555555555;
                result[5] += 0.08888888888888889;
              } else {
                result[0] += 0.2222222222222222;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.7777777777777778;
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
                result[0] += 0.03488372093023256;
                result[1] += 0;
                result[2] += 0.040697674418604654;
                result[3] += 0.3546511627906977;
                result[4] += 0.023255813953488372;
                result[5] += 0.5465116279069767;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)53.5) ) ) {
                result[0] += 0.3103448275862069;
                result[1] += 0.5862068965517241;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.10344827586206896;
                result[5] += 0;
              } else {
                result[0] += 0.0547945205479452;
                result[1] += 0.0547945205479452;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6575342465753424;
                result[5] += 0.2328767123287671;
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
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
                result[0] += 0.013888888888888888;
                result[1] += 0.027777777777777776;
                result[2] += 0.013888888888888888;
                result[3] += 0.16666666666666666;
                result[4] += 0.013888888888888888;
                result[5] += 0.7638888888888888;
              } else {
                result[0] += 0;
                result[1] += 0.11764705882352941;
                result[2] += 0.058823529411764705;
                result[3] += 0.5882352941176471;
                result[4] += 0.058823529411764705;
                result[5] += 0.17647058823529413;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68) ) ) {
                result[0] += 0.037037037037037035;
                result[1] += 0.2222222222222222;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7407407407407407;
                result[5] += 0;
              } else {
                result[0] += 0.941871921182266;
                result[1] += 0;
                result[2] += 0.0009852216748768472;
                result[3] += 0.012807881773399015;
                result[4] += 0.03251231527093596;
                result[5] += 0.011822660098522168;
              }
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4642857142857143;
                result[4] += 0;
                result[5] += 0.5357142857142857;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9245283018867925;
                result[4] += 0;
                result[5] += 0.07547169811320754;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.028985507246376812;
                result[3] += 0.2318840579710145;
                result[4] += 0.014492753623188406;
                result[5] += 0.7246376811594203;
              } else {
                result[0] += 0.0379746835443038;
                result[1] += 0;
                result[2] += 0.06329113924050633;
                result[3] += 0.5822784810126582;
                result[4] += 0.0759493670886076;
                result[5] += 0.24050632911392406;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3611111111111111;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.1388888888888889;
              } else {
                result[0] += 0.02127659574468085;
                result[1] += 0;
                result[2] += 0.7021276595744681;
                result[3] += 0.02127659574468085;
                result[4] += 0.02127659574468085;
                result[5] += 0.23404255319148937;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)108.5) ) ) {
                result[0] += 0.2777777777777778;
                result[1] += 0.1111111111111111;
                result[2] += 0.5555555555555556;
                result[3] += 0.05555555555555555;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.88;
                result[1] += 0;
                result[2] += 0.04;
                result[3] += 0;
                result[4] += 0.08;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)82) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)101.5) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)110) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.047619047619047616;
                result[3] += 0.9047619047619048;
                result[4] += 0;
                result[5] += 0.047619047619047616;
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)76.5) ) ) {
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
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
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
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0;
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
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)103.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0.7777777777777778;
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
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102) ) ) {
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)76.5) ) ) {
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
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.25;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)92) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
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
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.21428571428571427;
                result[3] += 0.7857142857142857;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.625;
                result[3] += 0;
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
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.8;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.011428571428571429;
                result[1] += 0;
                result[2] += 0.9085714285714286;
                result[3] += 0.08;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0031007751937984496;
                result[1] += 0;
                result[2] += 0.9798449612403101;
                result[3] += 0.015503875968992248;
                result[4] += 0;
                result[5] += 0.0015503875968992248;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)96) ) ) {
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)68.5) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)52) ) ) {
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)64) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)57) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
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
                result[4] += 0.7142857142857143;
                result[5] += 0.2857142857142857;
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
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)54.5) ) ) {
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
                result[4] += 0.9444444444444444;
                result[5] += 0.05555555555555555;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.01597444089456869;
                result[4] += 0.01437699680511182;
                result[5] += 0.9696485623003195;
              } else {
                result[0] += 0.032490974729241874;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1371841155234657;
                result[4] += 0.09025270758122744;
                result[5] += 0.740072202166065;
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06666666666666667;
                result[4] += 0.022222222222222223;
                result[5] += 0.9111111111111111;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4166666666666667;
                result[4] += 0;
                result[5] += 0.5833333333333334;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8411764705882353;
                result[4] += 0.01764705882352941;
                result[5] += 0.1411764705882353;
              } else {
                result[0] += 0;
                result[1] += 0.14285714285714285;
                result[2] += 0.07142857142857142;
                result[3] += 0.35714285714285715;
                result[4] += 0;
                result[5] += 0.42857142857142855;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.08333333333333333;
                result[3] += 0.4722222222222222;
                result[4] += 0;
                result[5] += 0.4444444444444444;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63) ) ) {
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
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)121.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)132.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)46.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0.16666666666666666;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0.16666666666666666;
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
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)48.5) ) ) {
                result[0] += 0;
                result[1] += 0.75;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0;
              } else {
                result[0] += 0.07142857142857144;
                result[1] += 0.06122448979591837;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8571428571428572;
                result[5] += 0.010204081632653062;
              }
            }
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)112.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
                result[0] += 0.5277777777777779;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.23611111111111113;
                result[4] += 0.19444444444444448;
                result[5] += 0.04166666666666667;
              } else {
                result[0] += 0.9279749478079333;
                result[1] += 0.0031315240083507312;
                result[2] += 0.005219206680584552;
                result[3] += 0.012526096033402925;
                result[4] += 0.04488517745302715;
                result[5] += 0.0062630480167014625;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0.07246376811594203;
                result[2] += 0;
                result[3] += 0.11594202898550725;
                result[4] += 0.18840579710144928;
                result[5] += 0.6231884057971014;
              } else {
                result[0] += 0.01282051282051282;
                result[1] += 0.019230769230769232;
                result[2] += 0.11538461538461539;
                result[3] += 0.5;
                result[4] += 0.07051282051282051;
                result[5] += 0.28205128205128205;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.35;
                result[4] += 0;
                result[5] += 0.45;
              } else {
                result[0] += 0.027777777777777776;
                result[1] += 0.05555555555555555;
                result[2] += 0.6666666666666666;
                result[3] += 0.16666666666666666;
                result[4] += 0.027777777777777776;
                result[5] += 0.05555555555555555;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)101) ) ) {
                result[0] += 0.21276595744680854;
                result[1] += 0;
                result[2] += 0.6595744680851064;
                result[3] += 0.08510638297872342;
                result[4] += 0;
                result[5] += 0.04255319148936171;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
                result[0] += 0.875;
                result[1] += 0;
                result[2] += 0.028846153846153848;
                result[3] += 0;
                result[4] += 0.09615384615384616;
                result[5] += 0;
              } else {
                result[0] += 0.35714285714285715;
                result[1] += 0;
                result[2] += 0.6428571428571429;
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
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
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07575757575757576;
                result[3] += 0.9090909090909091;
                result[4] += 0;
                result[5] += 0.015151515151515152;
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
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8571428571428571;
                result[4] += 0;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5789473684210527;
                result[3] += 0.05263157894736842;
                result[4] += 0;
                result[5] += 0.3684210526315789;
              }
            }
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)105) ) ) {
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
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86) ) ) {
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.25;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9333333333333333;
                result[3] += 0.06666666666666667;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.9;
              }
            }
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)80.5) ) ) {
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
                result[3] += 0.6666666666666666;
                result[4] += 0;
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87) ) ) {
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
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)112.5) ) ) {
                result[0] += 0.00819672131147541;
                result[1] += 0;
                result[2] += 0.7704918032786885;
                result[3] += 0.22131147540983606;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9622641509433962;
                result[3] += 0.03773584905660377;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
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
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
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
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9375;
                result[3] += 0.0625;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.989451476793249;
                result[3] += 0.010548523206751054;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)55.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)48.5) ) ) {
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
                result[0] += 0.8;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9646017699115044;
                result[5] += 0.035398230088495575;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)55) ) ) {
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
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.23529411764705882;
                result[5] += 0.7647058823529411;
              } else {
                result[0] += 0;
                result[1] += 0.75;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0;
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
                result[0] += 0.13333333333333333;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0.13333333333333333;
                result[4] += 0.4;
                result[5] += 0.13333333333333333;
              }
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7777777777777778;
                result[5] += 0.2222222222222222;
              } else {
                result[0] += 0;
                result[1] += 0.03225806451612903;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.967741935483871;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
                result[0] += 0.0012610340479192938;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.03026481715006305;
                result[4] += 0.03026481715006305;
                result[5] += 0.9382093316519546;
              } else {
                result[0] += 0.02702702702702703;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2072072072072072;
                result[4] += 0.13513513513513514;
                result[5] += 0.6306306306306306;
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0.02564102564102564;
                result[2] += 0;
                result[3] += 0.14102564102564102;
                result[4] += 0.11538461538461539;
                result[5] += 0.717948717948718;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0.02666666666666667;
                result[2] += 0;
                result[3] += 0.30666666666666664;
                result[4] += 0.02666666666666667;
                result[5] += 0.64;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.02366863905325444;
                result[3] += 0.7514792899408285;
                result[4] += 0.01183431952662722;
                result[5] += 0.21301775147928997;
              }
            }
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)40) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)40) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.031496062992125984;
                result[1] += 0.06299212598425197;
                result[2] += 0.007874015748031496;
                result[3] += 0;
                result[4] += 0.8740157480314961;
                result[5] += 0.023622047244094488;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
                result[0] += 0.5238095238095238;
                result[1] += 0.047619047619047616;
                result[2] += 0;
                result[3] += 0.19047619047619047;
                result[4] += 0.19047619047619047;
                result[5] += 0.047619047619047616;
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)99.5) ) ) {
                result[0] += 0.07142857142857142;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7857142857142857;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0;
                result[1] += 0.96875;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.03125;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
                result[0] += 0.391304347826087;
                result[1] += 0.07608695652173914;
                result[2] += 0.021739130434782608;
                result[3] += 0.2391304347826087;
                result[4] += 0.05434782608695652;
                result[5] += 0.21739130434782608;
              } else {
                result[0] += 0.9190523198420534;
                result[1] += 0.002961500493583416;
                result[2] += 0.005923000987166832;
                result[3] += 0.01974333662388944;
                result[4] += 0.04738400789733466;
                result[5] += 0.00493583415597236;
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07692307692307693;
                result[3] += 0.6346153846153846;
                result[4] += 0.11538461538461539;
                result[5] += 0.17307692307692307;
              } else {
                result[0] += 0.020833333333333332;
                result[1] += 0.10416666666666667;
                result[2] += 0.20833333333333334;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.4166666666666667;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)114.5) ) ) {
                result[0] += 0.012195121951219513;
                result[1] += 0;
                result[2] += 0.6829268292682927;
                result[3] += 0.10975609756097561;
                result[4] += 0.024390243902439025;
                result[5] += 0.17073170731707318;
              } else {
                result[0] += 0.8260869565217391;
                result[1] += 0;
                result[2] += 0.13043478260869565;
                result[3] += 0;
                result[4] += 0.043478260869565216;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)94) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4666666666666667;
                result[4] += 0.26666666666666666;
                result[5] += 0.26666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16;
                result[3] += 0.12;
                result[4] += 0;
                result[5] += 0.72;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
                result[0] += 0.3125;
                result[1] += 0.0625;
                result[2] += 0.0625;
                result[3] += 0.0625;
                result[4] += 0.3125;
                result[5] += 0.1875;
              } else {
                result[0] += 0.14285714285714285;
                result[1] += 0;
                result[2] += 0.8571428571428571;
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
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
                result[2] += 0.043478260869565216;
                result[3] += 0.5652173913043478;
                result[4] += 0;
                result[5] += 0.391304347826087;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98.5) ) ) {
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
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
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
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)92.5) ) ) {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.6;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0.28205128205128205;
                result[4] += 0;
                result[5] += 0.05128205128205128;
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
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)105) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)83) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98.5) ) ) {
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
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)109) ) ) {
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
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
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9558823529411765;
                result[3] += 0.04411764705882353;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)118) ) ) {
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
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)111.5) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95) ) ) {
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.823529411764706;
                result[3] += 0.16666666666666669;
                result[4] += 0;
                result[5] += 0.009803921568627453;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6923076923076923;
                result[3] += 0.3076923076923077;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0033613445378151263;
                result[1] += 0;
                result[2] += 0.9747899159663865;
                result[3] += 0.020168067226890758;
                result[4] += 0;
                result[5] += 0.0016806722689075631;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)80) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)95.5) ) ) {
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
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)68) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9960629921259843;
                result[5] += 0.003937007874015748;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0.3333333333333333;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.058823529411764705;
                result[1] += 0.058823529411764705;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8823529411764706;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)70) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)76.5) ) ) {
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
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)59) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
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
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)69) ) ) {
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
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.005813953488372093;
                result[4] += 0.010174418604651164;
                result[5] += 0.9840116279069767;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07272727272727272;
                result[4] += 0.16363636363636364;
                result[5] += 0.7636363636363637;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)75) ) ) {
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
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06557377049180328;
                result[4] += 0.47540983606557374;
                result[5] += 0.45901639344262296;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.011764705882352941;
                result[3] += 0.10588235294117647;
                result[4] += 0.041176470588235294;
                result[5] += 0.8411764705882353;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0.125;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0.625;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9090909090909091;
                result[5] += 0.09090909090909091;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.014285714285714285;
                result[1] += 0;
                result[2] += 0.014285714285714285;
                result[3] += 0.6714285714285714;
                result[4] += 0;
                result[5] += 0.3;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)54.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)101.5) ) ) {
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)106.5) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)108) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)49.5) ) ) {
                result[0] += 0.7692307692307693;
                result[1] += 0.15384615384615385;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.07692307692307693;
                result[5] += 0;
              } else {
                result[0] += 0.047619047619047616;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9523809523809523;
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
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54) ) ) {
                result[0] += 0.6086956521739131;
                result[1] += 0.2608695652173913;
                result[2] += 0;
                result[3] += 0.021739130434782608;
                result[4] += 0.10869565217391304;
                result[5] += 0;
              } else {
                result[0] += 0.13333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08333333333333333;
                result[4] += 0.7166666666666667;
                result[5] += 0.06666666666666667;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
                result[0] += 0.2857142857142857;
                result[1] += 0.09523809523809523;
                result[2] += 0;
                result[3] += 0.35714285714285715;
                result[4] += 0.023809523809523808;
                result[5] += 0.23809523809523808;
              } else {
                result[0] += 0.9694117647058824;
                result[1] += 0.0023529411764705885;
                result[2] += 0;
                result[3] += 0.003529411764705883;
                result[4] += 0.021176470588235297;
                result[5] += 0.003529411764705883;
              }
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06896551724137931;
                result[3] += 0.20689655172413793;
                result[4] += 0;
                result[5] += 0.7241379310344828;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1875;
                result[5] += 0.8125;
              } else {
                result[0] += 0;
                result[1] += 0.04918032786885246;
                result[2] += 0;
                result[3] += 0.6885245901639344;
                result[4] += 0.01639344262295082;
                result[5] += 0.2459016393442623;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)115) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7222222222222222;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.2777777777777778;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)102.5) ) ) {
                result[0] += 0.8095238095238095;
                result[1] += 0;
                result[2] += 0.09523809523809523;
                result[3] += 0;
                result[4] += 0.09523809523809523;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
                result[0] += 0.25;
                result[1] += 0.625;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.125;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3482142857142857;
                result[4] += 0.026785714285714284;
                result[5] += 0.625;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0.003952569169960474;
                result[2] += 0.05533596837944664;
                result[3] += 0.7865612648221344;
                result[4] += 0;
                result[5] += 0.1541501976284585;
              } else {
                result[0] += 0.018518518518518517;
                result[1] += 0;
                result[2] += 0.3148148148148148;
                result[3] += 0.24074074074074073;
                result[4] += 0;
                result[5] += 0.42592592592592593;
              }
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0.09803921568627451;
                result[2] += 0.1568627450980392;
                result[3] += 0.47058823529411764;
                result[4] += 0;
                result[5] += 0.27450980392156865;
              } else {
                result[0] += 0.10416666666666667;
                result[1] += 0.041666666666666664;
                result[2] += 0.625;
                result[3] += 0.041666666666666664;
                result[4] += 0;
                result[5] += 0.1875;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)93) ) ) {
                result[0] += 0.9090909090909091;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.09090909090909091;
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.13333333333333333;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.2;
              } else {
                result[0] += 0.004975124378109453;
                result[1] += 0;
                result[2] += 0.7562189054726368;
                result[3] += 0.20398009950248755;
                result[4] += 0.01990049751243781;
                result[5] += 0.014925373134328358;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
                result[0] += 0.7142857142857143;
                result[1] += 0;
                result[2] += 0.2857142857142857;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.01564945226917058;
                result[1] += 0;
                result[2] += 0.918622848200313;
                result[3] += 0.0594679186228482;
                result[4] += 0;
                result[5] += 0.006259780907668232;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
                result[0] += 0.7307692307692307;
                result[1] += 0;
                result[2] += 0.11538461538461539;
                result[3] += 0;
                result[4] += 0.11538461538461539;
                result[5] += 0.038461538461538464;
              } else {
                result[0] += 0.021739130434782608;
                result[1] += 0;
                result[2] += 0.9456521739130435;
                result[3] += 0.03260869565217391;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)80.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
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
            }
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)35.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
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
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)76.5) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6666666666666666;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)57.5) ) ) {
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
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)68.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)55.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.6;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.4;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87) ) ) {
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
                result[4] += 0.6666666666666666;
                result[5] += 0.3333333333333333;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)81) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
                result[0] += 0.42857142857142866;
                result[1] += 0.28571428571428575;
                result[2] += 0;
                result[3] += 0.14285714285714288;
                result[4] += 0.14285714285714288;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)97) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9772727272727273;
                result[5] += 0.022727272727272728;
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
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)47) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)71) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.02034428794992175;
                result[4] += 0.02034428794992175;
                result[5] += 0.9593114241001565;
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
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.02702702702702703;
                result[4] += 0.7567567567567568;
                result[5] += 0.21621621621621623;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1875;
                result[4] += 0.125;
                result[5] += 0.6875;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.09090909090909091;
                result[4] += 0.3090909090909091;
                result[5] += 0.6;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07432432432432433;
                result[4] += 0.02027027027027027;
                result[5] += 0.9054054054054054;
              }
            }
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)74.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
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
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)79.5) ) ) {
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
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
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
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0.875;
              }
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)63) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.058823529411764705;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.9411764705882353;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0.005291005291005291;
                result[2] += 0.010582010582010581;
                result[3] += 0.8518518518518519;
                result[4] += 0.005291005291005291;
                result[5] += 0.12698412698412698;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
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
                result[3] += 0.0975609756097561;
                result[4] += 0;
                result[5] += 0.9024390243902439;
              }
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
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
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
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)50.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.15;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0.15;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)57.5) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)53) ) ) {
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
            }
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
                result[0] += 0.40540540540540543;
                result[1] += 0.05405405405405406;
                result[2] += 0;
                result[3] += 0.10810810810810811;
                result[4] += 0.24324324324324326;
                result[5] += 0.1891891891891892;
              } else {
                result[0] += 0.9561304836895388;
                result[1] += 0.0022497187851518562;
                result[2] += 0;
                result[3] += 0.012373453318335208;
                result[4] += 0.023622047244094488;
                result[5] += 0.00562429696287964;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)90.5) ) ) {
                result[0] += 0.028985507246376812;
                result[1] += 0;
                result[2] += 0.13043478260869565;
                result[3] += 0.3188405797101449;
                result[4] += 0.08695652173913043;
                result[5] += 0.43478260869565216;
              } else {
                result[0] += 0.7627118644067797;
                result[1] += 0;
                result[2] += 0.016949152542372885;
                result[3] += 0;
                result[4] += 0.20338983050847462;
                result[5] += 0.016949152542372885;
              }
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)46) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16;
                result[4] += 0.64;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.016666666666666666;
                result[3] += 0.45;
                result[4] += 0.016666666666666666;
                result[5] += 0.5166666666666667;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8260869565217391;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.17391304347826086;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
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
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59) ) ) {
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
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.08571428571428572;
                result[3] += 0.7047619047619048;
                result[4] += 0.009523809523809525;
                result[5] += 0.2;
              } else {
                result[0] += 0.04166666666666667;
                result[1] += 0;
                result[2] += 0.5833333333333335;
                result[3] += 0.33333333333333337;
                result[4] += 0;
                result[5] += 0.04166666666666667;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.14285714285714285;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8571428571428571;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.0625;
                result[4] += 0;
                result[5] += 0.4375;
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
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0.36363636363636365;
                result[2] += 0;
                result[3] += 0.09090909090909091;
                result[4] += 0.45454545454545453;
                result[5] += 0.09090909090909091;
              } else {
                result[0] += 0.8888888888888888;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5256410256410257;
                result[3] += 0.4230769230769231;
                result[4] += 0;
                result[5] += 0.05128205128205128;
              } else {
                result[0] += 0.0136986301369863;
                result[1] += 0;
                result[2] += 0.8949771689497716;
                result[3] += 0.0867579908675799;
                result[4] += 0;
                result[5] += 0.0045662100456621;
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)99.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83) ) ) {
                result[0] += 0.9705882352941176;
                result[1] += 0;
                result[2] += 0.029411764705882353;
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)91) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)110) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)119) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8888888888888888;
                result[3] += 0.09090909090909091;
                result[4] += 0;
                result[5] += 0.020202020202020204;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)113.5) ) ) {
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
                result[3] += 0.9090909090909091;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.0034782608695652175;
                result[1] += 0;
                result[2] += 0.9843478260869565;
                result[3] += 0.008695652173913044;
                result[4] += 0;
                result[5] += 0.0034782608695652175;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)97.5) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75) ) ) {
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)69) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)66.5) ) ) {
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
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.01881720430107527;
                result[4] += 0.009408602150537635;
                result[5] += 0.9717741935483871;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)69) ) ) {
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
                result[3] += 0.625;
                result[4] += 0;
                result[5] += 0.375;
              }
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89) ) ) {
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)57.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)77) ) ) {
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
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)80) ) ) {
                result[0] += 0.016483516483516484;
                result[1] += 0.07692307692307693;
                result[2] += 0.04395604395604396;
                result[3] += 0.18681318681318682;
                result[4] += 0.07142857142857142;
                result[5] += 0.6043956043956044;
              } else {
                result[0] += 0.0106951871657754;
                result[1] += 0.0106951871657754;
                result[2] += 0.026737967914438502;
                result[3] += 0.5828877005347594;
                result[4] += 0.016042780748663103;
                result[5] += 0.35294117647058826;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)94) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)41) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69.5) ) ) {
                result[0] += 0.012658227848101266;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9367088607594937;
                result[5] += 0.05063291139240506;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7142857142857143;
                result[4] += 0.2857142857142857;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)55.5) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)52.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69) ) ) {
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
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)111) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)55.5) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)100) ) ) {
                result[0] += 0.17567567567567569;
                result[1] += 0.04054054054054054;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7432432432432432;
                result[5] += 0.04054054054054054;
              } else {
                result[0] += 0.10526315789473684;
                result[1] += 0.8421052631578947;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.05263157894736842;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
                result[0] += 0.970108695652174;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.02717391304347826;
                result[5] += 0.002717391304347826;
              } else {
                result[0] += 0.3247863247863248;
                result[1] += 0;
                result[2] += 0.05128205128205128;
                result[3] += 0.1794871794871795;
                result[4] += 0.2905982905982906;
                result[5] += 0.15384615384615385;
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
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
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
                result[0] += 0.998211091234347;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.0017889087656529517;
                result[5] += 0;
              } else {
                result[0] += 0.75;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0.08333333333333333;
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.010869565217391304;
                result[3] += 0.34782608695652173;
                result[4] += 0.08695652173913043;
                result[5] += 0.5543478260869565;
              } else {
                result[0] += 0.12195121951219512;
                result[1] += 0;
                result[2] += 0.14634146341463414;
                result[3] += 0.4878048780487805;
                result[4] += 0.21951219512195122;
                result[5] += 0.024390243902439025;
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2857142857142857;
                result[3] += 0.7142857142857143;
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.8705882352941177;
                result[1] += 0;
                result[2] += 0.07058823529411765;
                result[3] += 0;
                result[4] += 0.058823529411764705;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)64.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77.5) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)86) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0.021739130434782608;
                result[2] += 0.021739130434782608;
                result[3] += 0.5217391304347826;
                result[4] += 0.17391304347826086;
                result[5] += 0.2608695652173913;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.045454545454545456;
                result[3] += 0.09090909090909091;
                result[4] += 0.045454545454545456;
                result[5] += 0.8181818181818182;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84) ) ) {
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.021739130434782608;
                result[3] += 0.9239130434782609;
                result[4] += 0;
                result[5] += 0.05434782608695652;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.36111111111111116;
                result[3] += 0.47222222222222227;
                result[4] += 0;
                result[5] += 0.16666666666666669;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.16666666666666666;
                result[5] += 0.8333333333333334;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)111) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.28571428571428575;
                result[3] += 0.14285714285714288;
                result[4] += 0.28571428571428575;
                result[5] += 0.28571428571428575;
              } else {
                result[0] += 0.75;
                result[1] += 0.125;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.125;
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
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0.9;
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
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9166666666666666;
                result[3] += 0.027777777777777776;
                result[4] += 0;
                result[5] += 0.05555555555555555;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5263157894736842;
                result[3] += 0.2631578947368421;
                result[4] += 0;
                result[5] += 0.21052631578947367;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
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
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106.5) ) ) {
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5822784810126582;
                result[3] += 0.3924050632911392;
                result[4] += 0;
                result[5] += 0.02531645569620253;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9259259259259259;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.07407407407407407;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)108) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8916666666666667;
                result[3] += 0.09166666666666666;
                result[4] += 0;
                result[5] += 0.016666666666666666;
              } else {
                result[0] += 0.05263157894736842;
                result[1] += 0;
                result[2] += 0.47368421052631576;
                result[3] += 0.47368421052631576;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)118) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)119) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)81) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77.5) ) ) {
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.4666666666666667;
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
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
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
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
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7142857142857143;
                result[3] += 0.2857142857142857;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9692307692307692;
                result[3] += 0.03076923076923077;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)103.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9680851063829787;
                result[3] += 0.031914893617021274;
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)65.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)51.5) ) ) {
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
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)74) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56) ) ) {
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
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.017350157728706624;
                result[4] += 0.011041009463722398;
                result[5] += 0.9716088328075709;
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
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.15625;
                result[4] += 0;
                result[5] += 0.84375;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)76.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8666666666666667;
                result[4] += 0;
                result[5] += 0.13333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)62) ) ) {
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
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0.04054054054054054;
                result[2] += 0;
                result[3] += 0.10810810810810811;
                result[4] += 0.5675675675675675;
                result[5] += 0.28378378378378377;
              } else {
                result[0] += 0.0044444444444444444;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.17777777777777778;
                result[4] += 0.08888888888888889;
                result[5] += 0.7288888888888889;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65.5) ) ) {
                result[0] += 0.1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0.7;
                result[5] += 0;
              } else {
                result[0] += 0.9473684210526315;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.05263157894736842;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)115.5) ) ) {
                result[0] += 0;
                result[1] += 0.021739130434782608;
                result[2] += 0.017391304347826087;
                result[3] += 0.6826086956521739;
                result[4] += 0.0391304347826087;
                result[5] += 0.2391304347826087;
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)52.5) ) ) {
                result[0] += 0.18181818181818182;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8181818181818182;
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)44) ) ) {
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
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0.896551724137931;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.034482758620689655;
                result[5] += 0.06896551724137931;
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69.5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)64.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63) ) ) {
                result[0] += 0.5555555555555556;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4444444444444444;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.05128205128205128;
                result[2] += 0.02564102564102564;
                result[3] += 0.46153846153846156;
                result[4] += 0.02564102564102564;
                result[5] += 0.4358974358974359;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
                result[0] += 0.18181818181818182;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8181818181818182;
                result[5] += 0;
              } else {
                result[0] += 0.9043977055449333;
                result[1] += 0.004780114722753347;
                result[2] += 0.0038240917782026776;
                result[3] += 0.013384321223709373;
                result[4] += 0.05544933078393883;
                result[5] += 0.01816443594646272;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)79) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.8;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
                result[0] += 0.034482758620689655;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.10344827586206896;
                result[4] += 0;
                result[5] += 0.8620689655172413;
              } else {
                result[0] += 0;
                result[1] += 0.05673758865248227;
                result[2] += 0.11347517730496454;
                result[3] += 0.46099290780141844;
                result[4] += 0.06382978723404255;
                result[5] += 0.3049645390070922;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.13333333333333333;
                result[4] += 0;
                result[5] += 0.8666666666666667;
              } else {
                result[0] += 0.02912621359223301;
                result[1] += 0;
                result[2] += 0.6407766990291263;
                result[3] += 0.18446601941747573;
                result[4] += 0.009708737864077669;
                result[5] += 0.13592233009708737;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
                result[0] += 0.4117647058823529;
                result[1] += 0.17647058823529413;
                result[2] += 0.058823529411764705;
                result[3] += 0.11764705882352941;
                result[4] += 0.17647058823529413;
                result[5] += 0.058823529411764705;
              } else {
                result[0] += 0.15384615384615385;
                result[1] += 0;
                result[2] += 0.8461538461538461;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)64.5) ) ) {
                result[0] += 0.16666666666666666;
                result[1] += 0.8333333333333334;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.8051948051948052;
                result[1] += 0;
                result[2] += 0.06493506493506493;
                result[3] += 0;
                result[4] += 0.12987012987012986;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88) ) ) {
                result[0] += 0;
                result[1] += 0.6;
                result[2] += 0;
                result[3] += 0.4;
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100) ) ) {
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
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)103.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)54) ) ) {
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
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.75;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.09375;
                result[3] += 0.875;
                result[4] += 0;
                result[5] += 0.03125;
              }
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)76.5) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)111.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)72) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.21428571428571427;
                result[2] += 0.2857142857142857;
                result[3] += 0.2857142857142857;
                result[4] += 0.14285714285714285;
                result[5] += 0.07142857142857142;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
                result[0] += 0.03225806451612903;
                result[1] += 0;
                result[2] += 0.4838709677419355;
                result[3] += 0.2903225806451613;
                result[4] += 0.0967741935483871;
                result[5] += 0.0967741935483871;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9636363636363636;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.03636363636363636;
              }
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86) ) ) {
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)108.5) ) ) {
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
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)90.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.660377358490566;
                result[3] += 0.18867924528301888;
                result[4] += 0;
                result[5] += 0.1509433962264151;
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)66.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
                result[0] += 0.027777777777777776;
                result[1] += 0;
                result[2] += 0.8240740740740741;
                result[3] += 0.14814814814814814;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9548872180451128;
                result[3] += 0.045112781954887216;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9512195121951219;
                result[3] += 0.04878048780487805;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0022675736961451248;
                result[1] += 0;
                result[2] += 0.9909297052154195;
                result[3] += 0.006802721088435374;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)47) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)105.5) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86.5) ) ) {
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
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.013986013986013986;
                result[1] += 0.0034965034965034965;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9615384615384616;
                result[5] += 0.02097902097902098;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
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
                result[4] += 0.6857142857142857;
                result[5] += 0.3142857142857143;
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.01694915254237288;
                result[1] += 0.01694915254237288;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5932203389830508;
                result[5] += 0.3728813559322034;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)107) ) ) {
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
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87) ) ) {
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
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.9754768392370572;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.021798365122615803;
                result[5] += 0.0027247956403269754;
              }
            }
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
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
                result[3] += 0.018867924528301886;
                result[4] += 0.005145797598627788;
                result[5] += 0.9759862778730704;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.14444444444444443;
                result[4] += 0.044444444444444446;
                result[5] += 0.8111111111111111;
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0.023809523809523808;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9285714285714286;
                result[5] += 0.047619047619047616;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0625;
                result[4] += 0.21875;
                result[5] += 0.71875;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06956521739130435;
                result[4] += 0.043478260869565216;
                result[5] += 0.8869565217391304;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.028169014084507043;
                result[3] += 0.36619718309859156;
                result[4] += 0.056338028169014086;
                result[5] += 0.5492957746478874;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)78) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)47.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.07865168539325842;
                result[1] += 0.12359550561797752;
                result[2] += 0;
                result[3] += 0.06741573033707865;
                result[4] += 0.5730337078651685;
                result[5] += 0.15730337078651685;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74) ) ) {
                result[0] += 0.07692307692307693;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.23076923076923078;
                result[4] += 0.11538461538461539;
                result[5] += 0.5769230769230769;
              } else {
                result[0] += 0.7977528089887641;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07865168539325844;
                result[4] += 0.12359550561797754;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.07692307692307693;
                result[2] += 0;
                result[3] += 0.08974358974358974;
                result[4] += 0.08974358974358974;
                result[5] += 0.7435897435897436;
              } else {
                result[0] += 0;
                result[1] += 0.014084507042253523;
                result[2] += 0.019718309859154935;
                result[3] += 0.6225352112676057;
                result[4] += 0.002816901408450705;
                result[5] += 0.34084507042253526;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
                result[0] += 0.02857142857142857;
                result[1] += 0.022857142857142857;
                result[2] += 0.16;
                result[3] += 0.3657142857142857;
                result[4] += 0.12571428571428572;
                result[5] += 0.29714285714285715;
              } else {
                result[0] += 0.02702702702702703;
                result[1] += 0.13513513513513514;
                result[2] += 0.7567567567567568;
                result[3] += 0.02702702702702703;
                result[4] += 0;
                result[5] += 0.05405405405405406;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)111.5) ) ) {
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)92.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)83) ) ) {
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
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95.5) ) ) {
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
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6666666666666666;
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
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2631578947368421;
                result[3] += 0.6842105263157895;
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)90) ) ) {
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7142857142857143;
                result[3] += 0.21428571428571427;
                result[4] += 0;
                result[5] += 0.07142857142857142;
              }
            }
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
                result[0] += 0.2222222222222222;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.3333333333333333;
                result[4] += 0.1111111111111111;
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
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
                result[0] += 0.041666666666666664;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.5416666666666666;
                result[4] += 0;
                result[5] += 0.08333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.6;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.022364217252396165;
                result[1] += 0;
                result[2] += 0.8785942492012779;
                result[3] += 0.07987220447284345;
                result[4] += 0;
                result[5] += 0.019169329073482427;
              }
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.0016207455429497568;
                result[1] += 0;
                result[2] += 0.9708265802269044;
                result[3] += 0.024311183144246355;
                result[4] += 0;
                result[5] += 0.0032414910858995136;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9847328244274809;
                result[5] += 0.015267175572519083;
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
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)50.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.012048192771084338;
                result[4] += 0.004518072289156626;
                result[5] += 0.983433734939759;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0.25;
              }
            }
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
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
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)54) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0.04347826086956522;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9130434782608696;
                result[5] += 0.04347826086956522;
              } else {
                result[0] += 0.125;
                result[1] += 0.0625;
                result[2] += 0;
                result[3] += 0.0625;
                result[4] += 0.125;
                result[5] += 0.625;
              }
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0.10526315789473684;
                result[2] += 0;
                result[3] += 0.10526315789473684;
                result[4] += 0.631578947368421;
                result[5] += 0.15789473684210525;
              } else {
                result[0] += 0;
                result[1] += 0.024242424242424242;
                result[2] += 0;
                result[3] += 0.06060606060606061;
                result[4] += 0.07878787878787878;
                result[5] += 0.8363636363636363;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)68.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6842105263157895;
                result[4] += 0.02631578947368421;
                result[5] += 0.2894736842105263;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2692307692307692;
                result[4] += 0;
                result[5] += 0.7307692307692307;
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07692307692307693;
                result[4] += 0.07692307692307693;
                result[5] += 0.8461538461538461;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.014705882352941176;
                result[3] += 0.7794117647058824;
                result[4] += 0;
                result[5] += 0.20588235294117646;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
                result[0] += 0.06976744186046512;
                result[1] += 0;
                result[2] += 0.09302325581395349;
                result[3] += 0.046511627906976744;
                result[4] += 0.09302325581395349;
                result[5] += 0.6976744186046512;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8518518518518519;
                result[3] += 0.14814814814814814;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)48.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)81) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)45) ) ) {
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)78) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)118) ) ) {
                result[0] += 0.008;
                result[1] += 0.008;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.968;
                result[5] += 0.016;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0.18181818181818182;
                result[2] += 0;
                result[3] += 0.09090909090909091;
                result[4] += 0.5454545454545454;
                result[5] += 0.18181818181818182;
              } else {
                result[0] += 0.3076923076923077;
                result[1] += 0.5384615384615384;
                result[2] += 0;
                result[3] += 0.07692307692307693;
                result[4] += 0.07692307692307693;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0.4;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.15;
                result[5] += 0.45;
              } else {
                result[0] += 0;
                result[1] += 0.21428571428571427;
                result[2] += 0;
                result[3] += 0.7857142857142857;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
                result[0] += 0.9075785582255084;
                result[1] += 0.005545286506469501;
                result[2] += 0.0027726432532347504;
                result[3] += 0.00831792975970425;
                result[4] += 0.06099815157116451;
                result[5] += 0.014787430683918669;
              } else {
                result[0] += 0.4505494505494506;
                result[1] += 0.032967032967032975;
                result[2] += 0.2637362637362638;
                result[3] += 0.16483516483516486;
                result[4] += 0.043956043956043966;
                result[5] += 0.043956043956043966;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
                result[0] += 0.011049723756906077;
                result[1] += 0.027624309392265192;
                result[2] += 0.0055248618784530384;
                result[3] += 0.4696132596685083;
                result[4] += 0.0718232044198895;
                result[5] += 0.4143646408839779;
              } else {
                result[0] += 0.15;
                result[1] += 0;
                result[2] += 0.7;
                result[3] += 0.15;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
                result[0] += 0.7714285714285715;
                result[1] += 0.04285714285714286;
                result[2] += 0.05714285714285714;
                result[3] += 0.02857142857142857;
                result[4] += 0.1;
                result[5] += 0;
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)46.5) ) ) {
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)79.5) ) ) {
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
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
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
                result[3] += 0.10256410256410256;
                result[4] += 0;
                result[5] += 0.8974358974358975;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70.5) ) ) {
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
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05970149253731343;
                result[3] += 0.6268656716417911;
                result[4] += 0;
                result[5] += 0.31343283582089554;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.047619047619047616;
                result[3] += 0.23809523809523808;
                result[4] += 0;
                result[5] += 0.7142857142857143;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82.5) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)105) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)100) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07692307692307693;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.9230769230769231;
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08333333333333333;
                result[4] += 0.08333333333333333;
                result[5] += 0.8333333333333334;
              } else {
                result[0] += 0;
                result[1] += 0.0967741935483871;
                result[2] += 0.12903225806451613;
                result[3] += 0.7741935483870968;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8461538461538461;
                result[3] += 0.15384615384615385;
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)113) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)109.5) ) ) {
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
                result[4] += 0.6666666666666666;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7142857142857143;
                result[3] += 0.2857142857142857;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)67.5) ) ) {
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
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
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
                result[2] += 0.6744186046511628;
                result[3] += 0.313953488372093;
                result[4] += 0;
                result[5] += 0.011627906976744186;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)109) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9316239316239316;
                result[3] += 0.06837606837606838;
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
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9615384615384616;
                result[3] += 0.038461538461538464;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0027472527472527475;
                result[1] += 0;
                result[2] += 0.9945054945054945;
                result[3] += 0.0027472527472527475;
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)121) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)90) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
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
                result[4] += 0.92;
                result[5] += 0.08;
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)38.5) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)51.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.05128205128205128;
                result[4] += 0.2564102564102564;
                result[5] += 0.6923076923076923;
              } else {
                result[0] += 0.08108108108108109;
                result[1] += 0.05405405405405406;
                result[2] += 0;
                result[3] += 0.02702702702702703;
                result[4] += 0.6756756756756757;
                result[5] += 0.16216216216216217;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)76.5) ) ) {
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.03571428571428571;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.17857142857142858;
                result[4] += 0.6071428571428571;
                result[5] += 0.17857142857142858;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0.0015337423312883436;
                result[2] += 0;
                result[3] += 0.019938650306748466;
                result[4] += 0.004601226993865031;
                result[5] += 0.9739263803680982;
              } else {
                result[0] += 0.00823045267489712;
                result[1] += 0;
                result[2] += 0.012345679012345678;
                result[3] += 0.15637860082304528;
                result[4] += 0.07818930041152264;
                result[5] += 0.7448559670781894;
              }
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65.5) ) ) {
                result[0] += 0.4;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0.2;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.03773584905660377;
                result[4] += 0.018867924528301886;
                result[5] += 0.9433962264150944;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
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
                result[3] += 0.5384615384615384;
                result[4] += 0;
                result[5] += 0.46153846153846156;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
                result[0] += 0.10526315789473684;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2631578947368421;
                result[4] += 0.05263157894736842;
                result[5] += 0.5789473684210527;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9380530973451328;
                result[4] += 0;
                result[5] += 0.061946902654867256;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
                result[0] += 0.06896551724137931;
                result[1] += 0;
                result[2] += 0.034482758620689655;
                result[3] += 0.10344827586206896;
                result[4] += 0;
                result[5] += 0.7931034482758621;
              } else {
                result[0] += 0.10526315789473685;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6315789473684211;
                result[4] += 0.15789473684210528;
                result[5] += 0.10526315789473685;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83.5) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)69) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)89) ) ) {
                result[0] += 0.013513513513513514;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9864864864864865;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.24;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.76;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87) ) ) {
                result[0] += 0;
                result[1] += 0.16666666666666666;
                result[2] += 0;
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.2727272727272727;
                result[2] += 0;
                result[3] += 0.09090909090909091;
                result[4] += 0.45454545454545453;
                result[5] += 0.18181818181818182;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)107) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)130) ) ) {
                result[0] += 0.03125;
                result[1] += 0.9375;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.03125;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)108) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)48.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.04;
                result[1] += 0.12;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.84;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
                result[0] += 0.9411157024793388;
                result[1] += 0.0030991735537190084;
                result[2] += 0.002066115702479339;
                result[3] += 0.013429752066115703;
                result[4] += 0.03409090909090909;
                result[5] += 0.006198347107438017;
              } else {
                result[0] += 0.3069306930693069;
                result[1] += 0.04950495049504951;
                result[2] += 0.06930693069306931;
                result[3] += 0.22772277227722773;
                result[4] += 0.2079207920792079;
                result[5] += 0.13861386138613863;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
                result[0] += 0.018867924528301886;
                result[1] += 0.018867924528301886;
                result[2] += 0.018867924528301886;
                result[3] += 0.6037735849056604;
                result[4] += 0.04716981132075472;
                result[5] += 0.29245283018867924;
              } else {
                result[0] += 0;
                result[1] += 0.10666666666666667;
                result[2] += 0.10666666666666667;
                result[3] += 0.16;
                result[4] += 0.013333333333333334;
                result[5] += 0.6133333333333333;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
                result[0] += 0.02;
                result[1] += 0;
                result[2] += 0.26;
                result[3] += 0.54;
                result[4] += 0;
                result[5] += 0.18;
              } else {
                result[0] += 0.02631578947368421;
                result[1] += 0;
                result[2] += 0.6447368421052632;
                result[3] += 0.14473684210526316;
                result[4] += 0;
                result[5] += 0.18421052631578946;
              }
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)53) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
                result[0] += 0.3;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0;
                result[4] += 0.6;
                result[5] += 0;
              } else {
                result[0] += 0.8974358974358975;
                result[1] += 0;
                result[2] += 0.10256410256410256;
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
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)112) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
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
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
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
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07692307692307693;
                result[3] += 0.7692307692307693;
                result[4] += 0;
                result[5] += 0.15384615384615385;
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)89.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.09090909090909091;
                result[3] += 0.9090909090909091;
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
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7307692307692307;
                result[3] += 0.19230769230769232;
                result[4] += 0;
                result[5] += 0.07692307692307693;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0.8888888888888888;
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8470588235294118;
                result[3] += 0.1411764705882353;
                result[4] += 0;
                result[5] += 0.011764705882352941;
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)100) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0.8888888888888888;
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
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70.5) ) ) {
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
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)111.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
                result[0] += 0.75;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9285714285714286;
                result[3] += 0.03571428571428571;
                result[4] += 0;
                result[5] += 0.03571428571428571;
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)106) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
                result[0] += 0.14285714285714285;
                result[1] += 0;
                result[2] += 0.42857142857142855;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.42857142857142855;
              } else {
                result[0] += 0.005882352941176471;
                result[1] += 0;
                result[2] += 0.8529411764705883;
                result[3] += 0.13529411764705884;
                result[4] += 0;
                result[5] += 0.005882352941176471;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8947368421052632;
                result[3] += 0.10526315789473684;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9853479853479854;
                result[3] += 0.014652014652014652;
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)50.5) ) ) {
                result[0] += 0.1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9;
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9583333333333334;
                result[5] += 0.041666666666666664;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)75.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)77.5) ) ) {
                result[0] += 0.967741935483871;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.03225806451612903;
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
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8260869565217391;
                result[5] += 0.17391304347826086;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.02608695652173913;
                result[4] += 0.014492753623188406;
                result[5] += 0.9594202898550724;
              } else {
                result[0] += 0.0223463687150838;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16759776536312848;
                result[4] += 0.10614525139664804;
                result[5] += 0.7039106145251397;
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
                result[0] += 0.044444444444444446;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1111111111111111;
                result[4] += 0.06666666666666667;
                result[5] += 0.7777777777777778;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5833333333333334;
                result[4] += 0;
                result[5] += 0.4166666666666667;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
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
            }
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54.5) ) ) {
                result[0] += 0.9333333333333333;
                result[1] += 0.06666666666666667;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.20512820512820512;
                result[1] += 0.1794871794871795;
                result[2] += 0;
                result[3] += 0.02564102564102564;
                result[4] += 0.5641025641025641;
                result[5] += 0.02564102564102564;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.057692307692307696;
                result[3] += 0.2980769230769231;
                result[4] += 0.057692307692307696;
                result[5] += 0.5865384615384616;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9047619047619048;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.09523809523809523;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)62) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67) ) ) {
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0.053763440860215055;
                result[2] += 0;
                result[3] += 0.010752688172043012;
                result[4] += 0.9354838709677419;
                result[5] += 0;
              } else {
                result[0] += 0.3023255813953488;
                result[1] += 0.13953488372093023;
                result[2] += 0;
                result[3] += 0.09302325581395349;
                result[4] += 0.3488372093023256;
                result[5] += 0.11627906976744186;
              }
            }
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.058823529411764705;
                result[5] += 0.9411764705882353;
              } else {
                result[0] += 0.5;
                result[1] += 0.08333333333333333;
                result[2] += 0;
                result[3] += 0.16666666666666666;
                result[4] += 0.16666666666666666;
                result[5] += 0.08333333333333333;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
                result[0] += 0.925215723873442;
                result[1] += 0.00862895493767977;
                result[2] += 0;
                result[3] += 0.011505273250239693;
                result[4] += 0.031639501438159155;
                result[5] += 0.023010546500479387;
              } else {
                result[0] += 0.3188405797101449;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0.17391304347826086;
                result[5] += 0.17391304347826086;
              }
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)90) ) ) {
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0.013422818791946308;
                result[2] += 0.053691275167785234;
                result[3] += 0.6308724832214765;
                result[4] += 0.020134228187919462;
                result[5] += 0.28187919463087246;
              } else {
                result[0] += 0.04;
                result[1] += 0;
                result[2] += 0.36;
                result[3] += 0.2;
                result[4] += 0.12;
                result[5] += 0.28;
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)93) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
                result[0] += 0.038461538461538464;
                result[1] += 0.11538461538461539;
                result[2] += 0.38461538461538464;
                result[3] += 0.2692307692307692;
                result[4] += 0.15384615384615385;
                result[5] += 0.038461538461538464;
              } else {
                result[0] += 0.039473684210526314;
                result[1] += 0.013157894736842105;
                result[2] += 0.8157894736842105;
                result[3] += 0.10526315789473684;
                result[4] += 0;
                result[5] += 0.02631578947368421;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
                result[0] += 0.2777777777777778;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0.2222222222222222;
                result[5] += 0;
              } else {
                result[0] += 0.9333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.06666666666666667;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)74) ) ) {
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
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)85.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88) ) ) {
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7647058823529411;
                result[4] += 0;
                result[5] += 0.23529411764705882;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.75;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6153846153846154;
                result[3] += 0.07692307692307693;
                result[4] += 0;
                result[5] += 0.3076923076923077;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0.8333333333333334;
              }
            }
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
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
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)122.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
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
                result[2] += 0.21428571428571427;
                result[3] += 0.5714285714285714;
                result[4] += 0.14285714285714285;
                result[5] += 0.07142857142857142;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0.6;
              } else {
                result[0] += 0.015873015873015872;
                result[1] += 0;
                result[2] += 0.8412698412698413;
                result[3] += 0.09523809523809523;
                result[4] += 0;
                result[5] += 0.047619047619047616;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)108.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)116.5) ) ) {
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
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)95) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)101) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
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
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97) ) ) {
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
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)88.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)112.5) ) ) {
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
            }
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)119) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8125;
                result[3] += 0.1875;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9691358024691358;
                result[3] += 0.030864197530864196;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105.5) ) ) {
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
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
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
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)122.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)46.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9949494949494949;
                result[5] += 0.005050505050505051;
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
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)51.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)55) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.6;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0.2;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
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
            }
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)68) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)54.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)69) ) ) {
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)106.5) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)55.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)79) ) ) {
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
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0208;
                result[4] += 0.0144;
                result[5] += 0.9648;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.14583333333333334;
                result[4] += 0.07291666666666667;
                result[5] += 0.78125;
              }
            }
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.38461538461538464;
                result[2] += 0;
                result[3] += 0.23076923076923078;
                result[4] += 0.38461538461538464;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.02564102564102564;
                result[1] += 0.02564102564102564;
                result[2] += 0.02564102564102564;
                result[3] += 0.2948717948717949;
                result[4] += 0.038461538461538464;
                result[5] += 0.5897435897435898;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6296296296296297;
                result[4] += 0;
                result[5] += 0.37037037037037035;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9532710280373832;
                result[4] += 0;
                result[5] += 0.04672897196261682;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07692307692307693;
                result[4] += 0;
                result[5] += 0.9230769230769231;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)49) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61) ) ) {
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
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)78) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.1;
                result[1] += 0.9;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)31.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9565217391304348;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.043478260869565216;
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
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)102.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9827586206896551;
                result[5] += 0.017241379310344827;
              } else {
                result[0] += 0.19047619047619047;
                result[1] += 0.19047619047619047;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.23809523809523808;
                result[5] += 0.38095238095238093;
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.24561403508771928;
                result[4] += 0.15789473684210525;
                result[5] += 0.5964912280701754;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
                result[0] += 0.9154795821462489;
                result[1] += 0.007597340930674265;
                result[2] += 0;
                result[3] += 0.01234567901234568;
                result[4] += 0.056030389363722705;
                result[5] += 0.00854700854700855;
              } else {
                result[0] += 0.4745762711864407;
                result[1] += 0.00847457627118644;
                result[2] += 0.211864406779661;
                result[3] += 0.15254237288135594;
                result[4] += 0.1271186440677966;
                result[5] += 0.025423728813559324;
              }
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
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
                result[3] += 0.14583333333333334;
                result[4] += 0;
                result[5] += 0.8541666666666666;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0.045454545454545456;
                result[2] += 0.022727272727272728;
                result[3] += 0.2727272727272727;
                result[4] += 0.06818181818181818;
                result[5] += 0.5909090909090909;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.09411764705882353;
                result[3] += 0.7764705882352941;
                result[4] += 0;
                result[5] += 0.12941176470588237;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99.5) ) ) {
                result[0] += 0.140625;
                result[1] += 0.03125;
                result[2] += 0.046875;
                result[3] += 0.1875;
                result[4] += 0.53125;
                result[5] += 0.0625;
              } else {
                result[0] += 0.967741935483871;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.03225806451612903;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0.03389830508474576;
                result[2] += 0.22033898305084745;
                result[3] += 0.4745762711864407;
                result[4] += 0.13559322033898305;
                result[5] += 0.13559322033898305;
              } else {
                result[0] += 0.053191489361702135;
                result[1] += 0;
                result[2] += 0.8936170212765958;
                result[3] += 0.04255319148936171;
                result[4] += 0;
                result[5] += 0.010638297872340427;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)55.5) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)72.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07692307692307693;
                result[4] += 0;
                result[5] += 0.9230769230769231;
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
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)101) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)116.5) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07692307692307693;
                result[3] += 0.3076923076923077;
                result[4] += 0;
                result[5] += 0.6153846153846154;
              } else {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0.5;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666667;
                result[3] += 0.24074074074074076;
                result[4] += 0;
                result[5] += 0.0925925925925926;
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)109.5) ) ) {
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
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
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
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.2;
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
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)108.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0.05714285714285714;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)112) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8333333333333334;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2777777777777778;
                result[3] += 0.7222222222222222;
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
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
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.00684931506849315;
                result[1] += 0;
                result[2] += 0.9315068493150684;
                result[3] += 0.06164383561643835;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)60) ) ) {
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
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9606299212598425;
                result[3] += 0.03543307086614173;
                result[4] += 0;
                result[5] += 0.003937007874015748;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9927360774818402;
                result[3] += 0.007263922518159807;
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)36) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91) ) ) {
                result[0] += 0.00398406374501992;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9920318725099602;
                result[5] += 0.00398406374501992;
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
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)77) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)51.5) ) ) {
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
                result[4] += 0.18181818181818182;
                result[5] += 0.8181818181818182;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.375;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.375;
                result[5] += 0.25;
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)76) ) ) {
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
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)81) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)60) ) ) {
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.013468013468013467;
                result[4] += 0.005050505050505051;
                result[5] += 0.9814814814814815;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3157894736842105;
                result[4] += 0.2631578947368421;
                result[5] += 0.42105263157894735;
              }
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.00909090909090909;
                result[3] += 0.02727272727272727;
                result[4] += 0.09090909090909091;
                result[5] += 0.8727272727272727;
              } else {
                result[0] += 0;
                result[1] += 0.014814814814814815;
                result[2] += 0;
                result[3] += 0.28888888888888886;
                result[4] += 0.1259259259259259;
                result[5] += 0.5703703703703704;
              }
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)64.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
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
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)61.5) ) ) {
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
                result[3] += 0.05;
                result[4] += 0;
                result[5] += 0.95;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.35135135135135137;
                result[4] += 0.05405405405405406;
                result[5] += 0.5945945945945946;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.849624060150376;
                result[4] += 0;
                result[5] += 0.15037593984962405;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)38.5) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)106.5) ) ) {
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)111) ) ) {
                result[0] += 0.06741573033707865;
                result[1] += 0.02247191011235955;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8876404494382022;
                result[5] += 0.02247191011235955;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)67.5) ) ) {
                result[0] += 0.850828729281768;
                result[1] += 0.019337016574585635;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.09116022099447514;
                result[5] += 0.03867403314917127;
              } else {
                result[0] += 0.1282051282051282;
                result[1] += 0.38461538461538464;
                result[2] += 0;
                result[3] += 0.15384615384615385;
                result[4] += 0.2564102564102564;
                result[5] += 0.07692307692307693;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)107) ) ) {
                result[0] += 0.012875536480686695;
                result[1] += 0.03862660944206009;
                result[2] += 0.030042918454935622;
                result[3] += 0.3090128755364807;
                result[4] += 0.02145922746781116;
                result[5] += 0.5879828326180258;
              } else {
                result[0] += 0.8;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.01639344262295082;
                result[3] += 0.7868852459016393;
                result[4] += 0.08196721311475409;
                result[5] += 0.11475409836065574;
              } else {
                result[0] += 0.013513513513513514;
                result[1] += 0.013513513513513514;
                result[2] += 0.3918918918918919;
                result[3] += 0.2972972972972973;
                result[4] += 0.02702702702702703;
                result[5] += 0.25675675675675674;
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)109.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)78) ) ) {
                result[0] += 0.29411764705882354;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.17647058823529413;
                result[4] += 0.4117647058823529;
                result[5] += 0.11764705882352941;
              } else {
                result[0] += 0.9525745257452575;
                result[1] += 0;
                result[2] += 0.008130081300813009;
                result[3] += 0.008130081300813009;
                result[4] += 0.03116531165311653;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0;
              } else {
                result[0] += 0.03571428571428571;
                result[1] += 0.9285714285714286;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.03571428571428571;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0.2608695652173913;
                result[2] += 0.08695652173913043;
                result[3] += 0.08695652173913043;
                result[4] += 0.43478260869565216;
                result[5] += 0.13043478260869565;
              } else {
                result[0] += 0.14285714285714285;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8571428571428571;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.09090909090909091;
                result[1] += 0;
                result[2] += 0.7121212121212122;
                result[3] += 0.15151515151515152;
                result[4] += 0;
                result[5] += 0.045454545454545456;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05660377358490566;
                result[3] += 0.8867924528301887;
                result[4] += 0;
                result[5] += 0.05660377358490566;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
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
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91) ) ) {
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
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.6190476190476191;
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
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)76.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)76.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94) ) ) {
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
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
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
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.014925373134328358;
                result[1] += 0;
                result[2] += 0.9701492537313433;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.014925373134328358;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)116.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)110.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
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
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81.5) ) ) {
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
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9157088122605365;
                result[3] += 0.07662835249042146;
                result[4] += 0;
                result[5] += 0.007662835249042146;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.2;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0018656716417910447;
                result[1] += 0;
                result[2] += 0.9813432835820896;
                result[3] += 0.016791044776119403;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111) ) ) {
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)45) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72) ) ) {
                result[0] += 0;
                result[1] += 0.0033222591362126247;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9933554817275747;
                result[5] += 0.0033222591362126247;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7857142857142857;
                result[5] += 0.21428571428571427;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)67) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)49.5) ) ) {
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
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)64.5) ) ) {
                result[0] += 0.42857142857142855;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5714285714285714;
                result[5] += 0;
              } else {
                result[0] += 0.9722222222222222;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.027777777777777776;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.06451612903225806;
                result[5] += 0.9354838709677419;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)54) ) ) {
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1;
                result[5] += 0.9;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0.25;
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
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0.001392757660167131;
                result[2] += 0;
                result[3] += 0.025069637883008356;
                result[4] += 0.012534818941504178;
                result[5] += 0.9610027855153204;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0.23076923076923078;
                result[2] += 0;
                result[3] += 0.7692307692307693;
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
            }
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)70.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9032258064516129;
                result[5] += 0.0967741935483871;
              } else {
                result[0] += 0.4;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0.2;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
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
                result[4] += 0.07692307692307693;
                result[5] += 0.9230769230769231;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.21052631578947367;
                result[4] += 0.6842105263157895;
                result[5] += 0.10526315789473684;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.38235294117647056;
                result[4] += 0.0784313725490196;
                result[5] += 0.5392156862745098;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)77) ) ) {
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
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)47.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.14285714285714285;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8571428571428571;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)106) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
                result[0] += 0.2962962962962963;
                result[1] += 0.09259259259259259;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6111111111111112;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.045454545454545456;
                result[3] += 0.13636363636363635;
                result[4] += 0.13636363636363635;
                result[5] += 0.6818181818181818;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107) ) ) {
                result[0] += 0;
                result[1] += 0.9696969696969697;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.030303030303030304;
                result[5] += 0;
              } else {
                result[0] += 0.8571428571428571;
                result[1] += 0.14285714285714285;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
                result[0] += 0.1320754716981132;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.18867924528301888;
                result[4] += 0.18867924528301888;
                result[5] += 0.49056603773584906;
              } else {
                result[0] += 0.08108108108108109;
                result[1] += 0;
                result[2] += 0.02702702702702703;
                result[3] += 0.7567567567567568;
                result[4] += 0;
                result[5] += 0.13513513513513514;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
                result[0] += 0.958011049723757;
                result[1] += 0.004419889502762431;
                result[2] += 0;
                result[3] += 0.0055248618784530384;
                result[4] += 0.02541436464088398;
                result[5] += 0.0066298342541436465;
              } else {
                result[0] += 0.5087719298245614;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.10526315789473684;
                result[4] += 0.2982456140350877;
                result[5] += 0.08771929824561403;
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
                result[0] += 0.018867924528301886;
                result[1] += 0;
                result[2] += 0.009433962264150943;
                result[3] += 0.4339622641509434;
                result[4] += 0.018867924528301886;
                result[5] += 0.5188679245283019;
              } else {
                result[0] += 0.00796812749003984;
                result[1] += 0;
                result[2] += 0.0796812749003984;
                result[3] += 0.6852589641434262;
                result[4] += 0.00398406374501992;
                result[5] += 0.22310756972111553;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
                result[0] += 0.24324324324324326;
                result[1] += 0;
                result[2] += 0.21621621621621623;
                result[3] += 0.13513513513513514;
                result[4] += 0.2972972972972973;
                result[5] += 0.10810810810810811;
              } else {
                result[0] += 0.9;
                result[1] += 0;
                result[2] += 0.06666666666666667;
                result[3] += 0.016666666666666666;
                result[4] += 0;
                result[5] += 0.016666666666666666;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)122.5) ) ) {
                result[0] += 0.045871559633027525;
                result[1] += 0;
                result[2] += 0.7981651376146789;
                result[3] += 0.045871559633027525;
                result[4] += 0.01834862385321101;
                result[5] += 0.09174311926605505;
              } else {
                result[0] += 0.7692307692307693;
                result[1] += 0;
                result[2] += 0.23076923076923078;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)89) ) ) {
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
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5714285714285714;
                result[3] += 0;
                result[4] += 0.2857142857142857;
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
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)106) ) ) {
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
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.8571428571428571;
                result[2] += 0;
                result[3] += 0.14285714285714285;
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
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.09375;
                result[3] += 0.8125;
                result[4] += 0;
                result[5] += 0.09375;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7666666666666667;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0.06666666666666667;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9411764705882353;
                result[3] += 0.058823529411764705;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0.875;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100.5) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)76.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5555555555555556;
                result[3] += 0.4444444444444444;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8905472636815921;
                result[3] += 0.10945273631840796;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80) ) ) {
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)90.5) ) ) {
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
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9673469387755103;
                result[3] += 0.0326530612244898;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9969418960244648;
                result[3] += 0.0030581039755351682;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)114.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)80) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)35) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.006097560975609756;
                result[1] += 0.003048780487804878;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9878048780487805;
                result[5] += 0.003048780487804878;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0.8571428571428571;
              } else {
                result[0] += 0.07692307692307693;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9230769230769231;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)66) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.03571428571428571;
                result[4] += 0.03571428571428571;
                result[5] += 0.9285714285714286;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)51) ) ) {
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
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)48.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
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
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)50.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.017543859649122806;
                result[2] += 0.017543859649122806;
                result[3] += 0.03508771929824561;
                result[4] += 0.8947368421052632;
                result[5] += 0.03508771929824561;
              }
            }
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)81.5) ) ) {
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
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)56.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)68.5) ) ) {
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
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
                result[0] += 0.9870801033591732;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.012919896640826873;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)50.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
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
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)88) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.022617124394184167;
                result[4] += 0.0032310177705977385;
                result[5] += 0.9741518578352181;
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0;
                result[4] += 0.9;
                result[5] += 0;
              } else {
                result[0] += 0.0034602076124567475;
                result[1] += 0.01384083044982699;
                result[2] += 0.006920415224913495;
                result[3] += 0.17301038062283736;
                result[4] += 0.0726643598615917;
                result[5] += 0.7301038062283737;
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
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0.1935483870967742;
                result[2] += 0;
                result[3] += 0.06451612903225806;
                result[4] += 0.6129032258064516;
                result[5] += 0.12903225806451613;
              } else {
                result[0] += 0.08823529411764706;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.47058823529411764;
                result[4] += 0.029411764705882353;
                result[5] += 0.4117647058823529;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
                result[0] += 0.8524590163934426;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.14754098360655737;
                result[5] += 0;
              } else {
                result[0] += 0.2222222222222222;
                result[1] += 0.16666666666666666;
                result[2] += 0.08333333333333333;
                result[3] += 0.1388888888888889;
                result[4] += 0.3888888888888889;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8571428571428571;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0070921985815602835;
                result[3] += 0.12056737588652482;
                result[4] += 0.02127659574468085;
                result[5] += 0.851063829787234;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)70.5) ) ) {
                result[0] += 0.14814814814814814;
                result[1] += 0.05555555555555555;
                result[2] += 0;
                result[3] += 0.07407407407407407;
                result[4] += 0.5;
                result[5] += 0.2222222222222222;
              } else {
                result[0] += 0.0031645569620253164;
                result[1] += 0.015822784810126583;
                result[2] += 0.06645569620253164;
                result[3] += 0.560126582278481;
                result[4] += 0.015822784810126583;
                result[5] += 0.33860759493670883;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)81) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8461538461538461;
                result[4] += 0;
                result[5] += 0.15384615384615385;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)118.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4666666666666667;
                result[3] += 0.23333333333333334;
                result[4] += 0;
                result[5] += 0.3;
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
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)69.5) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77.5) ) ) {
                result[0] += 0.9932088285229203;
                result[1] += 0;
                result[2] += 0.003395585738539898;
                result[3] += 0;
                result[4] += 0.003395585738539898;
                result[5] += 0;
              } else {
                result[0] += 0.7142857142857143;
                result[1] += 0;
                result[2] += 0.14285714285714285;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)113) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)112.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.1;
              } else {
                result[0] += 0.4;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
                result[0] += 0.6;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4;
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)100.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
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
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
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
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8695652173913043;
                result[4] += 0;
                result[5] += 0.13043478260869565;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.625;
                result[3] += 0.375;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.48484848484848486;
                result[3] += 0.36363636363636365;
                result[4] += 0;
                result[5] += 0.15151515151515152;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.20689655172413793;
                result[3] += 0.6896551724137931;
                result[4] += 0;
                result[5] += 0.10344827586206896;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9615384615384616;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.038461538461538464;
              }
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)116.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.014925373134328358;
                result[1] += 0;
                result[2] += 0.8507462686567164;
                result[3] += 0.11940298507462686;
                result[4] += 0;
                result[5] += 0.014925373134328358;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)80) ) ) {
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)131.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8957345971563981;
                result[3] += 0.0995260663507109;
                result[4] += 0;
                result[5] += 0.004739336492890996;
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
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)111.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.989247311827957;
                result[3] += 0.010752688172043012;
                result[4] += 0;
                result[5] += 0;
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
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)117.5) ) ) {
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
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)45) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)56) ) ) {
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)51.5) ) ) {
                result[0] += 0.058823529411764705;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9411764705882353;
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
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)74.5) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)52.5) ) ) {
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
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.07407407407407407;
                result[5] += 0.9259259259259259;
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65.5) ) ) {
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
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)62) ) ) {
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
                result[4] += 0.8333333333333334;
                result[5] += 0.16666666666666666;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0.0014858841010401188;
                result[2] += 0;
                result[3] += 0.020802377414561663;
                result[4] += 0.008915304606240713;
                result[5] += 0.9687964338781575;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.47619047619047616;
                result[4] += 0.14285714285714285;
                result[5] += 0.38095238095238093;
              }
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.14285714285714285;
                result[3] += 0.8571428571428571;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.047619047619047616;
                result[2] += 0.011904761904761904;
                result[3] += 0.1130952380952381;
                result[4] += 0.09523809523809523;
                result[5] += 0.7321428571428571;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.34513274336283184;
                result[4] += 0.035398230088495575;
                result[5] += 0.6194690265486725;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
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
                result[3] += 0.40476190476190477;
                result[4] += 0.047619047619047616;
                result[5] += 0.5;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0.02459016393442623;
                result[2] += 0;
                result[3] += 0.8770491803278688;
                result[4] += 0.02459016393442623;
                result[5] += 0.07377049180327869;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0;
                result[5] += 0.9;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)82.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)40.5) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)48.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
                result[0] += 0.5;
                result[1] += 0;
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
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
                result[0] += 0.32142857142857145;
                result[1] += 0.21428571428571427;
                result[2] += 0;
                result[3] += 0.03571428571428571;
                result[4] += 0.35714285714285715;
                result[5] += 0.07142857142857142;
              } else {
                result[0] += 0.010638297872340425;
                result[1] += 0.09574468085106383;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8936170212765957;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)38) ) ) {
                result[0] += 0;
                result[1] += 0.9;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1;
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
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71) ) ) {
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
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)106.5) ) ) {
                result[0] += 0.9878048780487805;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.012195121951219513;
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
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
                result[0] += 0.047619047619047616;
                result[1] += 0.09523809523809523;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8571428571428571;
                result[5] += 0;
              } else {
                result[0] += 0.3666666666666667;
                result[1] += 0.33333333333333337;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2666666666666667;
                result[5] += 0.03333333333333334;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
                result[0] += 0.18181818181818182;
                result[1] += 0.09090909090909091;
                result[2] += 0;
                result[3] += 0.45454545454545453;
                result[4] += 0;
                result[5] += 0.2727272727272727;
              } else {
                result[0] += 0.9641255605381167;
                result[1] += 0.0011210762331838567;
                result[2] += 0;
                result[3] += 0.012331838565022422;
                result[4] += 0.01681614349775785;
                result[5] += 0.005605381165919283;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
                result[0] += 0.06521739130434782;
                result[1] += 0.13043478260869565;
                result[2] += 0.2391304347826087;
                result[3] += 0.2608695652173913;
                result[4] += 0.15217391304347827;
                result[5] += 0.15217391304347827;
              } else {
                result[0] += 0.8571428571428571;
                result[1] += 0;
                result[2] += 0.14285714285714285;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1951219512195122;
                result[4] += 0;
                result[5] += 0.8048780487804879;
              } else {
                result[0] += 0;
                result[1] += 0.006097560975609756;
                result[2] += 0.11585365853658537;
                result[3] += 0.5914634146341463;
                result[4] += 0.006097560975609756;
                result[5] += 0.2804878048780488;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                result[0] += 0.025;
                result[1] += 0;
                result[2] += 0.1625;
                result[3] += 0.15;
                result[4] += 0.0375;
                result[5] += 0.625;
              } else {
                result[0] += 0.07142857142857142;
                result[1] += 0.07142857142857142;
                result[2] += 0.5178571428571429;
                result[3] += 0.10714285714285714;
                result[4] += 0.10714285714285714;
                result[5] += 0.125;
              }
            }
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)112.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)101.5) ) ) {
                result[0] += 0.09090909090909091;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9090909090909091;
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
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
                result[0] += 0.16666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8333333333333334;
                result[5] += 0;
              } else {
                result[0] += 0.9459459459459459;
                result[1] += 0;
                result[2] += 0.05405405405405406;
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
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8857142857142857;
                result[4] += 0;
                result[5] += 0.11428571428571428;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4444444444444444;
                result[3] += 0.5555555555555556;
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08333333333333333;
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
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)92.5) ) ) {
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4878048780487805;
                result[3] += 0.5121951219512195;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.06666666666666667;
                result[1] += 0;
                result[2] += 0.8666666666666667;
                result[3] += 0.06666666666666667;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9166666666666666;
                result[3] += 0.08333333333333333;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)121) ) ) {
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
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
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.38235294117647056;
                result[3] += 0.5882352941176471;
                result[4] += 0;
                result[5] += 0.029411764705882353;
              } else {
                result[0] += 0.09090909090909091;
                result[1] += 0;
                result[2] += 0.7272727272727273;
                result[3] += 0.13636363636363635;
                result[4] += 0;
                result[5] += 0.045454545454545456;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)76.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)104.5) ) ) {
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
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)100.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)111.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7931034482758621;
                result[3] += 0.20689655172413793;
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
            }
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)97) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
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
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)94) ) ) {
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9183673469387755;
                result[3] += 0.08163265306122448;
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
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9166666666666666;
                result[3] += 0.08333333333333333;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0019193857965451055;
                result[1] += 0;
                result[2] += 0.9961612284069098;
                result[3] += 0.0019193857965451055;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)46) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)41) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.016778523489932886;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9765100671140939;
                result[5] += 0.006711409395973154;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)68) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)49) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9666666666666667;
                result[5] += 0.03333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.7692307692307693;
                result[1] += 0.15384615384615385;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.07692307692307693;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.038461538461538464;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.9615384615384616;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
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
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)64.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)63.5) ) ) {
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
              result[4] += 1;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)80.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)66.5) ) ) {
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
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
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
                result[3] += 0.03159340659340659;
                result[4] += 0;
                result[5] += 0.9684065934065934;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)69) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)85) ) ) {
                result[0] += 0.015625;
                result[1] += 0.015625;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9375;
                result[5] += 0.03125;
              } else {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0.5;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
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
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4;
                result[4] += 0.6;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.00819672131147541;
                result[2] += 0.00819672131147541;
                result[3] += 0.1680327868852459;
                result[4] += 0.028688524590163935;
                result[5] += 0.7868852459016393;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)70) ) ) {
                result[0] += 0.8421052631578947;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.15789473684210525;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0.16666666666666666;
                result[4] += 0.08333333333333333;
                result[5] += 0.5833333333333334;
              }
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5384615384615384;
                result[4] += 0;
                result[5] += 0.46153846153846156;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9052631578947369;
                result[4] += 0.010526315789473684;
                result[5] += 0.08421052631578947;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
                result[0] += 0.07407407407407407;
                result[1] += 0.037037037037037035;
                result[2] += 0.037037037037037035;
                result[3] += 0.1111111111111111;
                result[4] += 0;
                result[5] += 0.7407407407407407;
              } else {
                result[0] += 0.023809523809523808;
                result[1] += 0;
                result[2] += 0.047619047619047616;
                result[3] += 0.6190476190476191;
                result[4] += 0;
                result[5] += 0.30952380952380953;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)109.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)51) ) ) {
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
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97) ) ) {
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
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)53) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)106) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99.5) ) ) {
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
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)51.5) ) ) {
                result[0] += 0.8;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.2;
              } else {
                result[0] += 0.03448275862068966;
                result[1] += 0.03448275862068966;
                result[2] += 0;
                result[3] += 0.03448275862068966;
                result[4] += 0.8620689655172414;
                result[5] += 0.03448275862068966;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)66.5) ) ) {
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
                result[3] += 0.875;
                result[4] += 0;
                result[5] += 0.125;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
                result[0] += 0.9706572769953052;
                result[1] += 0.0011737089201877937;
                result[2] += 0.0011737089201877937;
                result[3] += 0.004694835680751175;
                result[4] += 0.0187793427230047;
                result[5] += 0.003521126760563381;
              } else {
                result[0] += 0.5666666666666667;
                result[1] += 0;
                result[2] += 0.06666666666666667;
                result[3] += 0.16666666666666666;
                result[4] += 0.18333333333333332;
                result[5] += 0.016666666666666666;
              }
            }
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)89) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0.1111111111111111;
                result[2] += 0;
                result[3] += 0.1111111111111111;
                result[4] += 0.7777777777777778;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.014492753623188406;
                result[3] += 0.7101449275362319;
                result[4] += 0;
                result[5] += 0.2753623188405797;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0.8333333333333334;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.16666666666666666;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.05555555555555555;
                result[2] += 0.1111111111111111;
                result[3] += 0.1111111111111111;
                result[4] += 0.1111111111111111;
                result[5] += 0.6111111111111112;
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.2;
                result[4] += 0.4;
                result[5] += 0;
              } else {
                result[0] += 0.8653846153846154;
                result[1] += 0.038461538461538464;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.09615384615384616;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)90) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69) ) ) {
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0.16666666666666666;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8333333333333334;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.09090909090909091;
                result[3] += 0.8311688311688312;
                result[4] += 0;
                result[5] += 0.07792207792207792;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
                result[0] += 0.1875;
                result[1] += 0;
                result[2] += 0.1875;
                result[3] += 0.375;
                result[4] += 0.25;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4411764705882353;
                result[3] += 0.08823529411764706;
                result[4] += 0;
                result[5] += 0.47058823529411764;
              }
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
                result[0] += 0.2857142857142857;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0.5714285714285714;
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
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8666666666666667;
                result[3] += 0.13333333333333333;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0.16666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            }
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)80.5) ) ) {
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
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8695652173913043;
                result[3] += 0.043478260869565216;
                result[4] += 0;
                result[5] += 0.08695652173913043;
              }
            }
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)94) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)118.5) ) ) {
                result[0] += 0.041666666666666664;
                result[1] += 0.041666666666666664;
                result[2] += 0.8333333333333334;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.08333333333333333;
              } else {
                result[0] += 0.875;
                result[1] += 0;
                result[2] += 0.125;
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
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)101) ) ) {
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
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
                result[0] += 0.009029345372460496;
                result[1] += 0;
                result[2] += 0.8939051918735892;
                result[3] += 0.08126410835214447;
                result[4] += 0;
                result[5] += 0.01580135440180587;
              } else {
                result[0] += 0.003976143141153081;
                result[1] += 0;
                result[2] += 0.9761431411530815;
                result[3] += 0.019880715705765408;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9906976744186047;
                result[5] += 0.009302325581395349;
              } else {
                result[0] += 0.25;
                result[1] += 0.125;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.625;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)55) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.75;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.25;
              }
            }
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)60.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
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
                result[4] += 0.13333333333333333;
                result[5] += 0.8666666666666667;
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
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
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
                result[4] += 0.4;
                result[5] += 0.6;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.125;
                result[5] += 0.875;
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0.25;
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.10526315789473684;
                result[5] += 0.8947368421052632;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.005110732538330494;
                result[4] += 0;
                result[5] += 0.9948892674616695;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.04424778761061947;
                result[2] += 0;
                result[3] += 0.04424778761061947;
                result[4] += 0.07964601769911504;
                result[5] += 0.831858407079646;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.017543859649122806;
                result[3] += 0.49122807017543857;
                result[4] += 0.017543859649122806;
                result[5] += 0.47368421052631576;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
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
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
                result[0] += 0.05;
                result[1] += 0.3;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0.35;
                result[5] += 0.1;
              } else {
                result[0] += 0.004694835680751174;
                result[1] += 0.009389671361502348;
                result[2] += 0.03286384976525822;
                result[3] += 0.20187793427230047;
                result[4] += 0.046948356807511735;
                result[5] += 0.704225352112676;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7790697674418605;
                result[4] += 0;
                result[5] += 0.22093023255813954;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2857142857142857;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.7142857142857143;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)108) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72) ) ) {
                result[0] += 0.0380952380952381;
                result[1] += 0.009523809523809525;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9523809523809523;
                result[5] += 0;
              } else {
                result[0] += 0.2807017543859649;
                result[1] += 0.017543859649122806;
                result[2] += 0;
                result[3] += 0.017543859649122806;
                result[4] += 0.47368421052631576;
                result[5] += 0.21052631578947367;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)101.5) ) ) {
                result[0] += 0.14285714285714285;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8571428571428571;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9565217391304348;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.043478260869565216;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)100.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
                result[0] += 0.1;
                result[1] += 0.7;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
                result[0] += 0.02702702702702703;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.05405405405405406;
                result[4] += 0.08108108108108109;
                result[5] += 0.8378378378378378;
              } else {
                result[0] += 0.14285714285714285;
                result[1] += 0.07142857142857142;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0.14285714285714285;
                result[5] += 0.14285714285714285;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
                result[0] += 0.3125;
                result[1] += 0.020833333333333332;
                result[2] += 0;
                result[3] += 0.020833333333333332;
                result[4] += 0.14583333333333334;
                result[5] += 0.5;
              } else {
                result[0] += 0.9134524929444968;
                result[1] += 0.015051740357478836;
                result[2] += 0.0009407337723424272;
                result[3] += 0.009407337723424272;
                result[4] += 0.05362182502351835;
                result[5] += 0.007525870178739418;
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.058823529411764705;
                result[4] += 0;
                result[5] += 0.9411764705882353;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.02702702702702703;
                result[3] += 0.4797297297297297;
                result[4] += 0.02027027027027027;
                result[5] += 0.47297297297297297;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)93) ) ) {
                result[0] += 0.2941176470588236;
                result[1] += 0;
                result[2] += 0.411764705882353;
                result[3] += 0.029411764705882356;
                result[4] += 0.23529411764705885;
                result[5] += 0.029411764705882356;
              } else {
                result[0] += 0.8823529411764707;
                result[1] += 0;
                result[2] += 0.07843137254901962;
                result[3] += 0;
                result[4] += 0.03921568627450981;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95) ) ) {
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
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83) ) ) {
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
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.08333333333333333;
                result[3] += 0.8690476190476191;
                result[4] += 0;
                result[5] += 0.047619047619047616;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.375;
                result[3] += 0.5625;
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
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)92.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)112.5) ) ) {
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
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)103.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.17647058823529413;
                result[3] += 0.7647058823529411;
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
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.05263157894736842;
                result[1] += 0;
                result[2] += 0.8947368421052632;
                result[3] += 0.05263157894736842;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
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
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)94.5) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)111.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.04;
                result[4] += 0;
                result[5] += 0.56;
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)76.5) ) ) {
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
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)94) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9259259259259259;
                result[3] += 0.07407407407407407;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)111.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)76) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)106) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)76) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)119) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5909090909090909;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.07575757575757576;
              } else {
                result[0] += 0.1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0.021621621621621623;
                result[1] += 0;
                result[2] += 0.8972972972972973;
                result[3] += 0.07567567567567568;
                result[4] += 0.005405405405405406;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)100.5) ) ) {
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
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)107.5) ) ) {
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)116.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9555555555555556;
                result[3] += 0.044444444444444446;
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.972972972972973;
                result[3] += 0.02702702702702703;
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
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
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
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
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
                result[4] += 0.3333333333333333;
                result[5] += 0.5;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)82) ) ) {
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
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)66.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.03125;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.03125;
                result[5] += 0.9375;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.375;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0.25;
                result[5] += 0.125;
              }
            }
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)79.5) ) ) {
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.0625;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.21875;
                result[5] += 0.71875;
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.03125;
                result[4] += 0.3125;
                result[5] += 0.65625;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.011976047904191617;
                result[4] += 0.017964071856287425;
                result[5] += 0.9700598802395209;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.1232876712328767;
                result[2] += 0.0136986301369863;
                result[3] += 0.136986301369863;
                result[4] += 0;
                result[5] += 0.726027397260274;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6388888888888888;
                result[4] += 0;
                result[5] += 0.3611111111111111;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)71) ) ) {
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
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)59.5) ) ) {
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
                result[3] += 0.625;
                result[4] += 0.125;
                result[5] += 0.25;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
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
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0.8333333333333334;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)100) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8969072164948454;
                result[4] += 0;
                result[5] += 0.10309278350515463;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5714285714285714;
                result[3] += 0.2857142857142857;
                result[4] += 0;
                result[5] += 0.14285714285714285;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)48) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)42.5) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)44.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
                result[0] += 0.042105263157894736;
                result[1] += 0.031578947368421054;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9157894736842105;
                result[5] += 0.010526315789473684;
              } else {
                result[0] += 0.3888888888888889;
                result[1] += 0.2777777777777778;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)50.5) ) ) {
                result[0] += 0.17948717948717946;
                result[1] += 0.641025641025641;
                result[2] += 0.07692307692307691;
                result[3] += 0;
                result[4] += 0.10256410256410253;
                result[5] += 0;
              } else {
                result[0] += 0.06;
                result[1] += 0.12;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.82;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)70.5) ) ) {
                result[0] += 0.2033898305084746;
                result[1] += 0.01694915254237288;
                result[2] += 0;
                result[3] += 0.3559322033898305;
                result[4] += 0.13559322033898305;
                result[5] += 0.288135593220339;
              } else {
                result[0] += 0.9119025304592315;
                result[1] += 0.0018744142455482662;
                result[2] += 0.006560449859418931;
                result[3] += 0.019681349578256794;
                result[4] += 0.04029990627928772;
                result[5] += 0.019681349578256794;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.14423076923076922;
                result[4] += 0.15384615384615385;
                result[5] += 0.7019230769230769;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0.6666666666666666;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)70.5) ) ) {
                result[0] += 0.2558139534883721;
                result[1] += 0.18604651162790697;
                result[2] += 0;
                result[3] += 0.023255813953488372;
                result[4] += 0.3488372093023256;
                result[5] += 0.18604651162790697;
              } else {
                result[0] += 0.007633587786259542;
                result[1] += 0.003816793893129771;
                result[2] += 0.0648854961832061;
                result[3] += 0.6412213740458015;
                result[4] += 0.04961832061068702;
                result[5] += 0.23282442748091603;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)110.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1388888888888889;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.5277777777777778;
              } else {
                result[0] += 0.04210526315789474;
                result[1] += 0;
                result[2] += 0.8210526315789475;
                result[3] += 0.02105263157894737;
                result[4] += 0.02105263157894737;
                result[5] += 0.09473684210526317;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
                result[0] += 0.16666666666666669;
                result[1] += 0;
                result[2] += 0.6666666666666667;
                result[3] += 0.16666666666666669;
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)92.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)110.5) ) ) {
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
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0625;
                result[3] += 0.9375;
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
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)89) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
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
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)114.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.1;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8888888888888888;
                result[4] += 0;
                result[5] += 0.1111111111111111;
              } else {
                result[0] += 0.4;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
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
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.30000000000000004;
                result[3] += 0.6000000000000001;
                result[4] += 0;
                result[5] += 0.10000000000000002;
              } else {
                result[0] += 0.02586206896551724;
                result[1] += 0;
                result[2] += 0.8017241379310345;
                result[3] += 0.15517241379310345;
                result[4] += 0;
                result[5] += 0.017241379310344827;
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)114) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)106.5) ) ) {
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
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75) ) ) {
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
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)111.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
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
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)90) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)94.5) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)112.5) ) ) {
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
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)110.5) ) ) {
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
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)119) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9888059701492538;
                result[3] += 0.011194029850746268;
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
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)47.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)64.5) ) ) {
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
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)52) ) ) {
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
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)60.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4166666666666667;
                result[5] += 0.5833333333333334;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9285714285714286;
                result[5] += 0.07142857142857142;
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
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0144;
                result[4] += 0.0496;
                result[5] += 0.936;
              } else {
                result[0] += 0.016194331983805668;
                result[1] += 0;
                result[2] += 0.004048582995951417;
                result[3] += 0.15384615384615385;
                result[4] += 0.044534412955465584;
                result[5] += 0.7813765182186235;
              }
            }
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)55) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0.02;
                result[2] += 0;
                result[3] += 0.08;
                result[4] += 0.02;
                result[5] += 0.88;
              } else {
                result[0] += 0.041666666666666664;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3958333333333333;
                result[4] += 0.0763888888888889;
                result[5] += 0.4861111111111111;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9051724137931034;
                result[4] += 0;
                result[5] += 0.09482758620689655;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07142857142857142;
                result[3] += 0.23809523809523808;
                result[4] += 0;
                result[5] += 0.6904761904761905;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)41) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)55.5) ) ) {
                result[0] += 0;
                result[1] += 0.4;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6;
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
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)78) ) ) {
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
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)68) ) ) {
                result[0] += 0;
                result[1] += 0.013513513513513514;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9864864864864865;
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
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)55) ) ) {
                result[0] += 0.75;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8888888888888888;
                result[5] += 0.1111111111111111;
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)57) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)95) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)97) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
                result[0] += 0.11538461538461539;
                result[1] += 0;
                result[2] += 0.038461538461538464;
                result[3] += 0.2692307692307692;
                result[4] += 0.15384615384615385;
                result[5] += 0.4230769230769231;
              } else {
                result[0] += 0.041666666666666664;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9583333333333334;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0.75;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0.15;
                result[5] += 0;
              } else {
                result[0] += 0.7777777777777778;
                result[1] += 0.1111111111111111;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1111111111111111;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)78) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.0625;
                result[5] += 0.9375;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)66) ) ) {
                result[0] += 0;
                result[1] += 0.16666666666666666;
                result[2] += 0;
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9302809573361083;
                result[1] += 0.002081165452653486;
                result[2] += 0.001040582726326743;
                result[3] += 0.013527575442247659;
                result[4] += 0.047866805411030174;
                result[5] += 0.005202913631633715;
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
                result[0] += 0.008771929824561403;
                result[1] += 0;
                result[2] += 0.03508771929824561;
                result[3] += 0.20175438596491227;
                result[4] += 0.07017543859649122;
                result[5] += 0.6842105263157895;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
                result[0] += 0.023622047244094488;
                result[1] += 0.03937007874015748;
                result[2] += 0.047244094488188976;
                result[3] += 0.6771653543307087;
                result[4] += 0.007874015748031496;
                result[5] += 0.2047244094488189;
              } else {
                result[0] += 0.01639344262295082;
                result[1] += 0;
                result[2] += 0.5409836065573771;
                result[3] += 0.3114754098360656;
                result[4] += 0;
                result[5] += 0.13114754098360656;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93) ) ) {
                result[0] += 0.041666666666666664;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.041666666666666664;
                result[4] += 0.041666666666666664;
                result[5] += 0.625;
              } else {
                result[0] += 0.10810810810810811;
                result[1] += 0;
                result[2] += 0.7162162162162162;
                result[3] += 0.12162162162162163;
                result[4] += 0.013513513513513514;
                result[5] += 0.04054054054054054;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
                result[0] += 0.40740740740740744;
                result[1] += 0.07407407407407408;
                result[2] += 0.14814814814814817;
                result[3] += 0;
                result[4] += 0.3703703703703704;
                result[5] += 0;
              } else {
                result[0] += 0.9047619047619048;
                result[1] += 0;
                result[2] += 0.09523809523809523;
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)98) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)121) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)94) ) ) {
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
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)75) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66) ) ) {
                result[0] += 0.42857142857142855;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5714285714285714;
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
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9629629629629629;
                result[4] += 0;
                result[5] += 0.037037037037037035;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.25;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)116.5) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.42857142857142855;
                result[3] += 0.5714285714285714;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8;
                result[3] += 0.1111111111111111;
                result[4] += 0;
                result[5] += 0.08888888888888889;
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)108.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6923076923076923;
                result[3] += 0.3076923076923077;
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
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)98) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.33333333333333337;
                result[3] += 0.5000000000000001;
                result[4] += 0;
                result[5] += 0.16666666666666669;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9302325581395349;
                result[3] += 0.06976744186046512;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)116.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8666666666666667;
                result[3] += 0.13333333333333333;
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
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
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
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9206349206349206;
                result[3] += 0.07936507936507936;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)109.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9710144927536232;
                result[3] += 0.028985507246376812;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)109.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)80) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84) ) ) {
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)42) ) ) {
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
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)53.5) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)52) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70) ) ) {
                result[0] += 0.037037037037037035;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8518518518518519;
                result[5] += 0.1111111111111111;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
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
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)53.5) ) ) {
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
                result[4] += 0.3125;
                result[5] += 0.5625;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.045054945054945054;
                result[4] += 0.03736263736263736;
                result[5] += 0.9175824175824175;
              } else {
                result[0] += 0.07692307692307693;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7692307692307693;
                result[4] += 0;
                result[5] += 0.15384615384615385;
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)59.5) ) ) {
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
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)54) ) ) {
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
                result[3] += 0.2236842105263158;
                result[4] += 0;
                result[5] += 0.7763157894736842;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0.16666666666666666;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0.0125;
                result[1] += 0.0375;
                result[2] += 0;
                result[3] += 0.475;
                result[4] += 0.0125;
                result[5] += 0.4625;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3;
                result[4] += 0;
                result[5] += 0.7;
              } else {
                result[0] += 0.007042253521126762;
                result[1] += 0.007042253521126762;
                result[2] += 0;
                result[3] += 0.8661971830985916;
                result[4] += 0;
                result[5] += 0.11971830985915494;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)99) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9904306220095693;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.009569377990430622;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)106) ) ) {
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
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)52.5) ) ) {
                result[0] += 0.5;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0.03125;
                result[1] += 0.010416666666666666;
                result[2] += 0;
                result[3] += 0.010416666666666666;
                result[4] += 0.9166666666666666;
                result[5] += 0.03125;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)56) ) ) {
                result[0] += 0;
                result[1] += 0.9555555555555556;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.044444444444444446;
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
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
                result[0] += 0.2903225806451613;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.03225806451612903;
                result[4] += 0.41935483870967744;
                result[5] += 0.25806451612903225;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4594594594594595;
                result[4] += 0.05405405405405406;
                result[5] += 0.4864864864864865;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)107.5) ) ) {
                result[0] += 0.89593657086224;
                result[1] += 0.0089197224975223;
                result[2] += 0.003964321110009912;
                result[3] += 0.025768087215064423;
                result[4] += 0.06144697720515362;
                result[5] += 0.003964321110009912;
              } else {
                result[0] += 0.05555555555555555;
                result[1] += 0.9444444444444444;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)55.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.04285714285714286;
                result[3] += 0.17142857142857143;
                result[4] += 0.14285714285714285;
                result[5] += 0.6428571428571429;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
                result[0] += 0.005681818181818182;
                result[1] += 0.022727272727272728;
                result[2] += 0.056818181818181816;
                result[3] += 0.625;
                result[4] += 0.017045454545454544;
                result[5] += 0.2727272727272727;
              } else {
                result[0] += 0.06250000000000001;
                result[1] += 0.08333333333333334;
                result[2] += 0.47916666666666674;
                result[3] += 0.33333333333333337;
                result[4] += 0;
                result[5] += 0.04166666666666667;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
                result[0] += 0;
                result[1] += 0.06896551724137931;
                result[2] += 0.20689655172413793;
                result[3] += 0.6896551724137931;
                result[4] += 0;
                result[5] += 0.034482758620689655;
              } else {
                result[0] += 0.0847457627118644;
                result[1] += 0.025423728813559324;
                result[2] += 0.6949152542372882;
                result[3] += 0.0847457627118644;
                result[4] += 0;
                result[5] += 0.11016949152542373;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
                result[0] += 0.8461538461538461;
                result[1] += 0;
                result[2] += 0.01282051282051282;
                result[3] += 0;
                result[4] += 0.14102564102564102;
                result[5] += 0;
              } else {
                result[0] += 0.46938775510204084;
                result[1] += 0;
                result[2] += 0.4897959183673469;
                result[3] += 0.04081632653061224;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)112) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
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
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)100.5) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)106.5) ) ) {
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
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69) ) ) {
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)114.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
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
                result[4] += 0.5;
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)102.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.45454545454545453;
                result[3] += 0.45454545454545453;
                result[4] += 0;
                result[5] += 0.09090909090909091;
              } else {
                result[0] += 0.005698005698005698;
                result[1] += 0;
                result[2] += 0.8774928774928775;
                result[3] += 0.09686609686609686;
                result[4] += 0;
                result[5] += 0.019943019943019943;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)122.5) ) ) {
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)110.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)108) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)113) ) ) {
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8181818181818182;
                result[3] += 0.18181818181818182;
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9952380952380953;
                result[5] += 0.004761904761904762;
              } else {
                result[0] += 0.4;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6;
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)65) ) ) {
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
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)54) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)79) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)85.5) ) ) {
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
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77.5) ) ) {
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66) ) ) {
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
                result[4] += 0.5555555555555556;
                result[5] += 0.4444444444444444;
              }
            }
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)55) ) ) {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8666666666666667;
                result[5] += 0.13333333333333333;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.75;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)48.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.004;
                result[2] += 0;
                result[3] += 0.028;
                result[4] += 0.018666666666666668;
                result[5] += 0.9493333333333334;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0.004651162790697674;
                result[2] += 0;
                result[3] += 0.12558139534883722;
                result[4] += 0.10697674418604651;
                result[5] += 0.7627906976744186;
              } else {
                result[0] += 0;
                result[1] += 0.05555555555555555;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0.08333333333333333;
                result[5] += 0.3611111111111111;
              }
            }
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
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
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9411764705882353;
                result[4] += 0;
                result[5] += 0.058823529411764705;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)69) ) ) {
                result[0] += 0.07692307692307693;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7692307692307693;
                result[4] += 0;
                result[5] += 0.15384615384615385;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.125;
                result[4] += 0;
                result[5] += 0.875;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)42.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
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
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)78) ) ) {
                result[0] += 0.009433962264150943;
                result[1] += 0.03773584905660377;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9245283018867925;
                result[5] += 0.02830188679245283;
              } else {
                result[0] += 0.4074074074074074;
                result[1] += 0.037037037037037035;
                result[2] += 0.037037037037037035;
                result[3] += 0.1111111111111111;
                result[4] += 0.25925925925925924;
                result[5] += 0.14814814814814814;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)105.5) ) ) {
                result[0] += 0.11764705882352941;
                result[1] += 0.17647058823529413;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7058823529411765;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.8823529411764706;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.058823529411764705;
                result[5] += 0.058823529411764705;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61) ) ) {
                result[0] += 0;
                result[1] += 0.7037037037037037;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2962962962962963;
                result[5] += 0;
              } else {
                result[0] += 0.9022887323943662;
                result[1] += 0.002640845070422535;
                result[2] += 0.0035211267605633804;
                result[3] += 0.028169014084507043;
                result[4] += 0.04225352112676056;
                result[5] += 0.02112676056338028;
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
                result[0] += 0.02702702702702703;
                result[1] += 0.35135135135135137;
                result[2] += 0.02702702702702703;
                result[3] += 0.05405405405405406;
                result[4] += 0.5405405405405406;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.03225806451612903;
                result[2] += 0.1382488479262673;
                result[3] += 0.4930875576036866;
                result[4] += 0.027649769585253458;
                result[5] += 0.3087557603686636;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.0196078431372549;
                result[2] += 0.7647058823529411;
                result[3] += 0.1568627450980392;
                result[4] += 0;
                result[5] += 0.058823529411764705;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
                result[0] += 0.45;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.2;
                result[4] += 0.1;
                result[5] += 0.05;
              } else {
                result[0] += 0.07142857142857142;
                result[1] += 0.07142857142857142;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8571428571428571;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
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
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)114) ) ) {
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92.5) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
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
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4166666666666667;
                result[4] += 0;
                result[5] += 0.5833333333333334;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8571428571428571;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.14285714285714285;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
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
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85) ) ) {
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
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102.5) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)94) ) ) {
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
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79) ) ) {
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)111.5) ) ) {
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8888888888888888;
                result[3] += 0.1111111111111111;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4523809523809524;
                result[3] += 0.5238095238095238;
                result[4] += 0;
                result[5] += 0.023809523809523808;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96.5) ) ) {
                result[0] += 0.0045662100456621;
                result[1] += 0;
                result[2] += 0.8812785388127854;
                result[3] += 0.1095890410958904;
                result[4] += 0;
                result[5] += 0.0045662100456621;
              } else {
                result[0] += 0.2608695652173913;
                result[1] += 0;
                result[2] += 0.7391304347826086;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)98.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)110.5) ) ) {
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
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)103.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)88.5) ) ) {
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
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)113) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)101) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
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
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)104) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9411764705882353;
                result[3] += 0.058823529411764705;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9375;
                result[3] += 0.0625;
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)107) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
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
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)73.5) ) ) {
                result[0] += 0.0048543689320388345;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9951456310679612;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7857142857142857;
                result[5] += 0.21428571428571427;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)68) ) ) {
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
                result[4] += 0.7;
                result[5] += 0.3;
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69) ) ) {
                result[0] += 0.034482758620689655;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.896551724137931;
                result[5] += 0.06896551724137931;
              } else {
                result[0] += 0.9534883720930233;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.046511627906976744;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.01794453507340946;
                result[4] += 0.0032626427406199023;
                result[5] += 0.9787928221859706;
              } else {
                result[0] += 0.005037783375314861;
                result[1] += 0;
                result[2] += 0.007556675062972292;
                result[3] += 0.14105793450881612;
                result[4] += 0.11083123425692695;
                result[5] += 0.7355163727959698;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.21568627450980393;
                result[4] += 0.09803921568627451;
                result[5] += 0.6862745098039216;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8602941176470589;
                result[4] += 0;
                result[5] += 0.13970588235294118;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2727272727272727;
                result[4] += 0;
                result[5] += 0.7272727272727273;
              }
            }
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
                result[0] += 0.01904761904761905;
                result[1] += 0.02857142857142857;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9333333333333333;
                result[5] += 0.01904761904761905;
              } else {
                result[0] += 0.3673469387755102;
                result[1] += 0.10204081632653061;
                result[2] += 0.061224489795918366;
                result[3] += 0.1836734693877551;
                result[4] += 0.2653061224489796;
                result[5] += 0.02040816326530612;
              }
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
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.07894736842105263;
                result[2] += 0;
                result[3] += 0.2894736842105263;
                result[4] += 0.18421052631578946;
                result[5] += 0.4473684210526316;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87.5) ) ) {
                result[0] += 0.4380952380952381;
                result[1] += 0;
                result[2] += 0.009523809523809525;
                result[3] += 0.09523809523809523;
                result[4] += 0.3619047619047619;
                result[5] += 0.09523809523809523;
              } else {
                result[0] += 0.9271991911021233;
                result[1] += 0.010111223458038422;
                result[2] += 0.003033367037411527;
                result[3] += 0.011122345803842264;
                result[4] += 0.042467138523761376;
                result[5] += 0.006066734074823054;
              }
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4146341463414634;
                result[4] += 0.024390243902439025;
                result[5] += 0.5609756097560976;
              } else {
                result[0] += 0.008;
                result[1] += 0;
                result[2] += 0.056;
                result[3] += 0.752;
                result[4] += 0;
                result[5] += 0.184;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0.029411764705882353;
                result[2] += 0.08823529411764706;
                result[3] += 0.3235294117647059;
                result[4] += 0;
                result[5] += 0.5588235294117647;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8823529411764706;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.11764705882352941;
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
                result[0] += 0.1276595744680851;
                result[1] += 0;
                result[2] += 0.1702127659574468;
                result[3] += 0.2127659574468085;
                result[4] += 0.3191489361702128;
                result[5] += 0.1702127659574468;
              } else {
                result[0] += 0.8979591836734694;
                result[1] += 0;
                result[2] += 0.061224489795918366;
                result[3] += 0.02040816326530612;
                result[4] += 0.02040816326530612;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0.5833333333333334;
                result[2] += 0.08333333333333333;
                result[3] += 0.25;
                result[4] += 0.08333333333333333;
                result[5] += 0;
              } else {
                result[0] += 0.05194805194805195;
                result[1] += 0;
                result[2] += 0.8831168831168831;
                result[3] += 0.025974025974025976;
                result[4] += 0;
                result[5] += 0.03896103896103896;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95) ) ) {
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84.5) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.75;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.052631578947368425;
                result[3] += 0.8421052631578948;
                result[4] += 0;
                result[5] += 0.10526315789473685;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7692307692307693;
                result[3] += 0;
                result[4] += 0.07692307692307693;
                result[5] += 0.15384615384615385;
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.6;
                result[4] += 0;
                result[5] += 0.2;
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9512195121951219;
                result[3] += 0.04878048780487805;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97) ) ) {
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
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
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
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
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
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7664670658682635;
                result[3] += 0.2155688622754491;
                result[4] += 0;
                result[5] += 0.017964071856287425;
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6451612903225806;
                result[3] += 0.3548387096774194;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.03125;
                result[1] += 0;
                result[2] += 0.875;
                result[3] += 0.09375;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9552238805970149;
                result[3] += 0.04477611940298507;
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
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)118.5) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9866666666666667;
                result[3] += 0.013333333333333334;
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
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)110.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6666666666666666;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
