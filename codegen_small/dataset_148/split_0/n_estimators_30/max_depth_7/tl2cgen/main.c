
#include "header.h"


static const int32_t num_class[] = {  7, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 7;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8518518518518519;
                result[1] += (float)0;
                result[2] += (float)0.14814814814814814;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9965126416739319;
                result[1] += (float)0;
                result[2] += (float)0.0034873583260680036;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9736842105263158;
                result[1] += (float)0;
                result[2] += (float)0.02631578947368421;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)0;
      result[5] += (float)0;
      result[6] += (float)0;
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0.047619047619047616;
                result[1] += (float)0.23809523809523808;
                result[2] += (float)0;
                result[3] += (float)0.7142857142857143;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9967455621301775;
                result[1] += (float)0;
                result[2] += (float)0.0029585798816568047;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0002958579881656805;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
                result[0] += (float)0.8719068413391557;
                result[1] += (float)0;
                result[2] += (float)0.002911208151382824;
                result[3] += (float)0.12372634643377002;
                result[4] += (float)0;
                result[5] += (float)0.001455604075691412;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.6621621621621622;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.33783783783783783;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.1794871794871795;
                result[2] += (float)0;
                result[3] += (float)0.28205128205128205;
                result[4] += (float)0.5384615384615384;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.022727272727272728;
                result[2] += (float)0;
                result[3] += (float)0.03409090909090909;
                result[4] += (float)0.9431818181818182;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9988713318284425;
                result[4] += (float)0.001128668171557562;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.5;
                result[2] += (float)0.5;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9402985074626866;
                result[1] += (float)0.05970149253731343;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)11.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.23809523809523808;
                result[4] += (float)0.7619047619047619;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.015625;
                result[4] += (float)0.984375;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.001639344262295082;
                result[3] += (float)0;
                result[4] += (float)0.9983606557377049;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.275;
                result[3] += (float)0;
                result[4] += (float)0.725;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0125;
                result[3] += (float)0.9875;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-66.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
                result[0] += (float)0.9328358208955224;
                result[1] += (float)0;
                result[2] += (float)0.06716417910447761;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.994942196531792;
                result[1] += (float)0;
                result[2] += (float)0.0032514450867052024;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0018063583815028901;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)54) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)1;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)59) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)51) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.723404255319149;
                result[1] += (float)0.2765957446808511;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)267) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)56) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9971509971509972;
                result[4] += (float)0;
                result[5] += (float)0.002849002849002849;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.5;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.5;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                result[0] += (float)0.9974651457541192;
                result[1] += (float)0;
                result[2] += (float)0.0025348542458808617;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
                result[0] += (float)0.5333333333333333;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.4666666666666667;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
                result[0] += (float)0.5260141093474426;
                result[1] += (float)0;
                result[2] += (float)0.004409171075837742;
                result[3] += (float)0.4695767195767196;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.03;
                result[3] += (float)0.97;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
                result[0] += (float)0.9831181727904668;
                result[1] += (float)0;
                result[2] += (float)0.013902681231380337;
                result[3] += (float)0.0009930486593843098;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0019860973187686196;
              } else {
                result[0] += (float)0.9209039548022598;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.07909604519774012;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.75;
                result[3] += (float)0.25;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9726027397260274;
                result[4] += (float)0;
                result[5] += (float)0.0273972602739726;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
                result[0] += (float)0.8636363636363636;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.13636363636363635;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9940836012861737;
                result[1] += (float)0.0027009646302250806;
                result[2] += (float)0.0018006430868167203;
                result[3] += (float)0.0005144694533762058;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0009003215434083601;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.7272727272727273;
                result[3] += (float)0.2727272727272727;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
                result[0] += (float)0.6153846153846154;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.38461538461538464;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9464411557434813;
                result[1] += (float)0;
                result[2] += (float)0.004228329809725159;
                result[3] += (float)0.04933051444679352;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0028169014084507044;
                result[3] += (float)0.9971830985915493;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)70) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.1657142857142857;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8285714285714286;
                result[4] += (float)0.005714285714285714;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)60) ) ) {
                result[0] += (float)0.9615384615384616;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.038461538461538464;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0.9993968030561978;
                result[1] += (float)0;
                result[2] += (float)0.0005026641198351262;
                result[3] += (float)0.00010053282396702523;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9968704593718565;
                result[1] += (float)0.0007823851570358779;
                result[2] += (float)0.0005588465407399128;
                result[3] += (float)0.0013412316977757907;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00044707723259193024;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8931116389548693;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.10688836104513064;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.832;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.168;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-118) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)0.7858823529411765;
                result[1] += (float)0;
                result[2] += (float)0.000588235294117647;
                result[3] += (float)0.21352941176470588;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8579492003762935;
                result[1] += (float)0.0037629350893697085;
                result[2] += (float)0.0042333019755409216;
                result[3] += (float)0.1317027281279398;
                result[4] += (float)0;
                result[5] += (float)0.0009407337723424271;
                result[6] += (float)0.0014111006585136407;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.00331858407079646;
                result[3] += (float)0.9966814159292036;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)4.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
                result[0] += (float)0.9966024915062288;
                result[1] += (float)0;
                result[2] += (float)0.0033975084937712344;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.75;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.25;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)50) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)311.5) ) ) {
                result[0] += (float)0.9908496732026144;
                result[1] += (float)0;
                result[2] += (float)0.007516339869281046;
                result[3] += (float)0.00065359477124183;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.000980392156862745;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
                result[0] += (float)0.027692307692307693;
                result[1] += (float)0;
                result[2] += (float)0.02;
                result[3] += (float)0.9523076923076923;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9885057471264368;
                result[4] += (float)0;
                result[5] += (float)0.011494252873563218;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1485) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)17) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-13324) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8571428571428571;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.14285714285714285;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-168.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)224.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.031446540880503145;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.9685534591194969;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)24.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)108) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)46) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.992619926199262;
                result[4] += (float)0;
                result[5] += (float)0.007380073800738007;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.25;
                result[4] += (float)0;
                result[5] += (float)0.75;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.006756756756756757;
                result[3] += (float)0.9924924924924925;
                result[4] += (float)0;
                result[5] += (float)0.0007507507507507507;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)79.5) ) ) {
                result[0] += (float)0.9130434782608695;
                result[1] += (float)0;
                result[2] += (float)0.08695652173913043;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
                result[0] += (float)0.9977521775779714;
                result[1] += (float)0.000674346726608598;
                result[2] += (float)0.0011239112110143301;
                result[3] += (float)0.0001685866816521495;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00028097780275358254;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
                result[0] += (float)0.9997774315602048;
                result[1] += (float)0;
                result[2] += (float)0.00011128421989761853;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00011128421989761853;
              } else {
                result[0] += (float)0.9444444444444444;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.05555555555555555;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9622641509433962;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.03773584905660377;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)76) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)0;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)47) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)46.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)100) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.4;
                result[5] += (float)0.6;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                result[0] += (float)0.9279835390946503;
                result[1] += (float)0;
                result[2] += (float)0.05761316872427984;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.01440329218106996;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)64) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-14.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
                result[0] += (float)0.9090909090909091;
                result[1] += (float)0;
                result[2] += (float)0.09090909090909091;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9885321100917431;
                result[1] += (float)0;
                result[2] += (float)0.011467889908256881;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)18.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.03826530612244898;
                result[2] += (float)0;
                result[3] += (float)0.9617346938775511;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8444444444444444;
                result[1] += (float)0;
                result[2] += (float)0.15555555555555556;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
                result[0] += (float)0.986737400530504;
                result[1] += (float)0;
                result[2] += (float)0.013262599469496022;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9989827060020345;
                result[1] += (float)0;
                result[2] += (float)0.001017293997965412;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)2.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.75;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.25;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
                result[0] += (float)0.99296066252588;
                result[1] += (float)0.0028985507246376816;
                result[2] += (float)0.0033126293995859217;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0008281573498964804;
              } else {
                result[0] += (float)0.7159420289855074;
                result[1] += (float)0.0028985507246376816;
                result[2] += (float)0.0014492753623188408;
                result[3] += (float)0.2768115942028986;
                result[4] += (float)0;
                result[5] += (float)0.0028985507246376816;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
                result[0] += (float)0.3796477495107632;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.6203522504892368;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.014178482068390326;
                result[3] += (float)0.9799833194328608;
                result[4] += (float)0;
                result[5] += (float)0.005838198498748957;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.005803830528148578;
                result[2] += (float)0;
                result[3] += (float)0.9941961694718514;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
                result[0] += (float)0.9375;
                result[1] += (float)0;
                result[2] += (float)0.0625;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-195.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                result[0] += (float)0.9386503067484663;
                result[1] += (float)0;
                result[2] += (float)0.049079754601226995;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.012269938650306749;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)182.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)234) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-44) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.23076923076923078;
                result[2] += (float)0;
                result[3] += (float)0.5769230769230769;
                result[4] += (float)0.19230769230769232;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-108) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1) ) ) {
                result[0] += (float)0.8222222222222222;
                result[1] += (float)0.17777777777777778;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)17.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
                result[0] += (float)0.2;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.8;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)35) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
                result[0] += (float)0.9915237911770373;
                result[1] += (float)0.0025043344249662883;
                result[2] += (float)0.0036601810826430363;
                result[3] += (float)0.0007705644384511656;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0015411288769023312;
              } else {
                result[0] += (float)0.9972932330827068;
                result[1] += (float)0.0004511278195488722;
                result[2] += (float)0.0009022556390977444;
                result[3] += (float)0.0013533834586466164;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0.999245283018868;
                result[1] += (float)0;
                result[2] += (float)0.0007547169811320754;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)34) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0044014084507042256;
                result[3] += (float)0.9955985915492958;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)46) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
                result[0] += (float)0.7652173913043478;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.23478260869565218;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9690501600853789;
                result[1] += (float)0;
                result[2] += (float)0.011739594450373533;
                result[3] += (float)0.012806830309498399;
                result[4] += (float)0;
                result[5] += (float)0.0032017075773745998;
                result[6] += (float)0.0032017075773745998;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)48) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                result[0] += (float)0.9933184855233853;
                result[1] += (float)0;
                result[2] += (float)0.005567928730512249;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0011135857461024498;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9983498349834984;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.0016501650165016502;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)89) ) ) {
                result[0] += (float)0.6086956521739131;
                result[1] += (float)0;
                result[2] += (float)0.391304347826087;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-14) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5525) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-174.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9968383017163505;
                result[1] += (float)0;
                result[2] += (float)0.002258355916892502;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0009033423667570009;
              } else {
                result[0] += (float)0.9996661101836394;
                result[1] += (float)0;
                result[2] += (float)0.000333889816360601;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-17.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)102) ) ) {
                result[0] += (float)0.7142857142857143;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.2857142857142857;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)29) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.006265664160401002;
                result[3] += (float)0.9799498746867168;
                result[4] += (float)0.012531328320802004;
                result[5] += (float)0.0012531328320802004;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)0.9852941176470589;
                result[1] += (float)0;
                result[2] += (float)0.014705882352941176;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.006188118811881188;
                result[3] += (float)0.9938118811881188;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-66.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9910913140311804;
                result[1] += (float)0;
                result[2] += (float)0.0038975501113585748;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.005011135857461025;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
                result[0] += (float)0.9990029910269193;
                result[1] += (float)0;
                result[2] += (float)0.0007477567298105683;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0002492522432701894;
              } else {
                result[0] += (float)0.9768339768339769;
                result[1] += (float)0;
                result[2] += (float)0.023166023166023165;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.7229299363057324;
                result[1] += (float)0.012738853503184714;
                result[2] += (float)0.0031847133757961785;
                result[3] += (float)0.2587579617834395;
                result[4] += (float)0;
                result[5] += (float)0.0015923566878980893;
                result[6] += (float)0.0007961783439490446;
              } else {
                result[0] += (float)0.7962703962703963;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.20326340326340325;
                result[4] += (float)0;
                result[5] += (float)0.0004662004662004662;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.013490725126475547;
                result[3] += (float)0.9831365935919055;
                result[4] += (float)0;
                result[5] += (float)0.003372681281618887;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.7560975609756098;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.24390243902439024;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.18867924528301888;
                result[3] += (float)0;
                result[4] += (float)0.8113207547169812;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.01818181818181818;
                result[3] += (float)0;
                result[4] += (float)0.9818181818181818;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9482758620689655;
                result[1] += (float)0;
                result[2] += (float)0.05172413793103448;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0.9964209019327129;
                result[1] += (float)0;
                result[2] += (float)0.0035790980672870437;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.5555555555555556;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.4444444444444444;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-13) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)13) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)14) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
                result[0] += (float)0.0015151515151515152;
                result[1] += (float)0.007070707070707071;
                result[2] += (float)0.005555555555555556;
                result[3] += (float)0.9856060606060606;
                result[4] += (float)0;
                result[5] += (float)0.0002525252525252525;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-66.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
                result[0] += (float)0.9859702136844377;
                result[1] += (float)0;
                result[2] += (float)0.005611914526224908;
                result[3] += (float)0.006691128858191237;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0017267429311461256;
              } else {
                result[0] += (float)0.8641188959660298;
                result[1] += (float)0.0021231422505307855;
                result[2] += (float)0.025477707006369428;
                result[3] += (float)0.10828025477707007;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)31) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)145) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                result[0] += (float)0.9852941176470589;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.014705882352941176;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)46) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)6.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)110) ) ) {
                result[0] += (float)0.9938080495356038;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.006191950464396285;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)67) ) ) {
                result[0] += (float)0.001454192922927775;
                result[1] += (float)0;
                result[2] += (float)0.0019389238972370335;
                result[3] += (float)0.9946679592825982;
                result[4] += (float)0;
                result[5] += (float)0.0019389238972370335;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)81) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
                result[0] += (float)0.9921642799243447;
                result[1] += (float)0;
                result[2] += (float)0.0029721696838692245;
                result[3] += (float)0.0032423669278573357;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0016211834639286678;
              } else {
                result[0] += (float)0.9737654320987654;
                result[1] += (float)0.024691358024691357;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0015432098765432098;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                result[0] += (float)0.9993114725880025;
                result[1] += (float)8.606592649969878e-05;
                result[2] += (float)0.000559428522248042;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)4.303296324984939e-05;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.6666666666666666;
                result[2] += (float)0;
                result[3] += (float)0.3333333333333333;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)2.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.5454545454545454;
                result[3] += (float)0.45454545454545453;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.4117647058823529;
                result[3] += (float)0.5882352941176471;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.02857142857142857;
                result[3] += (float)0.9714285714285714;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)66) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.8888888888888888;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.1111111111111111;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.002389894161829976;
                result[3] += (float)0.99761010583817;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)4) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
                result[0] += (float)0.8936170212765957;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.10638297872340426;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
                result[0] += (float)0.8857142857142858;
                result[1] += (float)0;
                result[2] += (float)0.10000000000000002;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.014285714285714287;
              } else {
                result[0] += (float)0.9873417721518988;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.012658227848101266;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)14.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)103.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
                result[0] += (float)0.1691542288557214;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8308457711442786;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.7702702702702703;
                result[1] += (float)0.22972972972972974;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1487) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)62) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)22) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)118) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2306.5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)18) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)14.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-17) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.6;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.4;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9987538940809969;
                result[4] += (float)0;
                result[5] += (float)0.0012461059190031153;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.7142857142857143;
                result[4] += (float)0;
                result[5] += (float)0.2857142857142857;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-34) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)32) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.75;
                result[4] += (float)0;
                result[5] += (float)0.25;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9870967741935484;
                result[1] += (float)0;
                result[2] += (float)0.012903225806451613;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)4) ) ) {
                result[0] += (float)0.6;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.4;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
                result[0] += (float)0.9983642311886587;
                result[1] += (float)0;
                result[2] += (float)0.0016357688113413304;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9649122807017544;
                result[1] += (float)0;
                result[2] += (float)0.03508771929824561;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
                result[0] += (float)0.9515899383009018;
                result[1] += (float)0;
                result[2] += (float)0.01613668723303275;
                result[3] += (float)0.03132415757000474;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0009492168960607499;
              } else {
                result[0] += (float)0.9891373801916933;
                result[1] += (float)0.007028753993610224;
                result[2] += (float)0.0019169329073482429;
                result[3] += (float)0.0019169329073482429;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.07456140350877193;
                result[3] += (float)0.9078947368421053;
                result[4] += (float)0;
                result[5] += (float)0.017543859649122806;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9885795860099929;
                result[1] += (float)0;
                result[2] += (float)0.009279086366880799;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0021413276231263384;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-19) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
                result[0] += (float)0.5606060606060606;
                result[1] += (float)0.18181818181818182;
                result[2] += (float)0;
                result[3] += (float)0.25757575757575757;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)57) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.025;
                result[3] += (float)0.975;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.3333333333333333;
                result[2] += (float)0;
                result[3] += (float)0.6666666666666666;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)0.5396825396825397;
                result[1] += (float)0;
                result[2] += (float)0.015873015873015872;
                result[3] += (float)0.4444444444444444;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)0.9539473684210527;
                result[1] += (float)0;
                result[2] += (float)0.013157894736842105;
                result[3] += (float)0.019736842105263157;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.013157894736842105;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)50) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
                result[0] += (float)0.9975247524752475;
                result[1] += (float)0;
                result[2] += (float)0.0024752475247524753;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)5.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0.9696013765414396;
                result[1] += (float)0;
                result[2] += (float)0.0014338973329509608;
                result[3] += (float)0.02810438772583883;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0008603383997705764;
              } else {
                result[0] += (float)0.8198874296435272;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.1801125703564728;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)0.9919028340080972;
                result[1] += (float)0.0016194331983805667;
                result[2] += (float)0;
                result[3] += (float)0.006477732793522267;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9995256166982922;
                result[1] += (float)0;
                result[2] += (float)0.00023719165085388995;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.00023719165085388995;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)9) ) ) {
                result[0] += (float)0.9178082191780822;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.0776255707762557;
                result[4] += (float)0.0045662100456621;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.52;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.48;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)29) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9966740576496674;
                result[4] += (float)0.0005543237250554324;
                result[5] += (float)0.002771618625277162;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.10752688172043011;
                result[1] += (float)0.014336917562724014;
                result[2] += (float)0.05734767025089606;
                result[3] += (float)0.8207885304659498;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)58) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.75;
                result[5] += (float)0.25;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
                result[0] += (float)0.982135438304944;
                result[1] += (float)0;
                result[2] += (float)0.005400914000830911;
                result[3] += (float)0.012463647694225179;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.7432432432432432;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.25675675675675674;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)44.5) ) ) {
                result[0] += (float)0.11683848797250859;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8831615120274914;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.002347417840375587;
                result[3] += (float)0.9976525821596244;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)52) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)81.5) ) ) {
                result[0] += (float)0.046511627906976744;
                result[1] += (float)0;
                result[2] += (float)0.4418604651162791;
                result[3] += (float)0.5116279069767442;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9069767441860465;
                result[1] += (float)0;
                result[2] += (float)0.09302325581395349;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                result[0] += (float)0.9876923076923076;
                result[1] += (float)0;
                result[2] += (float)0.012307692307692308;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
                result[0] += (float)0.7868852459016393;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.21311475409836064;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
                result[0] += (float)0.9953255425709516;
                result[1] += (float)0;
                result[2] += (float)0.001001669449081803;
                result[3] += (float)0.003672787979966611;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9284064665127021;
                result[1] += (float)0;
                result[2] += (float)0.053117782909930716;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.018475750577367205;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)1) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)184) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)24.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.07407407407407407;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.9259259259259259;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)113) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)234) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9738134206219312;
                result[1] += (float)0;
                result[2] += (float)0.016366612111292964;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.009819967266775777;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)13) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
                result[0] += (float)0.40632603406326034;
                result[1] += (float)0;
                result[2] += (float)0.0036496350364963502;
                result[3] += (float)0.5888077858880778;
                result[4] += (float)0;
                result[5] += (float)0.0012165450121654502;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.005076142131979695;
                result[1] += (float)0;
                result[2] += (float)0.005076142131979695;
                result[3] += (float)0.9898477157360406;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)906) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                result[0] += (float)0.9994297995526119;
                result[1] += (float)0;
                result[2] += (float)0.00043861572876003333;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00013158471862801;
              } else {
                result[0] += (float)0.9294605809128631;
                result[1] += (float)0;
                result[2] += (float)0.012448132780082987;
                result[3] += (float)0.05394190871369295;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.004149377593360996;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.5;
                result[5] += (float)0.5;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.004291845493562232;
                result[2] += (float)0;
                result[3] += (float)0.9914163090128756;
                result[4] += (float)0;
                result[5] += (float)0.004291845493562232;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9959677419354839;
                result[1] += (float)0;
                result[2] += (float)0.004032258064516129;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.49226006191950467;
                result[1] += (float)0.04643962848297214;
                result[2] += (float)0;
                result[3] += (float)0.4613003095975232;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)32) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.5702479338842975;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.4297520661157025;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)45.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)33.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9456721915285451;
                result[1] += (float)0;
                result[2] += (float)0.04880294659300184;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0055248618784530384;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.8;
                result[5] += (float)0.2;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)144) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-81) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-34) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)195.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)122) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)234) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.47058823529411764;
                result[1] += (float)0;
                result[2] += (float)0.5294117647058824;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9919028340080972;
                result[1] += (float)0;
                result[2] += (float)0.008097165991902834;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9998359849106118;
                result[1] += (float)0;
                result[2] += (float)0.0001640150893882237;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9912790697674418;
                result[1] += (float)0;
                result[2] += (float)0.005813953488372093;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0029069767441860465;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)33) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.008264462809917356;
                result[2] += (float)0;
                result[3] += (float)0.9917355371900827;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)21) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0.8791390728476821;
                result[1] += (float)0.01076158940397351;
                result[2] += (float)0.0033112582781456954;
                result[3] += (float)0.10264900662251655;
                result[4] += (float)0;
                result[5] += (float)0.0016556291390728477;
                result[6] += (float)0.0024834437086092716;
              } else {
                result[0] += (float)0.9975557592422853;
                result[1] += (float)0;
                result[2] += (float)0.0009165902841429881;
                result[3] += (float)0.0009165902841429881;
                result[4] += (float)0;
                result[5] += (float)0.0006110601894286587;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)24) ) ) {
                result[0] += (float)0.9929351316634554;
                result[1] += (float)0;
                result[2] += (float)0.00449582530507386;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.002569043031470777;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9981167608286252;
                result[1] += (float)0;
                result[2] += (float)0.0018832391713747645;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
                result[0] += (float)0.5;
                result[1] += (float)0;
                result[2] += (float)0.5;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.982202447163515;
                result[1] += (float)0;
                result[2] += (float)0.012235817575083427;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0055617352614015575;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)236.5) ) ) {
                result[0] += (float)0.9941441441441442;
                result[1] += (float)0;
                result[2] += (float)0.004504504504504505;
                result[3] += (float)0.0004504504504504505;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.000900900900900901;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
                result[0] += (float)0.2986111111111111;
                result[1] += (float)0;
                result[2] += (float)0.06944444444444445;
                result[3] += (float)0.6319444444444444;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.15057915057915058;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8494208494208494;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.5203619909502263;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.4796380090497738;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.027624309392265192;
                result[1] += (float)0;
                result[2] += (float)0.0027624309392265192;
                result[3] += (float)0.9682320441988951;
                result[4] += (float)0;
                result[5] += (float)0.0013812154696132596;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9868421052631579;
                result[4] += (float)0;
                result[5] += (float)0.013157894736842105;
                result[6] += (float)0;
              }
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)17) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)122) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.1;
                result[2] += (float)0;
                result[3] += (float)0.9;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-14) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.17857142857142858;
                result[2] += (float)0;
                result[3] += (float)0.8214285714285714;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.25;
                result[1] += (float)0;
                result[2] += (float)0.75;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)125.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)118) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.3333333333333333;
                result[4] += (float)0.6666666666666666;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.009615384615384616;
                result[3] += (float)0;
                result[4] += (float)0.9903846153846154;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)93) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)81) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9393939393939394;
                result[1] += (float)0;
                result[2] += (float)0.06060606060606061;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)61) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)0.35802469135802467;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.6419753086419753;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9775280898876404;
                result[4] += (float)0;
                result[5] += (float)0.02247191011235955;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.5;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.5;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                result[0] += (float)0.625;
                result[1] += (float)0;
                result[2] += (float)0.375;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)10) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.32298136645962733;
                result[4] += (float)0.6770186335403726;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.39295580110497236;
                result[1] += (float)0;
                result[2] += (float)0.011395027624309393;
                result[3] += (float)0.5873618784530387;
                result[4] += (float)0.008287292817679558;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
                result[0] += (float)0.9983525535420099;
                result[1] += (float)0;
                result[2] += (float)0.0008237232289950577;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0008237232289950577;
              } else {
                result[0] += (float)0.9371428571428572;
                result[1] += (float)0;
                result[2] += (float)0.02857142857142857;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.03428571428571429;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)4979) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9708333333333333;
                result[1] += (float)0;
                result[2] += (float)0.025;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.004166666666666667;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9961340206185567;
                result[1] += (float)0;
                result[2] += (float)0.003865979381443299;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
                result[0] += (float)0.9857142857142858;
                result[1] += (float)0;
                result[2] += (float)0.014285714285714285;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-272) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2263) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0.001375515818431912;
                result[1] += (float)0.03163686382393398;
                result[2] += (float)0.001375515818431912;
                result[3] += (float)0.9573590096286108;
                result[4] += (float)0;
                result[5] += (float)0.008253094910591471;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.5753351206434316;
                result[1] += (float)0;
                result[2] += (float)0.002412868632707775;
                result[3] += (float)0.42037533512064346;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0018766756032171583;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
                result[0] += (float)0.7448275862068966;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.25517241379310346;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9914599430662872;
                result[1] += (float)0;
                result[2] += (float)0.0028466856445709637;
                result[3] += (float)0.0056933712891419274;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)86.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)67) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.02278481012658228;
                result[3] += (float)0.9772151898734177;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)0.7142857142857143;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.2857142857142857;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)61) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.3409090909090909;
                result[1] += (float)0;
                result[2] += (float)0.125;
                result[3] += (float)0.5340909090909091;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.13580246913580246;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8641975308641975;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.044715447154471545;
                result[2] += (float)0;
                result[3] += (float)0.9552845528455285;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)252) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9902173913043478;
                result[1] += (float)0;
                result[2] += (float)0.009782608695652175;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
                result[0] += (float)0.9866071428571429;
                result[1] += (float)0;
                result[2] += (float)0.013392857142857142;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.88;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.12;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
                result[0] += (float)0.84375;
                result[1] += (float)0;
                result[2] += (float)0.15625;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
                result[0] += (float)0.9975490196078431;
                result[1] += (float)0;
                result[2] += (float)0.0024509803921568627;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)66) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9969650986342944;
                result[4] += (float)0;
                result[5] += (float)0.0030349013657056147;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9801324503311258;
                result[4] += (float)0.019867549668874173;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.16216216216216217;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.8378378378378378;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                result[0] += (float)0.5090909090909091;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.4636363636363637;
                result[4] += (float)0.009090909090909092;
                result[5] += (float)0.018181818181818184;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.00427578834847675;
                result[1] += (float)0.01389631213254944;
                result[2] += (float)0.005344735435595938;
                result[3] += (float)0.9754142169962586;
                result[4] += (float)0;
                result[5] += (float)0.0010689470871191875;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)113) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.14285714285714285;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.8571428571428571;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.04591836734693878;
                result[3] += (float)0.9540816326530612;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.14705882352941177;
                result[3] += (float)0.8529411764705882;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)26) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)10.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9230769230769231;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.07692307692307693;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)80) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-23) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.25;
                result[3] += (float)0.75;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
                result[0] += (float)0.9970219435736677;
                result[1] += (float)0;
                result[2] += (float)0.0018808777429467085;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00109717868338558;
              } else {
                result[0] += (float)0.9501661129568106;
                result[1] += (float)0;
                result[2] += (float)0.04152823920265781;
                result[3] += (float)0.008305647840531562;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)0.8202764976958526;
                result[1] += (float)0;
                result[2] += (float)0.036866359447004615;
                result[3] += (float)0.10599078341013826;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.036866359447004615;
              } else {
                result[0] += (float)0.981859410430839;
                result[1] += (float)0;
                result[2] += (float)0.0045351473922902496;
                result[3] += (float)0.013605442176870748;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)53) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)103) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.045871559633027525;
                result[2] += (float)0;
                result[3] += (float)0.9541284403669725;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0021156558533145277;
                result[3] += (float)0.9978843441466855;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-8.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)57.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9508196721311475;
                result[4] += (float)0;
                result[5] += (float)0.04918032786885246;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9987000324991876;
                result[4] += (float)0.00032499187520312;
                result[5] += (float)0.0009749756256093599;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)21) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)94) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-144) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)104) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.0017574692442882249;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.9982425307557118;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)46) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9941245593419507;
                result[1] += (float)0;
                result[2] += (float)0.005875440658049354;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
                result[0] += (float)0.9990765442232711;
                result[1] += (float)0.0004104247896572953;
                result[2] += (float)0.0005130309870716191;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0.9953690303907381;
                result[1] += (float)0;
                result[2] += (float)0.0026049204052098407;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0020260492040520984;
              } else {
                result[0] += (float)0.9997558395051681;
                result[1] += (float)0;
                result[2] += (float)0.0002441604948319362;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)46.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
                result[0] += (float)0.9195402298850575;
                result[1] += (float)0;
                result[2] += (float)0.05747126436781609;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.022988505747126436;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)45) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.18032786885245902;
                result[3] += (float)0.819672131147541;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
                result[0] += (float)0.9942396313364056;
                result[1] += (float)0;
                result[2] += (float)0.004608294930875576;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.001152073732718894;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.014058106841611996;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.985941893158388;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
                result[0] += (float)0.004;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.996;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.09090909090909091;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9090909090909091;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-272) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9757575757575757;
                result[1] += (float)0;
                result[2] += (float)0.024242424242424242;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
                result[0] += (float)0.9983299933199733;
                result[1] += (float)0;
                result[2] += (float)0.0016700066800267202;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9885931558935361;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.011406844106463879;
              }
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
                result[0] += (float)0.012048192771084338;
                result[1] += (float)0.13253012048192772;
                result[2] += (float)0;
                result[3] += (float)0.8433734939759037;
                result[4] += (float)0;
                result[5] += (float)0.012048192771084338;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.005169172932330827;
                result[3] += (float)0.993890977443609;
                result[4] += (float)0;
                result[5] += (float)0.0009398496240601503;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.8518518518518519;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.14814814814814814;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
                result[0] += (float)0.9924698795180723;
                result[1] += (float)0;
                result[2] += (float)0.0050200803212851405;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0025100401606425703;
              } else {
                result[0] += (float)0.9993472584856397;
                result[1] += (float)0;
                result[2] += (float)0.0006527415143603133;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
                result[0] += (float)0.997867803837953;
                result[1] += (float)0;
                result[2] += (float)0.0021321961620469083;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9375;
                result[1] += (float)0;
                result[2] += (float)0.0625;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
                result[0] += (float)0.5212765957446809;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.4787234042553192;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9865;
                result[1] += (float)0;
                result[2] += (float)0.007;
                result[3] += (float)0.004;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0025;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.4666666666666667;
                result[2] += (float)0;
                result[3] += (float)0.5333333333333333;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.052486187845303865;
                result[3] += (float)0.9475138121546961;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.6666666666666666;
                result[5] += (float)0.3333333333333333;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.26666666666666666;
                result[2] += (float)0;
                result[3] += (float)0.7333333333333333;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.2727272727272727;
                result[2] += (float)0;
                result[3] += (float)0.7272727272727273;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)34) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)95) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9883268482490273;
                result[4] += (float)0;
                result[5] += (float)0.011673151750972763;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9996505939902166;
                result[4] += (float)0;
                result[5] += (float)0.00034940600978336826;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-10) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5239) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8787878787878788;
                result[1] += (float)0;
                result[2] += (float)0.12121212121212122;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9766839378238342;
                result[1] += (float)0;
                result[2] += (float)0.018134715025906734;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0051813471502590676;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
                result[0] += (float)0.9253731343283582;
                result[1] += (float)0;
                result[2] += (float)0.07462686567164178;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.8260869565217391;
                result[2] += (float)0;
                result[3] += (float)0.17391304347826086;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9920854768500198;
                result[1] += (float)0;
                result[2] += (float)0.00554016620498615;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.002374356944994064;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)103) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
                result[0] += (float)0.9979265402843602;
                result[1] += (float)0;
                result[2] += (float)0.0020734597156398106;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.4;
                result[1] += (float)0;
                result[2] += (float)0.6;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)20) ) ) {
                result[0] += (float)0.9652014652014652;
                result[1] += (float)0;
                result[2] += (float)0.031135531135531136;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.003663003663003663;
              } else {
                result[0] += (float)0.45454545454545453;
                result[1] += (float)0;
                result[2] += (float)0.18181818181818182;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.36363636363636365;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.01;
                result[1] += (float)0.055;
                result[2] += (float)0;
                result[3] += (float)0.005;
                result[4] += (float)0.93;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)11) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)59) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.078125;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.921875;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)79.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
                result[0] += (float)0.26666666666666666;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.7333333333333333;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)68) ) ) {
                result[0] += (float)0.5126050420168067;
                result[1] += (float)0;
                result[2] += (float)0.05042016806722689;
                result[3] += (float)0.4369747899159664;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
                result[0] += (float)0.91320293398533;
                result[1] += (float)0;
                result[2] += (float)0.0012224938875305623;
                result[3] += (float)0.08557457212713937;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9785276073619632;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.02147239263803681;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
                result[0] += (float)0.9683257918552036;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.03167420814479638;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9984164687252574;
                result[1] += (float)0;
                result[2] += (float)0.001583531274742676;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)31.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9987105093488072;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.0012894906511927789;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
                result[0] += (float)0.7692307692307693;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.23076923076923078;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)108) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9617021276595745;
                result[1] += (float)0;
                result[2] += (float)0.02340425531914894;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.014893617021276598;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)67) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-34) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.003791982665222102;
                result[3] += (float)0.9940411700975081;
                result[4] += (float)0;
                result[5] += (float)0.0021668472372697724;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)17.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
                result[0] += (float)0.9824086603518268;
                result[1] += (float)0.006314839873703203;
                result[2] += (float)0.010374379792512404;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0009021199819576004;
              } else {
                result[0] += (float)0.6666666666666667;
                result[1] += (float)0;
                result[2] += (float)0.30000000000000004;
                result[3] += (float)0.03333333333333334;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
                result[0] += (float)0.9975093399750935;
                result[1] += (float)0.0004669987546699876;
                result[2] += (float)0.0018679950186799505;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00015566625155666254;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-16) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
                result[0] += (float)0.7647058823529412;
                result[1] += (float)0.16176470588235298;
                result[2] += (float)0;
                result[3] += (float)0.0735294117647059;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.027777777777777776;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9722222222222222;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)21.5) ) ) {
                result[0] += (float)0.9473684210526315;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.05263157894736842;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.19794140934283452;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8020585906571654;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9761904761904762;
                result[1] += (float)0;
                result[2] += (float)0.017006802721088437;
                result[3] += (float)0.006802721088435374;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)7.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
                result[0] += (float)0.11764705882352941;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8823529411764706;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
                result[0] += (float)0.8326180257510729;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.16738197424892703;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
                result[0] += (float)0.24234354194407456;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.7576564580559254;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.07051282051282051;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9294871794871795;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)52) ) ) {
                result[0] += (float)0.9984447900466563;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0015552099533437014;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)68) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)72) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)0) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9989588755856325;
                result[4] += (float)0.0005205622071837585;
                result[5] += (float)0.0005205622071837585;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.0038314176245210726;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9808429118773946;
                result[4] += (float)0.01532567049808429;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
                result[0] += (float)0.9953812715087846;
                result[1] += (float)0.0010867596449918493;
                result[2] += (float)0.0022640825937330195;
                result[3] += (float)0.00045281651874660387;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.000815069733743887;
              } else {
                result[0] += (float)0.7333333333333333;
                result[1] += (float)0;
                result[2] += (float)0.26666666666666666;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.6666666666666666;
                result[3] += (float)0.3333333333333333;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)50) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
                result[0] += (float)0.6233766233766234;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.2077922077922078;
                result[4] += (float)0.16883116883116883;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.46882217090069284;
                result[1] += (float)0;
                result[2] += (float)0.009237875288683603;
                result[3] += (float)0.05542725173210162;
                result[4] += (float)0.4665127020785219;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
                result[0] += (float)0.9818181818181818;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.01818181818181818;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.3150684931506849;
                result[1] += (float)0;
                result[2] += (float)0.3013698630136986;
                result[3] += (float)0;
                result[4] += (float)0.3835616438356164;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)30) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
                result[0] += (float)0.9995107033639143;
                result[1] += (float)0;
                result[2] += (float)0.0004892966360856269;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9757281553398058;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.014563106796116505;
                result[4] += (float)0;
                result[5] += (float)0.009708737864077669;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
                result[0] += (float)0.8186666666666667;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.18133333333333335;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)34) ) ) {
                result[0] += (float)0.9679695982627579;
                result[1] += (float)0;
                result[2] += (float)0.013029315960912053;
                result[3] += (float)0.014657980456026058;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.004343105320304018;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.6923076923076923;
                result[4] += (float)0.23076923076923078;
                result[5] += (float)0.07692307692307693;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)9) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)9643) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)57) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.6571428571428571;
                result[1] += (float)0;
                result[2] += (float)0.34285714285714286;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.004106776180698152;
                result[2] += (float)0;
                result[3] += (float)0.9958932238193019;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.3181818181818182;
                result[2] += (float)0;
                result[3] += (float)0.6818181818181818;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)178) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2306.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)16.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-33.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.004838709677419355;
                result[3] += (float)0.9943548387096774;
                result[4] += (float)0;
                result[5] += (float)0.0008064516129032258;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)32) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)52) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.013392857142857144;
                result[3] += (float)0.9776785714285715;
                result[4] += (float)0;
                result[5] += (float)0.00892857142857143;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9570815450643777;
                result[1] += (float)0;
                result[2] += (float)0.04291845493562232;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
                result[0] += (float)0.9957081545064378;
                result[1] += (float)0;
                result[2] += (float)0.004291845493562232;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9996387283236994;
                result[1] += (float)0;
                result[2] += (float)0.000361271676300578;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
                result[0] += (float)0.5517241379310345;
                result[1] += (float)0.4482758620689655;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.07216494845360824;
                result[1] += (float)0;
                result[2] += (float)0.06701030927835051;
                result[3] += (float)0.8608247422680413;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
                result[0] += (float)0.9876700680272109;
                result[1] += (float)0;
                result[2] += (float)0.005952380952380952;
                result[3] += (float)0.005952380952380952;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00042517006802721087;
              } else {
                result[0] += (float)0.9053916581892166;
                result[1] += (float)0;
                result[2] += (float)0.003730077992539844;
                result[3] += (float)0.08986096982027807;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.001017293997965412;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-3.5) ) ) {
                result[0] += (float)0.125;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.875;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.4928104575163399;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.5071895424836601;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-108) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2306.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-2.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9996638655462184;
                result[4] += (float)0;
                result[5] += (float)0.0003361344537815126;
                result[6] += (float)0;
              }
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)118) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.9333333333333333;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.06666666666666667;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)113) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.02631578947368421;
                result[3] += (float)0;
                result[4] += (float)0.9210526315789473;
                result[5] += (float)0.05263157894736842;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6.5) ) ) {
                result[0] += (float)0.9998279421885754;
                result[1] += (float)0;
                result[2] += (float)0.00017205781142463867;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9989373007438895;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.0010626992561105207;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
                result[0] += (float)0.998276604911676;
                result[1] += (float)0;
                result[2] += (float)0.0008616975441619991;
                result[3] += (float)0.00043084877208099956;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00043084877208099956;
              } else {
                result[0] += (float)0.989010989010989;
                result[1] += (float)0;
                result[2] += (float)0.01098901098901099;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)61) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.7916666666666666;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.20833333333333334;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)195.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)103) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)0.21739130434782608;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.782608695652174;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.05405405405405406;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9459459459459459;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
                result[0] += (float)0.9862385321100917;
                result[1] += (float)0;
                result[2] += (float)0.0061162079510703364;
                result[3] += (float)0.00764525993883792;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.868421052631579;
                result[1] += (float)0;
                result[2] += (float)0.05263157894736842;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.07894736842105263;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
                result[0] += (float)0.9726775956284153;
                result[1] += (float)0;
                result[2] += (float)0.00546448087431694;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.02185792349726776;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
                result[0] += (float)0.9969135802469136;
                result[1] += (float)0;
                result[2] += (float)0.0030864197530864196;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0.9996835443037975;
                result[1] += (float)0;
                result[2] += (float)0.00031645569620253165;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1) ) ) {
                result[0] += (float)0.9354838709677419;
                result[1] += (float)0;
                result[2] += (float)0.06451612903225806;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
                result[0] += (float)0.9829642248722318;
                result[1] += (float)0.008517887563884158;
                result[2] += (float)0.007666098807495742;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0008517887563884158;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0013404825737265416;
                result[3] += (float)0.9986595174262735;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
                result[0] += (float)0.7697368421052632;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.23026315789473684;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)0.9678012879484821;
                result[1] += (float)0;
                result[2] += (float)0.00827966881324747;
                result[3] += (float)0.023612388837779823;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00030665440049064706;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
                result[0] += (float)0.09313725490196079;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9068627450980392;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.379746835443038;
                result[1] += (float)0.04430379746835443;
                result[2] += (float)0;
                result[3] += (float)0.5759493670886076;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-21) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.5;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.5;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9996300406955235;
                result[4] += (float)0;
                result[5] += (float)0.0003699593044765076;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9882005899705014;
                result[4] += (float)0;
                result[5] += (float)0.011799410029498525;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)52) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)926.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)212) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)122.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)255) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9926108374384236;
                result[1] += (float)0;
                result[2] += (float)0.007389162561576354;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9852398523985241;
                result[1] += (float)0;
                result[2] += (float)0.011070110701107012;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.003690036900369004;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9984544049459042;
                result[1] += (float)0;
                result[2] += (float)0.0015455950540958269;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)13) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.8571428571428571;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.14285714285714285;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)74.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
                result[0] += (float)0.2037037037037037;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.7962962962962963;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9787007454739084;
                result[1] += (float)0;
                result[2] += (float)0.007454739084132056;
                result[3] += (float)0.013844515441959531;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
                result[0] += (float)0.020066889632107024;
                result[1] += (float)0;
                result[2] += (float)0.006688963210702341;
                result[3] += (float)0.9732441471571907;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9873417721518988;
                result[1] += (float)0;
                result[2] += (float)0.012658227848101266;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.056818181818181816;
                result[3] += (float)0.9431818181818182;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.002797202797202797;
                result[3] += (float)0.9972027972027973;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-66.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
                result[0] += (float)0.9925093632958801;
                result[1] += (float)0;
                result[2] += (float)0.005826050769870994;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0016645859342488557;
              } else {
                result[0] += (float)0.9331983805668016;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.06680161943319839;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
                result[0] += (float)0.7906976744186046;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.20930232558139536;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
                result[0] += (float)0.9944728761514842;
                result[1] += (float)0.001842374616171955;
                result[2] += (float)0.0026612077789150462;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0010235414534288639;
              } else {
                result[0] += (float)0.9361702127659575;
                result[1] += (float)0;
                result[2] += (float)0.06382978723404255;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0.9326923076923077;
                result[1] += (float)0;
                result[2] += (float)0.0673076923076923;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.5;
                result[3] += (float)0.5;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.01282051282051282;
                result[3] += (float)0.9871794871794872;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)10.5) ) ) {
                result[0] += (float)0.8181818181818182;
                result[1] += (float)0;
                result[2] += (float)0.18181818181818182;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
                result[0] += (float)0.9964526427811281;
                result[1] += (float)0;
                result[2] += (float)0.0035473572188719402;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.989501312335958;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.010498687664041995;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)23) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.045454545454545456;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9545454545454546;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)116.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)59) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)51) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.009790209790209791;
                result[2] += (float)0;
                result[3] += (float)0.9902097902097902;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9759036144578314;
                result[1] += (float)0.024096385542168676;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)70) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.08391608391608392;
                result[3] += (float)0.916083916083916;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.0045045045045045045;
                result[3] += (float)0.9954954954954955;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9775784753363229;
                result[1] += (float)0;
                result[2] += (float)0.02242152466367713;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9958211450062683;
                result[1] += (float)0;
                result[2] += (float)0.003343083994985374;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0008357709987463436;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9995297805642633;
                result[1] += (float)0;
                result[2] += (float)0.0004702194357366771;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0.1111111111111111;
                result[1] += (float)0.8888888888888888;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9947594092424965;
                result[1] += (float)0;
                result[2] += (float)0.002858504049547404;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00238208670795617;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.3157894736842105;
                result[2] += (float)0;
                result[3] += (float)0.6842105263157895;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9903147699757869;
                result[4] += (float)0.002421307506053269;
                result[5] += (float)0.007263922518159807;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
                result[0] += (float)0.4866962305986696;
                result[1] += (float)0;
                result[2] += (float)0.0005543237250554324;
                result[3] += (float)0.5127494456762749;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.061068702290076333;
                result[3] += (float)0.42366412213740456;
                result[4] += (float)0.5152671755725191;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
                result[0] += (float)0.36363636363636365;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.6363636363636364;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9597701149425287;
                result[4] += (float)0.011494252873563218;
                result[5] += (float)0.028735632183908046;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.004301075268817204;
                result[2] += (float)0;
                result[3] += (float)0.9956989247311828;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.05791505791505792;
                result[3] += (float)0.9420849420849421;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.8666666666666667;
                result[5] += (float)0.13333333333333333;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-61) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)53) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2) ) ) {
                result[0] += (float)0.890625;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.109375;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.6306818181818182;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.3693181818181818;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
                result[0] += (float)0.9706362153344209;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.02936378466557912;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)311.5) ) ) {
                result[0] += (float)0.9901020723785957;
                result[1] += (float)0;
                result[2] += (float)0.0049489638107021346;
                result[3] += (float)0.0027837921435199505;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0021651716671821837;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-3.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9230769230769231;
                result[1] += (float)0;
                result[2] += (float)0.07692307692307693;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1) ) ) {
                result[0] += (float)0.75;
                result[1] += (float)0;
                result[2] += (float)0.25;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9583333333333334;
                result[1] += (float)0;
                result[2] += (float)0.020833333333333332;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.020833333333333332;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
                result[0] += (float)0.98;
                result[1] += (float)0;
                result[2] += (float)0.02;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)25.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)49.5) ) ) {
                result[0] += (float)0.910846953937593;
                result[1] += (float)0.011887072808320952;
                result[2] += (float)0;
                result[3] += (float)0.07280832095096584;
                result[4] += (float)0;
                result[5] += (float)0.002971768202080238;
                result[6] += (float)0.001485884101040119;
              } else {
                result[0] += (float)0.9806635071090047;
                result[1] += (float)0;
                result[2] += (float)0.005308056872037914;
                result[3] += (float)0.012701421800947868;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0013270142180094786;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9978991596638656;
                result[4] += (float)0;
                result[5] += (float)0.0021008403361344537;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
                result[0] += (float)0.19702361695244258;
                result[1] += (float)0.003235198964736331;
                result[2] += (float)0.003235198964736331;
                result[3] += (float)0.7955354254286638;
                result[4] += (float)0.0009705596894208993;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.04411764705882353;
                result[3] += (float)0.9558823529411765;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.1016949152542373;
                result[3] += (float)0.536723163841808;
                result[4] += (float)0.3502824858757062;
                result[5] += (float)0.011299435028248588;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)41.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)183) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-144) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)29.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)20) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)23) ) ) {
                result[0] += (float)0.08695652173913043;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9130434782608695;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
                result[0] += (float)0.18421052631578946;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8157894736842105;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.42727272727272725;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.5727272727272728;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0.2737752161383285;
                result[1] += (float)0.012968299711815562;
                result[2] += (float)0;
                result[3] += (float)0.7132564841498559;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)70) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                result[0] += (float)0.014492753623188406;
                result[1] += (float)0;
                result[2] += (float)0.08695652173913043;
                result[3] += (float)0.8985507246376812;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)252) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9767932489451476;
                result[1] += (float)0;
                result[2] += (float)0.023206751054852322;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
                result[0] += (float)0.9980662983425415;
                result[1] += (float)0;
                result[2] += (float)0.0019337016574585636;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9736842105263158;
                result[1] += (float)0;
                result[2] += (float)0.02631578947368421;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)30.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)58) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.992;
                result[4] += (float)0.008;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
                result[0] += (float)0.994750656167979;
                result[1] += (float)0;
                result[2] += (float)0.005249343832020997;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)19.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.055944055944055944;
                result[3] += (float)0;
                result[4] += (float)0.9440559440559441;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.010011123470522803;
                result[3] += (float)0.9899888765294772;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
                result[0] += (float)0.998730964467005;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0012690355329949238;
              } else {
                result[0] += (float)0.9913644214162349;
                result[1] += (float)0;
                result[2] += (float)0.0069084628670120895;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0017271157167530224;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)0.002554278416347382;
                result[1] += (float)0.01532567049808429;
                result[2] += (float)0;
                result[3] += (float)0.9693486590038314;
                result[4] += (float)0.006385696040868455;
                result[5] += (float)0.006385696040868455;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9828541281983646;
                result[1] += (float)0;
                result[2] += (float)0.006858348720654181;
                result[3] += (float)0.007649696649960433;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.002637826431020839;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.125;
                result[3] += (float)0.875;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
                result[0] += (float)0.9137931034482759;
                result[1] += (float)0;
                result[2] += (float)0.08620689655172414;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
                result[0] += (float)0.9995410738871042;
                result[1] += (float)0;
                result[2] += (float)0.0004589261128958238;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9952718676122931;
                result[1] += (float)0;
                result[2] += (float)0.004137115839243499;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.000591016548463357;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
                result[0] += (float)0.002443280977312391;
                result[1] += (float)0.0017452006980802793;
                result[2] += (float)0.008027923211169284;
                result[3] += (float)0.987783595113438;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.035196687370600416;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9565217391304348;
                result[4] += (float)0;
                result[5] += (float)0.008281573498964804;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)0.25416666666666665;
                result[1] += (float)0.025;
                result[2] += (float)0;
                result[3] += (float)0.7208333333333333;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0.009174311926605505;
                result[2] += (float)0;
                result[3] += (float)0.9885321100917431;
                result[4] += (float)0;
                result[5] += (float)0.0022935779816513763;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-115) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)9) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)1;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                result[0] += (float)0.9876160990712074;
                result[1] += (float)0;
                result[2] += (float)0.009287925696594427;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0030959752321981426;
              } else {
                result[0] += (float)0.9980842911877394;
                result[1] += (float)0;
                result[2] += (float)0.0015325670498084292;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0003831417624521073;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)32) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)47) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
                result[0] += (float)0.8181818181818182;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.18181818181818182;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-66.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)50) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
                result[0] += (float)0.978984238178634;
                result[1] += (float)0;
                result[2] += (float)0.0148861646234676;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.006129597197898424;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1486) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-174) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)1;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.0058309037900874635;
                result[2] += (float)0;
                result[3] += (float)0.9941690962099126;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)5.5) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9955257270693513;
                result[4] += (float)0.0022371364653243847;
                result[5] += (float)0.0022371364653243847;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0.3333333333333333;
              result[4] += (float)0;
              result[5] += (float)0.6666666666666666;
              result[6] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-26) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.4;
                result[3] += (float)0;
                result[4] += (float)0.6;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                result[0] += (float)0.9974204643164231;
                result[1] += (float)0;
                result[2] += (float)0.0017196904557179708;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0008598452278589854;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
                result[0] += (float)0.9869536855838227;
                result[1] += (float)0.001956947162426615;
                result[2] += (float)0.004566210045662101;
                result[3] += (float)0.0065231572080887154;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9990913221263062;
                result[1] += (float)0;
                result[2] += (float)0.00045433893684688776;
                result[3] += (float)0.00045433893684688776;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9970717423133236;
                result[1] += (float)0;
                result[2] += (float)0.0029282576866764276;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-13.5) ) ) {
                result[0] += (float)0.7758620689655172;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.22413793103448276;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9212253829321663;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.0787746170678337;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)55) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78) ) ) {
                result[0] += (float)0.68;
                result[1] += (float)0.28;
                result[2] += (float)0;
                result[3] += (float)0.04;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.008;
                result[3] += (float)0.9866666666666667;
                result[4] += (float)0;
                result[5] += (float)0.005333333333333333;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
                result[0] += (float)0.9956331877729259;
                result[1] += (float)0;
                result[2] += (float)0.0021834061135371182;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0021834061135371182;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.022598870056497175;
                result[3] += (float)0.9774011299435028;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)0.9828715365239294;
                result[1] += (float)0;
                result[2] += (float)0.00654911838790932;
                result[3] += (float)0.009571788413098237;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0010075566750629723;
              } else {
                result[0] += (float)0.12749003984063745;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8725099601593626;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
                result[0] += (float)0.9983660130718954;
                result[1] += (float)0;
                result[2] += (float)0.0016339869281045752;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
                result[0] += (float)0.18691588785046728;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8130841121495327;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9907683144729006;
                result[1] += (float)0;
                result[2] += (float)0.005062537224538415;
                result[3] += (float)0.0014889815366289458;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0026801667659321023;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)17.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0.5;
                result[5] += (float)0.5;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)1;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)1;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)96) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-115) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)183) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)1;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)50.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                result[0] += (float)0.9754098360655737;
                result[1] += (float)0;
                result[2] += (float)0.00819672131147541;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.01639344262295082;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)28.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.25;
                result[2] += (float)0;
                result[3] += (float)0.75;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9984927147881427;
                result[1] += (float)0.00016747613465081226;
                result[2] += (float)0.0011723329425556857;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00016747613465081226;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
                result[0] += (float)0.9873015873015873;
                result[1] += (float)0.012698412698412698;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9983870967741936;
                result[1] += (float)0;
                result[2] += (float)0.0016129032258064516;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
                result[0] += (float)0.07692307692307693;
                result[1] += (float)0;
                result[2] += (float)0.09502262443438914;
                result[3] += (float)0.8280542986425339;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.974249580984306;
                result[1] += (float)0;
                result[2] += (float)0.0057900350449489576;
                result[3] += (float)0.01980801462745696;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.00015236934328813044;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)45.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
                result[0] += (float)0.3817733990147783;
                result[1] += (float)0;
                result[2] += (float)0.014778325123152709;
                result[3] += (float)0.603448275862069;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.14386792452830188;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.8561320754716981;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)4) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9422.5) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)1;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)50) ) ) {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0.9375;
                result[4] += (float)0;
                result[5] += (float)0.0625;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)117) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)1;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)1;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          result[0] += (float)0;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)1;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)32) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0.8333333333333334;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0.16666666666666666;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)1;
                result[6] += (float)0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
          result[2] += (float)0;
          result[3] += (float)0;
          result[4] += (float)0;
          result[5] += (float)0;
          result[6] += (float)0;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)2.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9774436090225563;
                result[1] += (float)0;
                result[2] += (float)0.022556390977443608;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.5;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.5;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9166666666666666;
                result[1] += (float)0;
                result[2] += (float)0.08333333333333333;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
            result[2] += (float)0;
            result[3] += (float)0;
            result[4] += (float)0;
            result[5] += (float)0;
            result[6] += (float)0;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9985974754558204;
                result[1] += (float)0;
                result[2] += (float)0.001402524544179523;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)14) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0.5;
                result[2] += (float)0.5;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0.9947403024326101;
                result[1] += (float)0;
                result[2] += (float)0.003287310979618672;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0019723865877712033;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)30.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)1;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)41) ) ) {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)0;
                result[3] += (float)1;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)0;
                result[2] += (float)1;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)1;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
              result[2] += (float)0;
              result[3] += (float)0;
              result[4] += (float)0;
              result[5] += (float)0;
              result[6] += (float)0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
                result[0] += (float)0.7872340425531915;
                result[1] += (float)0;
                result[2] += (float)0.1276595744680851;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.0851063829787234;
              } else {
                result[0] += (float)0.9798270893371758;
                result[1] += (float)0;
                result[2] += (float)0.01440922190201729;
                result[3] += (float)0;
                result[4] += (float)0;
                result[5] += (float)0;
                result[6] += (float)0.005763688760806916;
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
  result[6] /= 30;
  
  // Apply base_scores
  result[0] += (float)0;
  result[1] += (float)0;
  result[2] += (float)0;
  result[3] += (float)0;
  result[4] += (float)0;
  result[5] += (float)0;
  result[6] += (float)0;
  
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
    

    FILE* file = fopen("./codegen_small/dataset_148/split_0/test_data.csv", "r");
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
