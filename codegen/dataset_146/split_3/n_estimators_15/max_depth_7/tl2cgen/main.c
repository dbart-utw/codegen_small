
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
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)31.5) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
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
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9965034965034965;
                result[5] += 0.0034965034965034965;
              } else {
                result[0] += 0.038461538461538464;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6538461538461539;
                result[5] += 0.3076923076923077;
              }
            }
          } else {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0.8;
              } else {
                result[0] += 0.07142857142857142;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9285714285714286;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)79.5) ) ) {
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
                result[4] += 0.6;
                result[5] += 0.2;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)47.5) ) ) {
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
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)64) ) ) {
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
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)109.5) ) ) {
            if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)88) ) ) {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)111.5) ) ) {
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
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)102.5) ) ) {
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
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)63.5) ) ) {
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
                result[3] += 0.020114942528735632;
                result[4] += 0.014367816091954023;
                result[5] += 0.9655172413793104;
              }
            } else {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.15053763440860216;
                result[4] += 0.12903225806451613;
                result[5] += 0.7204301075268817;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8888888888888888;
                result[4] += 0;
                result[5] += 0.1111111111111111;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)92) ) ) {
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
            if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0.01639344262295082;
                result[2] += 0;
                result[3] += 0.01639344262295082;
                result[4] += 0.18032786885245902;
                result[5] += 0.7868852459016393;
              } else {
                result[0] += 0;
                result[1] += 0.04929577464788732;
                result[2] += 0;
                result[3] += 0.352112676056338;
                result[4] += 0.007042253521126761;
                result[5] += 0.5915492957746479;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8;
                result[4] += 0.007692307692307693;
                result[5] += 0.19230769230769232;
              } else {
                result[0] += 0;
                result[1] += 0.23333333333333334;
                result[2] += 0.1;
                result[3] += 0.06666666666666667;
                result[4] += 0.06666666666666667;
                result[5] += 0.5333333333333333;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)119) ) ) {
                result[0] += 0.033707865168539325;
                result[1] += 0.011235955056179775;
                result[2] += 0.07865168539325842;
                result[3] += 0.3258426966292135;
                result[4] += 0.19101123595505617;
                result[5] += 0.3595505617977528;
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
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.10204081632653061;
                result[1] += 0.1836734693877551;
                result[2] += 0;
                result[3] += 0.04081632653061224;
                result[4] += 0.6326530612244898;
                result[5] += 0.04081632653061224;
              }
            } else {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)83) ) ) {
                result[0] += 0.9419862340216324;
                result[1] += 0.0019665683382497547;
                result[2] += 0.0039331366764995095;
                result[3] += 0.01081612586037365;
                result[4] += 0.03441494591937071;
                result[5] += 0.006882989183874141;
              } else {
                result[0] += 0.27272727272727276;
                result[1] += 0.04545454545454546;
                result[2] += 0.5454545454545455;
                result[3] += 0.04545454545454546;
                result[4] += 0;
                result[5] += 0.09090909090909093;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.016666666666666666;
                result[3] += 0.03333333333333333;
                result[4] += 0.16666666666666666;
                result[5] += 0.7833333333333333;
              } else {
                result[0] += 0.023529411764705882;
                result[1] += 0;
                result[2] += 0.023529411764705882;
                result[3] += 0.4588235294117647;
                result[4] += 0.10588235294117647;
                result[5] += 0.38823529411764707;
              }
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)100.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0.023809523809523808;
                result[3] += 0.023809523809523808;
                result[4] += 0.5;
                result[5] += 0.11904761904761904;
              } else {
                result[0] += 0.921875;
                result[1] += 0;
                result[2] += 0.046875;
                result[3] += 0.03125;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.16030534351145037;
                result[3] += 0.6183206106870229;
                result[4] += 0.015267175572519083;
                result[5] += 0.20610687022900764;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4090909090909091;
                result[3] += 0.45454545454545453;
                result[4] += 0;
                result[5] += 0.13636363636363635;
              } else {
                result[0] += 0.06493506493506493;
                result[1] += 0;
                result[2] += 0.8831168831168831;
                result[3] += 0.012987012987012988;
                result[4] += 0;
                result[5] += 0.03896103896103896;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
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
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0.8333333333333334;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0196078431372549;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.9803921568627451;
              }
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)87) ) ) {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)72) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)106.5) ) ) {
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
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)83) ) ) {
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
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)108.5) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
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
            if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)84.5) ) ) {
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
        if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)101.5) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0.3333333333333333;
                result[2] += 0.3333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1;
                result[3] += 0.9;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)88.5) ) ) {
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
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)89) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.4;
                result[4] += 0;
                result[5] += 0.4;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8582089552238806;
                result[3] += 0.1044776119402985;
                result[4] += 0;
                result[5] += 0.03731343283582089;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
                result[0] += 0.05263157894736842;
                result[1] += 0;
                result[2] += 0.47368421052631576;
                result[3] += 0.47368421052631576;
                result[4] += 0;
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
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)85) ) ) {
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
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)84.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)89.5) ) ) {
                result[0] += 0.004807692307692308;
                result[1] += 0;
                result[2] += 0.9254807692307693;
                result[3] += 0.0673076923076923;
                result[4] += 0;
                result[5] += 0.002403846153846154;
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
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)45) ) ) {
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
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
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
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
                result[0] += 0.058823529411764705;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7647058823529411;
                result[5] += 0.17647058823529413;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.08333333333333333;
                result[5] += 0.9166666666666666;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61) ) ) {
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
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)44) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)51) ) ) {
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
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
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
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.9917355371900827;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.008264462809917356;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)62.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)51) ) ) {
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
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.018456375838926176;
                result[4] += 0.006711409395973154;
                result[5] += 0.9748322147651006;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.38095238095238093;
                result[4] += 0;
                result[5] += 0.6190476190476191;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0.007692307692307693;
                result[2] += 0;
                result[3] += 0.06153846153846154;
                result[4] += 0.09230769230769231;
                result[5] += 0.8384615384615385;
              } else {
                result[0] += 0;
                result[1] += 0.028037383177570093;
                result[2] += 0;
                result[3] += 0.32710280373831774;
                result[4] += 0.018691588785046728;
                result[5] += 0.6261682242990654;
              }
            } else {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)67) ) ) {
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
                result[3] += 0.9583333333333334;
                result[4] += 0;
                result[5] += 0.041666666666666664;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)69) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7872340425531915;
                result[5] += 0.2127659574468085;
              } else {
                result[0] += 0.45;
                result[1] += 0.3;
                result[2] += 0;
                result[3] += 0.2;
                result[4] += 0.05;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0.8571428571428571;
              } else {
                result[0] += 0.045454545454545456;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.38636363636363635;
                result[4] += 0.20454545454545456;
                result[5] += 0.36363636363636365;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)55.5) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)82.5) ) ) {
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
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)80) ) ) {
            if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)56.5) ) ) {
                result[0] += 0;
                result[1] += 0.18181818181818182;
                result[2] += 0;
                result[3] += 0.8181818181818182;
                result[4] += 0;
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
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)79) ) ) {
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
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)64.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0.6666666666666666;
                result[2] += 0;
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
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
                result[0] += 0.07407407407407407;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0.1111111111111111;
                result[5] += 0.48148148148148145;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9183673469387755;
                result[4] += 0;
                result[5] += 0.08163265306122448;
              }
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)61) ) ) {
                result[0] += 0;
                result[1] += 0.46153846153846156;
                result[2] += 0;
                result[3] += 0.07692307692307693;
                result[4] += 0.46153846153846156;
                result[5] += 0;
              } else {
                result[0] += 0.07575757575757576;
                result[1] += 0;
                result[2] += 0.10606060606060606;
                result[3] += 0.17424242424242425;
                result[4] += 0.06060606060606061;
                result[5] += 0.5833333333333334;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)112) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
                result[0] += 0.9351851851851852;
                result[1] += 0.0051440329218107;
                result[2] += 0;
                result[3] += 0.00823045267489712;
                result[4] += 0.04835390946502058;
                result[5] += 0.0030864197530864196;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7;
                result[3] += 0;
                result[4] += 0.3;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
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
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0.07692307692307693;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3076923076923077;
                result[5] += 0.6153846153846154;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8;
                result[4] += 0;
                result[5] += 0.2;
              }
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)97) ) ) {
                result[0] += 0.03225806451612904;
                result[1] += 0.19354838709677422;
                result[2] += 0.16129032258064518;
                result[3] += 0.19354838709677422;
                result[4] += 0.38709677419354843;
                result[5] += 0.03225806451612904;
              } else {
                result[0] += 0.21052631578947367;
                result[1] += 0;
                result[2] += 0.6578947368421053;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.13157894736842105;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
        if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)64) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)90) ) ) {
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
            if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
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
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0.25;
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
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)86) ) ) {
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
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
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
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)92.5) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)69) ) ) {
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
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0.1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1;
                result[5] += 0.8;
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
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
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
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)83) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9058823529411765;
                result[4] += 0.011764705882352941;
                result[5] += 0.08235294117647059;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
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
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7575757575757576;
                result[3] += 0.18181818181818182;
                result[4] += 0;
                result[5] += 0.06060606060606061;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
        if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
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
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)102) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
                result[0] += 0.9795918367346939;
                result[1] += 0;
                result[2] += 0.02040816326530612;
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
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)111.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.5555555555555556;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.2222222222222222;
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
        if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2058823529411765;
                result[3] += 0.6911764705882354;
                result[4] += 0;
                result[5] += 0.10294117647058824;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5333333333333333;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.4666666666666667;
              }
            } else {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)70) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7866666666666667;
                result[3] += 0.1866666666666667;
                result[4] += 0;
                result[5] += 0.026666666666666672;
              }
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)75) ) ) {
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
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9053497942386831;
                result[3] += 0.09053497942386832;
                result[4] += 0;
                result[5] += 0.00411522633744856;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)72.5) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)104.5) ) ) {
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
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.924;
                result[3] += 0.076;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.3;
                result[1] += 0;
                result[2] += 0.7;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.918918918918919;
                result[3] += 0.08108108108108109;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.005917159763313609;
                result[1] += 0;
                result[2] += 0.9940828402366864;
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
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)89) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)73.5) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)92) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 0.005555555555555557;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9833333333333334;
                result[5] += 0.011111111111111113;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7777777777777778;
                result[5] += 0.2222222222222222;
              }
            } else {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
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
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
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
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)50.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
                result[0] += 0;
                result[1] += 0.08333333333333333;
                result[2] += 0;
                result[3] += 0.1111111111111111;
                result[4] += 0.5;
                result[5] += 0.3055555555555556;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.044296788482835;
                result[4] += 0.03765227021040975;
                result[5] += 0.9180509413067552;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08333333333333333;
                result[4] += 0.9166666666666666;
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
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)60) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.009615384615384616;
                result[2] += 0.009615384615384616;
                result[3] += 0.27884615384615385;
                result[4] += 0.009615384615384616;
                result[5] += 0.6923076923076923;
              }
            }
          } else {
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8;
                result[4] += 0.2;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.058823529411764705;
                result[3] += 0.058823529411764705;
                result[4] += 0;
                result[5] += 0.8823529411764706;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5217391304347826;
                result[4] += 0.08695652173913043;
                result[5] += 0.391304347826087;
              } else {
                result[0] += 0.0078125;
                result[1] += 0;
                result[2] += 0.0390625;
                result[3] += 0.921875;
                result[4] += 0;
                result[5] += 0.03125;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)35.5) ) ) {
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
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)54.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)77.5) ) ) {
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
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
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
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
                result[0] += 0;
                result[1] += 0.7619047619047619;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.23809523809523808;
                result[5] += 0;
              } else {
                result[0] += 0.11;
                result[1] += 0.06;
                result[2] += 0;
                result[3] += 0.02;
                result[4] += 0.78;
                result[5] += 0.03;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0.5238095238095238;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.47619047619047616;
                result[5] += 0;
              } else {
                result[0] += 0.9372623574144486;
                result[1] += 0;
                result[2] += 0.0009505703422053232;
                result[3] += 0.011406844106463879;
                result[4] += 0.03612167300380228;
                result[5] += 0.014258555133079848;
              }
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)92) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.17073170731707318;
                result[4] += 0.0975609756097561;
                result[5] += 0.7317073170731707;
              } else {
                result[0] += 0.38596491228070184;
                result[1] += 0.15789473684210528;
                result[2] += 0;
                result[3] += 0.10526315789473686;
                result[4] += 0.29824561403508776;
                result[5] += 0.05263157894736843;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.030927835051546393;
                result[3] += 0.27835051546391754;
                result[4] += 0.020618556701030927;
                result[5] += 0.6701030927835051;
              } else {
                result[0] += 0.026785714285714284;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0.6160714285714286;
                result[4] += 0.008928571428571428;
                result[5] += 0.22321428571428573;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
                result[0] += 0.029411764705882353;
                result[1] += 0;
                result[2] += 0.4117647058823529;
                result[3] += 0.5;
                result[4] += 0.029411764705882353;
                result[5] += 0.029411764705882353;
              } else {
                result[0] += 0.056179775280898875;
                result[1] += 0;
                result[2] += 0.7640449438202247;
                result[3] += 0.14606741573033707;
                result[4] += 0;
                result[5] += 0.033707865168539325;
              }
            }
          } else {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
                result[0] += 0.45;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0.3;
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
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)92) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)89) ) ) {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)69) ) ) {
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
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
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.08333333333333333;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.5833333333333334;
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
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)66) ) ) {
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
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
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
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)109.5) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)93.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)107.5) ) ) {
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
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.375;
                result[3] += 0.3125;
                result[4] += 0;
                result[5] += 0.3125;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7653061224489796;
                result[3] += 0.23469387755102042;
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
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)72) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)93) ) ) {
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
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)68.5) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)114) ) ) {
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
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)107.5) ) ) {
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
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.5;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
            if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)98) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8823529411764706;
                result[3] += 0.11764705882352941;
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
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)105) ) ) {
                result[0] += 0.017241379310344827;
                result[1] += 0;
                result[2] += 0.9137931034482759;
                result[3] += 0.06896551724137931;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.045454545454545456;
                result[1] += 0;
                result[2] += 0.6363636363636364;
                result[3] += 0.3181818181818182;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)101) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)70) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9576271186440678;
                result[3] += 0.0423728813559322;
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
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)93.5) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)95) ) ) {
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
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
            if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)123.5) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9178082191780822;
                result[3] += 0.0821917808219178;
                result[4] += 0;
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
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)96) ) ) {
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
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)74) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9545454545454546;
                result[3] += 0.045454545454545456;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9972375690607734;
                result[3] += 0.0027624309392265192;
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
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)69.5) ) ) {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)76) ) ) {
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
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)69) ) ) {
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
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)76) ) ) {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)50) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)66) ) ) {
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
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)52.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
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
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)64.5) ) ) {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)101.5) ) ) {
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
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
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)87) ) ) {
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
      if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)92) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)67.5) ) ) {
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
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)57.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)49.5) ) ) {
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
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)76) ) ) {
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
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.01391304347826087;
                result[4] += 0.010434782608695653;
                result[5] += 0.9756521739130435;
              } else {
                result[0] += 0.006060606060606061;
                result[1] += 0.012121212121212121;
                result[2] += 0;
                result[3] += 0.12727272727272726;
                result[4] += 0.06060606060606061;
                result[5] += 0.793939393939394;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08333333333333333;
                result[4] += 0.25;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0.05;
                result[3] += 0.55;
                result[4] += 0;
                result[5] += 0.15;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)76) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)85) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)67) ) ) {
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
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)95) ) ) {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)75) ) ) {
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
                result[3] += 0.02;
                result[4] += 0;
                result[5] += 0.98;
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
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)70) ) ) {
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
                result[3] += 0.2702702702702703;
                result[4] += 0;
                result[5] += 0.7297297297297297;
              }
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
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
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)90) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.013888888888888888;
                result[3] += 0.25;
                result[4] += 0.027777777777777776;
                result[5] += 0.7083333333333334;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7142857142857143;
                result[4] += 0;
                result[5] += 0.2857142857142857;
              }
            } else {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)72.5) ) ) {
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
    }
  } else {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)39.5) ) ) {
            if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)51) ) ) {
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
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)103.5) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0.02;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.98;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.3333333333333333;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)44.5) ) ) {
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
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)89) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)53.5) ) ) {
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
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)81) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)50.5) ) ) {
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
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.12121212121212122;
                result[4] += 0.6666666666666666;
                result[5] += 0.21212121212121213;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.058823529411764705;
                result[3] += 0;
                result[4] += 0.058823529411764705;
                result[5] += 0.8823529411764706;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0;
                result[4] += 0.8888888888888888;
                result[5] += 0;
              } else {
                result[0] += 0.014084507042253521;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5915492957746479;
                result[4] += 0.07042253521126761;
                result[5] += 0.323943661971831;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)71.5) ) ) {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
                result[0] += 0.7906976744186046;
                result[1] += 0.11627906976744186;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.09302325581395349;
                result[5] += 0;
              } else {
                result[0] += 0.0967741935483871;
                result[1] += 0.14516129032258066;
                result[2] += 0.016129032258064516;
                result[3] += 0.016129032258064516;
                result[4] += 0.7258064516129032;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
                result[0] += 0.9454722492697176;
                result[1] += 0.010710808179162609;
                result[2] += 0;
                result[3] += 0.004868549172346641;
                result[4] += 0.0379746835443038;
                result[5] += 0.0009737098344693282;
              } else {
                result[0] += 0.5346534653465347;
                result[1] += 0;
                result[2] += 0.06930693069306931;
                result[3] += 0.13861386138613863;
                result[4] += 0.10891089108910891;
                result[5] += 0.1485148514851485;
              }
            }
          } else {
            if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)112.5) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)75) ) ) {
                result[0] += 0;
                result[1] += 0.4;
                result[2] += 0;
                result[3] += 0.06666666666666667;
                result[4] += 0.4666666666666667;
                result[5] += 0.06666666666666667;
              } else {
                result[0] += 0.11764705882352941;
                result[1] += 0.029411764705882353;
                result[2] += 0.39705882352941174;
                result[3] += 0.22058823529411764;
                result[4] += 0;
                result[5] += 0.23529411764705882;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)59) ) ) {
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
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)67.5) ) ) {
                result[0] += 0;
                result[1] += 0.07142857142857142;
                result[2] += 0.07142857142857142;
                result[3] += 0.2857142857142857;
                result[4] += 0.35714285714285715;
                result[5] += 0.21428571428571427;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.016129032258064516;
                result[3] += 0.06451612903225806;
                result[4] += 0.04838709677419355;
                result[5] += 0.8709677419354839;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.08695652173913043;
                result[3] += 0;
                result[4] += 0.2608695652173913;
                result[5] += 0.6521739130434783;
              } else {
                result[0] += 0;
                result[1] += 0.01639344262295082;
                result[2] += 0.13934426229508196;
                result[3] += 0.6967213114754098;
                result[4] += 0;
                result[5] += 0.14754098360655737;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)117) ) ) {
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
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)93.5) ) ) {
            if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)104.5) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)92.5) ) ) {
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
                result[3] += 0.2;
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
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)85) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9;
                result[3] += 0.05;
                result[4] += 0;
                result[5] += 0.05;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6470588235294118;
                result[3] += 0.35294117647058826;
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
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)109.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
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
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)93) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
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
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)84.5) ) ) {
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
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)85) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)103.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7916666666666667;
                result[3] += 0.19642857142857145;
                result[4] += 0;
                result[5] += 0.011904761904761906;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5384615384615384;
                result[3] += 0.46153846153846156;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
                result[0] += 0.019867549668874173;
                result[1] += 0;
                result[2] += 0.8079470198675497;
                result[3] += 0.15894039735099338;
                result[4] += 0.013245033112582781;
                result[5] += 0;
              } else {
                result[0] += 0.01020408163265306;
                result[1] += 0;
                result[2] += 0.9744897959183674;
                result[3] += 0.01020408163265306;
                result[4] += 0;
                result[5] += 0.00510204081632653;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)47.5) ) ) {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)46.5) ) ) {
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
            if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)80) ) ) {
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
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)98) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)77.5) ) ) {
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
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)58.5) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)55) ) ) {
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
                result[4] += 0.2222222222222222;
                result[5] += 0.7777777777777778;
              }
            } else {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)94.5) ) ) {
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
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)57.5) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)60) ) ) {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)68.5) ) ) {
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
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)51.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5909090909090909;
                result[5] += 0.4090909090909091;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0036991368680641184;
                result[3] += 0.02836004932182491;
                result[4] += 0.018495684340320593;
                result[5] += 0.9494451294697904;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)61) ) ) {
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)62.5) ) ) {
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
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.04;
                result[4] += 0.84;
                result[5] += 0.12;
              } else {
                result[0] += 0.02553191489361702;
                result[1] += 0.00425531914893617;
                result[2] += 0.03829787234042553;
                result[3] += 0.26382978723404255;
                result[4] += 0.06382978723404255;
                result[5] += 0.6042553191489362;
              }
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.11627906976744186;
                result[2] += 0;
                result[3] += 0.27906976744186046;
                result[4] += 0.11627906976744186;
                result[5] += 0.4883720930232558;
              } else {
                result[0] += 0.03592814371257485;
                result[1] += 0;
                result[2] += 0.059880239520958084;
                result[3] += 0.7604790419161677;
                result[4] += 0.005988023952095809;
                result[5] += 0.1377245508982036;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)52) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)49.5) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)68) ) ) {
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
              result[4] += 1;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)50.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)79) ) ) {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.75;
                result[4] += 0;
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
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)52.5) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)41.5) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.030303030303030304;
                result[1] += 0.9696969696969697;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)99.5) ) ) {
                result[0] += 0.5294117647058824;
                result[1] += 0.058823529411764705;
                result[2] += 0.058823529411764705;
                result[3] += 0;
                result[4] += 0.35294117647058826;
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
          } else {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)82) ) ) {
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
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
                result[0] += 0.07317073170731707;
                result[1] += 0.2682926829268293;
                result[2] += 0;
                result[3] += 0.2682926829268293;
                result[4] += 0.0975609756097561;
                result[5] += 0.2926829268292683;
              } else {
                result[0] += 0.05714285714285714;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0.7714285714285715;
                result[5] += 0.02857142857142857;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)81.5) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.1;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.4;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
                result[0] += 0.13636363636363635;
                result[1] += 0.09090909090909091;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7727272727272727;
                result[5] += 0;
              } else {
                result[0] += 0.9588638589618022;
                result[1] += 0.0019588638589618022;
                result[2] += 0.0039177277179236044;
                result[3] += 0.004897159647404506;
                result[4] += 0.02644466209598433;
                result[5] += 0.0039177277179236044;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)89.5) ) ) {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2037037037037037;
                result[4] += 0.06481481481481481;
                result[5] += 0.7314814814814815;
              } else {
                result[0] += 0.05102040816326531;
                result[1] += 0.015306122448979591;
                result[2] += 0.3673469387755102;
                result[3] += 0.32653061224489793;
                result[4] += 0.030612244897959183;
                result[5] += 0.20918367346938777;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
                result[0] += 0.13636363636363635;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8636363636363636;
                result[5] += 0;
              } else {
                result[0] += 0.8767123287671232;
                result[1] += 0;
                result[2] += 0.0958904109589041;
                result[3] += 0;
                result[4] += 0.0136986301369863;
                result[5] += 0.0136986301369863;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)67) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)88.5) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
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
            if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)68.5) ) ) {
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
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
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
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7777777777777778;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.2222222222222222;
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
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.19230769230769232;
                result[3] += 0.7692307692307693;
                result[4] += 0;
                result[5] += 0.038461538461538464;
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
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)108.5) ) ) {
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)81.5) ) ) {
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
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
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
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
            if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)107) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6526315789473685;
                result[3] += 0.28421052631578947;
                result[4] += 0;
                result[5] += 0.06315789473684211;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.42857142857142855;
                result[3] += 0.5714285714285714;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.926829268292683;
                result[3] += 0.07317073170731707;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
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
            } else {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9361702127659575;
                result[3] += 0.06382978723404255;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)86) ) ) {
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
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.775;
                result[3] += 0.225;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9791666666666666;
                result[3] += 0.020833333333333332;
                result[4] += 0;
                result[5] += 0;
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
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9491525423728814;
                result[3] += 0.05084745762711865;
                result[4] += 0;
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
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
            if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)98) ) ) {
                result[0] += 0.0045871559633027525;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9770642201834863;
                result[5] += 0.01834862385321101;
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
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8888888888888888;
                result[5] += 0.1111111111111111;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)54.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)68.5) ) ) {
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
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.0014534883720930232;
                result[2] += 0;
                result[3] += 0.01308139534883721;
                result[4] += 0.007267441860465116;
                result[5] += 0.9781976744186046;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)78.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.30000000000000004;
                result[4] += 0.6000000000000001;
                result[5] += 0.10000000000000002;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.17647058823529413;
                result[4] += 0;
                result[5] += 0.8235294117647058;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)75.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)58) ) ) {
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
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0.02857142857142857;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7142857142857143;
                result[5] += 0.2571428571428571;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.15753424657534246;
                result[4] += 0.00684931506849315;
                result[5] += 0.8356164383561644;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
                result[0] += 0.024691358024691357;
                result[1] += 0;
                result[2] += 0.030864197530864196;
                result[3] += 0.25925925925925924;
                result[4] += 0.2037037037037037;
                result[5] += 0.48148148148148145;
              } else {
                result[0] += 0.006896551724137931;
                result[1] += 0.006896551724137931;
                result[2] += 0.06206896551724138;
                result[3] += 0.7655172413793103;
                result[4] += 0;
                result[5] += 0.15862068965517243;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)81) ) ) {
            if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)36) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.975;
                result[5] += 0.025;
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
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)52.5) ) ) {
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
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)63.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
                result[0] += 0.04;
                result[1] += 0.96;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.4;
                result[4] += 0.4;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)109.5) ) ) {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)66.5) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)52) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07894736842105263;
                result[4] += 0.868421052631579;
                result[5] += 0.05263157894736842;
              }
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)68.5) ) ) {
                result[0] += 0.03125;
                result[1] += 0.09375;
                result[2] += 0;
                result[3] += 0.09375;
                result[4] += 0.21875;
                result[5] += 0.5625;
              } else {
                result[0] += 0.8907563025210085;
                result[1] += 0.014705882352941176;
                result[2] += 0;
                result[3] += 0.018907563025210083;
                result[4] += 0.06722689075630252;
                result[5] += 0.008403361344537815;
              }
            }
          } else {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
                result[0] += 0.017094017094017096;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.21367521367521367;
                result[4] += 0.08547008547008547;
                result[5] += 0.6837606837606838;
              } else {
                result[0] += 0.006622516556291391;
                result[1] += 0.013245033112582781;
                result[2] += 0.11258278145695365;
                result[3] += 0.5298013245033113;
                result[4] += 0.0728476821192053;
                result[5] += 0.26490066225165565;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
                result[0] += 0.7272727272727273;
                result[1] += 0.09090909090909091;
                result[2] += 0.09090909090909091;
                result[3] += 0.01818181818181818;
                result[4] += 0.07272727272727272;
                result[5] += 0;
              } else {
                result[0] += 0.25;
                result[1] += 0.07352941176470588;
                result[2] += 0.4117647058823529;
                result[3] += 0.11764705882352941;
                result[4] += 0.014705882352941176;
                result[5] += 0.1323529411764706;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)113.5) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)52) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
                result[0] += 0.9602543720190779;
                result[1] += 0;
                result[2] += 0.0047694753577106515;
                result[3] += 0.003179650238473768;
                result[4] += 0.03179650238473768;
                result[5] += 0;
              } else {
                result[0] += 0.358974358974359;
                result[1] += 0;
                result[2] += 0.5128205128205128;
                result[3] += 0.05128205128205128;
                result[4] += 0.07692307692307693;
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
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
        if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
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
          } else {
            if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)114) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)111) ) ) {
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
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.05263157894736842;
                result[3] += 0.42105263157894735;
                result[4] += 0;
                result[5] += 0.5263157894736842;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.052631578947368425;
                result[3] += 0.8421052631578948;
                result[4] += 0;
                result[5] += 0.10526315789473685;
              }
            }
          } else {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.26666666666666666;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.23333333333333334;
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
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)76.5) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)94) ) ) {
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
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)95) ) ) {
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
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)83) ) ) {
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.375;
                result[3] += 0.625;
                result[4] += 0;
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
      if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)91) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)106.5) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6417910447761194;
                result[3] += 0.31343283582089554;
                result[4] += 0;
                result[5] += 0.04477611940298507;
              } else {
                result[0] += 0;
                result[1] += 0.014598540145985403;
                result[2] += 0.8613138686131387;
                result[3] += 0.08759124087591243;
                result[4] += 0;
                result[5] += 0.03649635036496351;
              }
            } else {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)110) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.578125;
                result[3] += 0.390625;
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
          } else {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)123.5) ) ) {
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
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)86) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)114.5) ) ) {
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
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)103.5) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9333333333333333;
                result[3] += 0.06666666666666667;
                result[4] += 0;
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
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.868421052631579;
                result[3] += 0.13157894736842105;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9807692307692307;
                result[3] += 0.019230769230769232;
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
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
                result[0] += 0.16666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)83.5) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
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
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)71.5) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)43) ) ) {
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
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)66) ) ) {
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
                result[3] += 0.9;
                result[4] += 0.1;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)60.5) ) ) {
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)56.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)68.5) ) ) {
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
                result[4] += 0;
                result[5] += 1;
              }
            }
          } else {
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
          }
        } else {
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5757575757575758;
                result[5] += 0.42424242424242425;
              } else {
                result[0] += 0.0013386880856760374;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.028112449799196786;
                result[4] += 0.01606425702811245;
                result[5] += 0.9544846050870147;
              }
            } else {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
                result[0] += 0;
                result[1] += 0.09302325581395349;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6511627906976745;
                result[5] += 0.2558139534883721;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0.05;
                result[5] += 0.7;
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.045454545454545456;
                result[3] += 0.022727272727272728;
                result[4] += 0.045454545454545456;
                result[5] += 0.8863636363636364;
              } else {
                result[0] += 0.033707865168539325;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4157303370786517;
                result[4] += 0.0449438202247191;
                result[5] += 0.5056179775280899;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.14705882352941177;
                result[4] += 0;
                result[5] += 0.8529411764705882;
              } else {
                result[0] += 0.005494505494505496;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7307692307692308;
                result[4] += 0.043956043956043966;
                result[5] += 0.2197802197802198;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)105.5) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)96) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)45.5) ) ) {
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
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)97) ) ) {
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
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)62) ) ) {
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
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)55) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)55) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)67.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
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
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)54) ) ) {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
                result[0] += 0.8863636363636364;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.11363636363636363;
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
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)105.5) ) ) {
                result[0] += 0.11666666666666667;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8833333333333333;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.6818181818181818;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3181818181818182;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)108) ) ) {
                result[0] += 0.9508700102354145;
                result[1] += 0.0020470829068577278;
                result[2] += 0;
                result[3] += 0.01023541453428864;
                result[4] += 0.03480040941658137;
                result[5] += 0.0020470829068577278;
              } else {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)103.5) ) ) {
                result[0] += 0.09433962264150944;
                result[1] += 0.018867924528301886;
                result[2] += 0.018867924528301886;
                result[3] += 0.2641509433962264;
                result[4] += 0.3584905660377358;
                result[5] += 0.24528301886792453;
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
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)61) ) ) {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)77.5) ) ) {
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
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.018518518518518517;
                result[3] += 0.09259259259259259;
                result[4] += 0.1111111111111111;
                result[5] += 0.7777777777777778;
              } else {
                result[0] += 0.005952380952380952;
                result[1] += 0;
                result[2] += 0.10119047619047619;
                result[3] += 0.49404761904761907;
                result[4] += 0.10714285714285714;
                result[5] += 0.2916666666666667;
              }
            }
          } else {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)113.5) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
                result[0] += 0.0625;
                result[1] += 0;
                result[2] += 0.78125;
                result[3] += 0.11458333333333333;
                result[4] += 0;
                result[5] += 0.041666666666666664;
              } else {
                result[0] += 0.42857142857142855;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5714285714285714;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)86) ) ) {
                result[0] += 0.16666666666666669;
                result[1] += 0;
                result[2] += 0.6666666666666667;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.16666666666666669;
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
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1111111111111111;
                result[4] += 0.2222222222222222;
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
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9722222222222222;
                result[4] += 0;
                result[5] += 0.027777777777777776;
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)71.5) ) ) {
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
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)112.5) ) ) {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0.5;
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
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
            if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)81.5) ) ) {
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
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)112.5) ) ) {
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
            } else {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0.14285714285714285;
                result[2] += 0.2857142857142857;
                result[3] += 0.5714285714285714;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8888888888888888;
                result[3] += 0.05555555555555555;
                result[4] += 0;
                result[5] += 0.05555555555555555;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)101) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
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
              if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.375;
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
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
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
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)97.5) ) ) {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7647058823529411;
                result[3] += 0.21176470588235294;
                result[4] += 0;
                result[5] += 0.023529411764705882;
              } else {
                result[0] += 0.022727272727272728;
                result[1] += 0;
                result[2] += 0.9772727272727273;
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
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)117) ) ) {
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
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)110) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8350515463917526;
                result[3] += 0.16494845360824742;
                result[4] += 0;
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
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8541666666666666;
                result[3] += 0.14583333333333334;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)101) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
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
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)113.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9707602339181286;
                result[3] += 0.029239766081871343;
                result[4] += 0;
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
  if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)94) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
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
                result[4] += 0.875;
                result[5] += 0.125;
              }
            } else {
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
                result[4] += 0.2;
                result[5] += 0.8;
              }
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)55) ) ) {
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
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)54.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)74.5) ) ) {
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
                result[4] += 0.9166666666666666;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
                result[0] += 0.2222222222222222;
                result[1] += 0.4444444444444444;
                result[2] += 0;
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
            }
          }
        }
      } else {
        if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)74.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
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
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)63.5) ) ) {
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
                result[4] += 0.84;
                result[5] += 0.16;
              }
            }
          } else {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.010327022375215147;
                result[4] += 0;
                result[5] += 0.9896729776247849;
              } else {
                result[0] += 0;
                result[1] += 0.006289308176100629;
                result[2] += 0;
                result[3] += 0.05660377358490566;
                result[4] += 0.05660377358490566;
                result[5] += 0.8805031446540881;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)80) ) ) {
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
                result[3] += 0.4339622641509434;
                result[4] += 0.018867924528301886;
                result[5] += 0.5471698113207547;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
            if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0.013245033112582781;
                result[2] += 0.006622516556291391;
                result[3] += 0.1986754966887417;
                result[4] += 0.019867549668874173;
                result[5] += 0.7615894039735099;
              } else {
                result[0] += 0;
                result[1] += 0.08333333333333333;
                result[2] += 0.8333333333333334;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.08333333333333333;
              }
            } else {
              if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.14583333333333334;
                result[2] += 0.08333333333333333;
                result[3] += 0.2708333333333333;
                result[4] += 0.14583333333333334;
                result[5] += 0.3541666666666667;
              } else {
                result[0] += 0;
                result[1] += 0.038461538461538464;
                result[2] += 0.07692307692307693;
                result[3] += 0.6923076923076923;
                result[4] += 0.038461538461538464;
                result[5] += 0.15384615384615385;
              }
            }
          } else {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)75) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9367088607594937;
                result[4] += 0;
                result[5] += 0.06329113924050633;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.15;
                result[4] += 0;
                result[5] += 0.85;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)68.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8888888888888888;
                result[5] += 0.1111111111111111;
              } else {
                result[0] += 0;
                result[1] += 0.045454545454545456;
                result[2] += 0;
                result[3] += 0.18181818181818182;
                result[4] += 0;
                result[5] += 0.7727272727272727;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)54) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
                result[0] += 0.03333333333333333;
                result[1] += 0.16666666666666666;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8;
                result[5] += 0;
              } else {
                result[0] += 0.7307692307692307;
                result[1] += 0.038461538461538464;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.23076923076923078;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0.03278688524590164;
                result[2] += 0;
                result[3] += 0.02459016393442623;
                result[4] += 0.9180327868852459;
                result[5] += 0.02459016393442623;
              } else {
                result[0] += 0;
                result[1] += 0.5;
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
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
                result[0] += 0.07352941176470588;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.058823529411764705;
                result[4] += 0.5441176470588235;
                result[5] += 0.3235294117647059;
              } else {
                result[0] += 0.07755102040816327;
                result[1] += 0.00816326530612245;
                result[2] += 0.1346938775510204;
                result[3] += 0.44081632653061226;
                result[4] += 0.02857142857142857;
                result[5] += 0.31020408163265306;
              }
            }
          } else {
            if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
                result[0] += 0.4791666666666667;
                result[1] += 0.10416666666666667;
                result[2] += 0;
                result[3] += 0.041666666666666664;
                result[4] += 0.375;
                result[5] += 0;
              } else {
                result[0] += 0.9541984732824428;
                result[1] += 0.0010905125408942203;
                result[2] += 0.0054525627044711015;
                result[3] += 0.0054525627044711015;
                result[4] += 0.03380588876772083;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
                result[0] += 0.35761589403973515;
                result[1] += 0.019867549668874177;
                result[2] += 0.09933774834437087;
                result[3] += 0.2317880794701987;
                result[4] += 0.09933774834437087;
                result[5] += 0.19205298013245037;
              } else {
                result[0] += 0.11009174311926606;
                result[1] += 0.027522935779816515;
                result[2] += 0.7064220183486238;
                result[3] += 0.10091743119266056;
                result[4] += 0.009174311926605505;
                result[5] += 0.045871559633027525;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)98) ) ) {
            if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)74) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)76) ) ) {
                result[0] += 0;
                result[1] += 0.8333333333333334;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.16666666666666666;
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
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)86) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
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
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
        if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)72.5) ) ) {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)90) ) ) {
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
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.03571428571428571;
                result[3] += 0.9285714285714286;
                result[4] += 0;
                result[5] += 0.03571428571428571;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0.6;
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
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)92) ) ) {
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)90.5) ) ) {
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
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0.07692307692307693;
                result[2] += 0;
                result[3] += 0.15384615384615385;
                result[4] += 0.15384615384615385;
                result[5] += 0.6153846153846154;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0.16666666666666666;
              }
            } else {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
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
          }
        }
      } else {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
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
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)91) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
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
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
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
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)113) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.84;
                result[3] += 0.12;
                result[4] += 0;
                result[5] += 0.04;
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
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)112) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)99) ) ) {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)85) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)81.5) ) ) {
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            }
          } else {
            if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)118.5) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)85.5) ) ) {
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
                result[3] += 0;
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.8;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3684210526315789;
                result[3] += 0.631578947368421;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6;
                result[4] += 0.2;
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
          } else {
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)80) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9365079365079365;
                result[3] += 0.06349206349206349;
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
          }
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)86) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)105) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2222222222222222;
                result[3] += 0.7777777777777778;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8461538461538461;
                result[3] += 0.15384615384615385;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)121) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.967741935483871;
                result[3] += 0.03225806451612903;
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
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.75;
                result[3] += 0.25;
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9428571428571428;
                result[3] += 0.05714285714285714;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9921465968586387;
                result[3] += 0.007853403141361256;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)69) ) ) {
            if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)49) ) ) {
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
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)71) ) ) {
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
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)55.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
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
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)58.5) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)68.5) ) ) {
                result[0] += 0;
                result[1] += 0.2857142857142857;
                result[2] += 0;
                result[3] += 0.21428571428571427;
                result[4] += 0.14285714285714285;
                result[5] += 0.35714285714285715;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.014684287812041116;
                result[4] += 0.014684287812041116;
                result[5] += 0.9706314243759178;
              } else {
                result[0] += 0.005434782608695652;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08152173913043478;
                result[4] += 0.11413043478260869;
                result[5] += 0.7989130434782609;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)55) ) ) {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
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
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0.75;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.043859649122807015;
                result[2] += 0.043859649122807015;
                result[3] += 0.12280701754385964;
                result[4] += 0.07017543859649122;
                result[5] += 0.7192982456140351;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
                result[0] += 0.058823529411764705;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2647058823529412;
                result[4] += 0;
                result[5] += 0.6764705882352942;
              } else {
                result[0] += 0;
                result[1] += 0.008130081300813009;
                result[2] += 0;
                result[3] += 0.8617886178861789;
                result[4] += 0;
                result[5] += 0.13008130081300814;
              }
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)47) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6;
                result[3] += 0;
                result[4] += 0.4;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0.8571428571428571;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)50) ) ) {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
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
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)45.5) ) ) {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
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
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)54) ) ) {
                result[0] += 0.4411764705882353;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5588235294117647;
                result[5] += 0;
              } else {
                result[0] += 0.010416666666666666;
                result[1] += 0.041666666666666664;
                result[2] += 0;
                result[3] += 0.020833333333333332;
                result[4] += 0.9270833333333334;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
                result[0] += 0.9449035812672176;
                result[1] += 0.005509641873278237;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.049586776859504134;
                result[5] += 0;
              } else {
                result[0] += 0.37748344370860926;
                result[1] += 0.052980132450331126;
                result[2] += 0.013245033112582781;
                result[3] += 0.0728476821192053;
                result[4] += 0.3973509933774834;
                result[5] += 0.08609271523178808;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
                result[0] += 0.16666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8333333333333334;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9846390168970814;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0015360983102918587;
                result[4] += 0.013824884792626729;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
                result[0] += 0.005494505494505495;
                result[1] += 0;
                result[2] += 0.06043956043956044;
                result[3] += 0.4835164835164835;
                result[4] += 0.03296703296703297;
                result[5] += 0.4175824175824176;
              } else {
                result[0] += 0;
                result[1] += 0.1686746987951807;
                result[2] += 0.37349397590361444;
                result[3] += 0.1566265060240964;
                result[4] += 0.012048192771084338;
                result[5] += 0.2891566265060241;
              }
            } else {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)101) ) ) {
                result[0] += 0.5000000000000001;
                result[1] += 0.04166666666666667;
                result[2] += 0.25000000000000006;
                result[3] += 0.04166666666666667;
                result[4] += 0.16666666666666669;
                result[5] += 0;
              } else {
                result[0] += 0.9411764705882353;
                result[1] += 0;
                result[2] += 0.058823529411764705;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)52) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)67) ) ) {
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
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)107) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)86.5) ) ) {
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
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
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
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.043478260869565216;
                result[3] += 0.782608695652174;
                result[4] += 0;
                result[5] += 0.17391304347826086;
              }
            }
          } else {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.875;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0.625;
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
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.18181818181818182;
                result[4] += 0;
                result[5] += 0.8181818181818182;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)114.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7777777777777778;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0.05555555555555555;
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
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)88) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4509803921568628;
                result[3] += 0.5098039215686275;
                result[4] += 0;
                result[5] += 0.03921568627450981;
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
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)80) ) ) {
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
      if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)105) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)105) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
              if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
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
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)77.5) ) ) {
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
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)82) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87.5) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)98.5) ) ) {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8564814814814815;
                result[3] += 0.13425925925925927;
                result[4] += 0;
                result[5] += 0.009259259259259259;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3125;
                result[3] += 0.6875;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.015384615384615385;
                result[1] += 0;
                result[2] += 0.9769230769230769;
                result[3] += 0.007692307692307693;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)105) ) ) {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)115.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9767441860465116;
                result[3] += 0.023255813953488372;
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
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.38461538461538464;
                result[3] += 0.6153846153846154;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.011627906976744186;
                result[1] += 0;
                result[2] += 0.8953488372093024;
                result[3] += 0.09302325581395349;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)107) ) ) {
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
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9473684210526315;
                result[3] += 0.05263157894736842;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9970238095238095;
                result[3] += 0.002976190476190476;
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
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)98.5) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)73.5) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)43.5) ) ) {
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
                result[4] += 0.9881656804733728;
                result[5] += 0.011834319526627219;
              }
            } else {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)78.5) ) ) {
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
                result[4] += 0.8181818181818182;
                result[5] += 0.18181818181818182;
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
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)93) ) ) {
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
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)67.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)75) ) ) {
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
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.011412268188302425;
                result[4] += 0.012838801711840228;
                result[5] += 0.9757489300998573;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.11578947368421053;
                result[4] += 0.06315789473684211;
                result[5] += 0.8210526315789474;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.47058823529411764;
                result[4] += 0.0196078431372549;
                result[5] += 0.5098039215686274;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)55) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.16666666666666666;
                result[1] += 0.08333333333333333;
                result[2] += 0;
                result[3] += 0.041666666666666664;
                result[4] += 0.7083333333333334;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)50) ) ) {
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
                result[3] += 0.20394736842105263;
                result[4] += 0.08552631578947369;
                result[5] += 0.7105263157894737;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.022727272727272728;
                result[3] += 0.5681818181818182;
                result[4] += 0;
                result[5] += 0.4090909090909091;
              } else {
                result[0] += 0.10526315789473684;
                result[1] += 0;
                result[2] += 0.10526315789473684;
                result[3] += 0;
                result[4] += 0.07894736842105263;
                result[5] += 0.7105263157894737;
              }
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)82) ) ) {
                result[0] += 0.1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0.7;
              } else {
                result[0] += 0.017857142857142856;
                result[1] += 0;
                result[2] += 0.008928571428571428;
                result[3] += 0.7857142857142857;
                result[4] += 0.017857142857142856;
                result[5] += 0.16964285714285715;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)88) ) ) {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)93) ) ) {
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
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)66) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0.75;
              } else {
                result[0] += 0;
                result[1] += 0.014925373134328358;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9850746268656716;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
                result[0] += 0.2413793103448276;
                result[1] += 0;
                result[2] += 0.034482758620689655;
                result[3] += 0;
                result[4] += 0.3793103448275862;
                result[5] += 0.3448275862068966;
              } else {
                result[0] += 0.0625;
                result[1] += 0.6875;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
                result[0] += 0.16901408450704228;
                result[1] += 0.3802816901408451;
                result[2] += 0.07042253521126762;
                result[3] += 0;
                result[4] += 0.3098591549295775;
                result[5] += 0.07042253521126762;
              } else {
                result[0] += 0.9323232323232323;
                result[1] += 0.006060606060606061;
                result[2] += 0.00202020202020202;
                result[3] += 0.010101010101010102;
                result[4] += 0.023232323232323233;
                result[5] += 0.026262626262626262;
              }
            } else {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)103.5) ) ) {
                result[0] += 0.045454545454545456;
                result[1] += 0.10909090909090909;
                result[2] += 0.06363636363636363;
                result[3] += 0.24545454545454545;
                result[4] += 0.3090909090909091;
                result[5] += 0.22727272727272727;
              } else {
                result[0] += 0.86;
                result[1] += 0;
                result[2] += 0.14;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)89.5) ) ) {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.00847457627118644;
                result[1] += 0;
                result[2] += 0.00847457627118644;
                result[3] += 0.2457627118644068;
                result[4] += 0.03389830508474576;
                result[5] += 0.7033898305084746;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
                result[0] += 0.01801801801801802;
                result[1] += 0.06306306306306307;
                result[2] += 0.14414414414414417;
                result[3] += 0.5675675675675677;
                result[4] += 0.03603603603603604;
                result[5] += 0.1711711711711712;
              } else {
                result[0] += 0;
                result[1] += 0.10714285714285715;
                result[2] += 0.6964285714285715;
                result[3] += 0.12500000000000003;
                result[4] += 0;
                result[5] += 0.07142857142857144;
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)79) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.38709677419354843;
                result[1] += 0.03225806451612904;
                result[2] += 0.5483870967741936;
                result[3] += 0.03225806451612904;
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
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)90) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07547169811320754;
                result[3] += 0.8867924528301887;
                result[4] += 0;
                result[5] += 0.03773584905660377;
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
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)81) ) ) {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)83) ) ) {
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
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6153846153846154;
                result[3] += 0.3076923076923077;
                result[4] += 0;
                result[5] += 0.07692307692307693;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.8;
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
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)101.5) ) ) {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.38095238095238093;
                result[3] += 0.38095238095238093;
                result[4] += 0;
                result[5] += 0.23809523809523808;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7787610619469026;
                result[3] += 0.21238938053097345;
                result[4] += 0;
                result[5] += 0.008849557522123894;
              }
            } else {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9069767441860465;
                result[3] += 0.09302325581395349;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)127.5) ) ) {
                result[0] += 0.010101010101010104;
                result[1] += 0;
                result[2] += 0.9797979797979799;
                result[3] += 0.010101010101010104;
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
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)83) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)83) ) ) {
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
            }
          } else {
            if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)104) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9117647058823529;
                result[3] += 0.08823529411764706;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)118) ) ) {
              if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
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
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)110.5) ) ) {
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
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)92) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)73.5) ) ) {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
              if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)69) ) ) {
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
                result[4] += 0.8888888888888888;
                result[5] += 0.1111111111111111;
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
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)55.5) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
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
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.015444015444015444;
                result[4] += 0.018018018018018018;
                result[5] += 0.9665379665379665;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.015625;
                result[3] += 0.1875;
                result[4] += 0.09375;
                result[5] += 0.703125;
              }
            } else {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0.06976744186046512;
                result[2] += 0;
                result[3] += 0.16279069767441862;
                result[4] += 0.13953488372093023;
                result[5] += 0.627906976744186;
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
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)80.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)81) ) ) {
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
                result[4] += 0.8;
                result[5] += 0.2;
              }
            }
          } else {
            if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)68) ) ) {
                result[0] += 0;
                result[1] += 0.09090909090909091;
                result[2] += 0.18181818181818182;
                result[3] += 0.5454545454545454;
                result[4] += 0;
                result[5] += 0.18181818181818182;
              } else {
                result[0] += 0;
                result[1] += 0.011111111111111112;
                result[2] += 0;
                result[3] += 0.2111111111111111;
                result[4] += 0.03333333333333333;
                result[5] += 0.7444444444444445;
              }
            } else {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
                result[0] += 0;
                result[1] += 0.012121212121212121;
                result[2] += 0;
                result[3] += 0.7878787878787878;
                result[4] += 0.01818181818181818;
                result[5] += 0.18181818181818182;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2413793103448276;
                result[3] += 0.2413793103448276;
                result[4] += 0;
                result[5] += 0.5172413793103449;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)101.5) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)52.5) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
                result[0] += 0;
                result[1] += 0.7142857142857143;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2857142857142857;
                result[5] += 0;
              } else {
                result[0] += 0.9444444444444444;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.05555555555555555;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)75) ) ) {
                result[0] += 0.024390243902439025;
                result[1] += 0.008130081300813009;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.967479674796748;
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
                result[0] += 0.14814814814814814;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07407407407407407;
                result[4] += 0.1111111111111111;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0.935609756097561;
                result[1] += 0.00878048780487805;
                result[2] += 0.003902439024390244;
                result[3] += 0.006829268292682927;
                result[4] += 0.037073170731707315;
                result[5] += 0.007804878048780488;
              }
            } else {
              if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
                result[0] += 0.03703703703703704;
                result[1] += 0.03703703703703704;
                result[2] += 0.04938271604938272;
                result[3] += 0.1851851851851852;
                result[4] += 0.22222222222222224;
                result[5] += 0.46913580246913583;
              } else {
                result[0] += 0.9215686274509803;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.0784313725490196;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
                result[0] += 0.02631578947368421;
                result[1] += 0.017543859649122806;
                result[2] += 0.07017543859649122;
                result[3] += 0.5526315789473685;
                result[4] += 0.017543859649122806;
                result[5] += 0.3157894736842105;
              } else {
                result[0] += 0.08695652173913043;
                result[1] += 0;
                result[2] += 0.6956521739130435;
                result[3] += 0.13043478260869565;
                result[4] += 0;
                result[5] += 0.08695652173913043;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
                result[0] += 0.2;
                result[1] += 0;
                result[2] += 0.4857142857142857;
                result[3] += 0.04285714285714286;
                result[4] += 0.2;
                result[5] += 0.07142857142857142;
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
      } else {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)106.5) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)66.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)106.5) ) ) {
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
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)69) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)74) ) ) {
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
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)84) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)65.5) ) ) {
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
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.03125;
                result[3] += 0.90625;
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
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0.02040816326530612;
                result[2] += 0.24489795918367346;
                result[3] += 0.1836734693877551;
                result[4] += 0;
                result[5] += 0.5510204081632653;
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
        if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)72) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)70.5) ) ) {
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
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)98) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)74) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2727272727272727;
                result[3] += 0.45454545454545453;
                result[4] += 0;
                result[5] += 0.2727272727272727;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)89) ) ) {
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
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)102.5) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.047619047619047616;
                result[3] += 0.9523809523809523;
                result[4] += 0;
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
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)69.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4186046511627907;
                result[3] += 0.5116279069767442;
                result[4] += 0;
                result[5] += 0.06976744186046512;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)103) ) ) {
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
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6;
                result[3] += 0.36;
                result[4] += 0;
                result[5] += 0.04;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)103.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9367088607594937;
                result[3] += 0.06329113924050633;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5555555555555556;
                result[3] += 0.4444444444444444;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)87) ) ) {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
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
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
              if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)113.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9245283018867925;
                result[3] += 0.07547169811320754;
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
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8695652173913043;
                result[3] += 0.13043478260869565;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.0023923444976076554;
                result[1] += 0;
                result[2] += 0.9856459330143541;
                result[3] += 0.009569377990430622;
                result[4] += 0;
                result[5] += 0.0023923444976076554;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
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
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
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
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)94) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)74.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.13636363636363635;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8636363636363636;
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
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)80) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
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
                result[3] += 0.16666666666666666;
                result[4] += 0.3333333333333333;
                result[5] += 0.5;
              }
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)55.5) ) ) {
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
            if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)80) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)62.5) ) ) {
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
                result[3] += 0.015736766809728183;
                result[4] += 0.00715307582260372;
                result[5] += 0.977110157367668;
              }
            } else {
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.16666666666666666;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0.25;
                result[5] += 0.08333333333333333;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
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
            if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
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
                result[2] += 0.004273504273504274;
                result[3] += 0.13675213675213677;
                result[4] += 0.12393162393162394;
                result[5] += 0.7350427350427351;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0.00641025641025641;
                result[2] += 0;
                result[3] += 0.7371794871794872;
                result[4] += 0.038461538461538464;
                result[5] += 0.21794871794871795;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06666666666666667;
                result[3] += 0.13333333333333333;
                result[4] += 0;
                result[5] += 0.8;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)92) ) ) {
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
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)104.5) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)83) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)44.5) ) ) {
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
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)109.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)116) ) ) {
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
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)106) ) ) {
            if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)65.5) ) ) {
                result[0] += 0.6304347826086957;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3695652173913043;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.15625;
                result[2] += 0;
                result[3] += 0.125;
                result[4] += 0.25;
                result[5] += 0.46875;
              }
            } else {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)109.5) ) ) {
                result[0] += 0.7407407407407408;
                result[1] += 0.032206119162640906;
                result[2] += 0;
                result[3] += 0.02415458937198068;
                result[4] += 0.18679549114331725;
                result[5] += 0.016103059581320453;
              } else {
                result[0] += 0.9799666110183639;
                result[1] += 0;
                result[2] += 0.001669449081803005;
                result[3] += 0;
                result[4] += 0.018363939899833055;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)51.5) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)47) ) ) {
                result[0] += 0;
                result[1] += 0.9574468085106383;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.0425531914893617;
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
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)73.5) ) ) {
                result[0] += 0.5454545454545454;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.18181818181818182;
                result[4] += 0.2727272727272727;
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
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
                result[0] += 0.037037037037037035;
                result[1] += 0.018518518518518517;
                result[2] += 0.037037037037037035;
                result[3] += 0.3055555555555556;
                result[4] += 0;
                result[5] += 0.6018518518518519;
              } else {
                result[0] += 0;
                result[1] += 0.015384615384615385;
                result[2] += 0.08461538461538462;
                result[3] += 0.5923076923076923;
                result[4] += 0.023076923076923078;
                result[5] += 0.2846153846153846;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
                result[0] += 0.06666666666666667;
                result[1] += 0;
                result[2] += 0.06666666666666667;
                result[3] += 0.2;
                result[4] += 0.06666666666666667;
                result[5] += 0.6;
              } else {
                result[0] += 0.03614457831325301;
                result[1] += 0;
                result[2] += 0.7590361445783133;
                result[3] += 0.1566265060240964;
                result[4] += 0;
                result[5] += 0.04819277108433735;
              }
            }
          } else {
            if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)96) ) ) {
                result[0] += 0.3181818181818182;
                result[1] += 0.09090909090909091;
                result[2] += 0.09090909090909091;
                result[3] += 0;
                result[4] += 0.45454545454545453;
                result[5] += 0.045454545454545456;
              } else {
                result[0] += 0.8064516129032258;
                result[1] += 0;
                result[2] += 0.1774193548387097;
                result[3] += 0;
                result[4] += 0.016129032258064516;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)113) ) ) {
                result[0] += 0;
                result[1] += 0.08695652173913043;
                result[2] += 0.782608695652174;
                result[3] += 0.043478260869565216;
                result[4] += 0;
                result[5] += 0.08695652173913043;
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
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)65.5) ) ) {
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
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
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
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
              if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)107) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.04255319148936171;
                result[3] += 0.8085106382978724;
                result[4] += 0;
                result[5] += 0.14893617021276598;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)83) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0;
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
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
                result[0] += 0;
                result[1] += 0.16666666666666666;
                result[2] += 0;
                result[3] += 0.16666666666666666;
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
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5769230769230769;
                result[3] += 0.40384615384615385;
                result[4] += 0;
                result[5] += 0.019230769230769232;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8387096774193549;
                result[3] += 0.16129032258064516;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)80) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
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
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)75) ) ) {
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
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
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
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)112) ) ) {
            if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)90) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
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
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
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
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)87) ) ) {
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
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8297872340425532;
                result[3] += 0.15602836879432624;
                result[4] += 0;
                result[5] += 0.014184397163120567;
              } else {
                result[0] += 0.038461538461538464;
                result[1] += 0;
                result[2] += 0.9230769230769231;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.038461538461538464;
              }
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.900990099009901;
                result[3] += 0.07920792079207921;
                result[4] += 0;
                result[5] += 0.019801980198019802;
              } else {
                result[0] += 0.002531645569620253;
                result[1] += 0;
                result[2] += 0.9974683544303797;
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
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)41) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)89) ) ) {
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
              if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9914529914529915;
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
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4166666666666667;
                result[5] += 0.5833333333333334;
              } else {
                result[0] += 0;
                result[1] += 0.14285714285714285;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8571428571428571;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.45454545454545453;
                result[4] += 0.09090909090909091;
                result[5] += 0.45454545454545453;
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
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)69.5) ) ) {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)71) ) ) {
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
                result[4] += 0.7692307692307693;
                result[5] += 0.23076923076923078;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7142857142857143;
                result[4] += 0;
                result[5] += 0.2857142857142857;
              } else {
                result[0] += 0.0042796005706134095;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.029957203994293864;
                result[4] += 0.014265335235378032;
                result[5] += 0.9514978601997147;
              }
            }
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.045454545454545456;
                result[4] += 0;
                result[5] += 0.9545454545454546;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)88) ) ) {
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
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)69) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.045454545454545456;
                result[4] += 0.7727272727272727;
                result[5] += 0.18181818181818182;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.125;
                result[4] += 0.25;
                result[5] += 0.625;
              }
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07407407407407407;
                result[4] += 0;
                result[5] += 0.9259259259259259;
              } else {
                result[0] += 0.04040404040404041;
                result[1] += 0;
                result[2] += 0.05555555555555555;
                result[3] += 0.4595959595959596;
                result[4] += 0;
                result[5] += 0.4444444444444444;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)75) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)83.5) ) ) {
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
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)107) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)67.5) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)49.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.08163265306122448;
                result[1] += 0.05102040816326531;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8469387755102041;
                result[5] += 0.02040816326530612;
              }
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)71.5) ) ) {
                result[0] += 0.043478260869565216;
                result[1] += 0.043478260869565216;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.08695652173913043;
                result[5] += 0.8260869565217391;
              } else {
                result[0] += 0.8652482269503546;
                result[1] += 0.009456264775413711;
                result[2] += 0;
                result[3] += 0.016548463356973995;
                result[4] += 0.10401891252955082;
                result[5] += 0.004728132387706856;
              }
            }
          } else {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)45.5) ) ) {
                result[0] += 0;
                result[1] += 0.9583333333333334;
                result[2] += 0.041666666666666664;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.03723404255319149;
                result[1] += 0.015957446808510637;
                result[2] += 0.047872340425531915;
                result[3] += 0.39361702127659576;
                result[4] += 0.1702127659574468;
                result[5] += 0.3351063829787234;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)80) ) ) {
                result[0] += 0.14285714285714285;
                result[1] += 0;
                result[2] += 0.8571428571428571;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.7000000000000001;
                result[1] += 0;
                result[2] += 0.16666666666666669;
                result[3] += 0;
                result[4] += 0.06666666666666668;
                result[5] += 0.06666666666666668;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)78) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.125;
                result[1] += 0;
                result[2] += 0.125;
                result[3] += 0.0625;
                result[4] += 0.6875;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)76) ) ) {
                result[0] += 0.6071428571428572;
                result[1] += 0.03571428571428572;
                result[2] += 0.07142857142857144;
                result[3] += 0;
                result[4] += 0.28571428571428575;
                result[5] += 0;
              } else {
                result[0] += 0.9856115107913669;
                result[1] += 0.0014388489208633094;
                result[2] += 0.004316546762589928;
                result[3] += 0.0014388489208633094;
                result[4] += 0.007194244604316547;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)93.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
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
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
        if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)64.5) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)75) ) ) {
            if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)74) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
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
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
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
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
                result[0] += 0;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0.8;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.0958904109589041;
                result[4] += 0.0273972602739726;
                result[5] += 0.8767123287671232;
              }
            } else {
              if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)71) ) ) {
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
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)96) ) ) {
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
              if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)102) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4074074074074074;
                result[4] += 0;
                result[5] += 0.5925925925925926;
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
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)85) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)62) ) ) {
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
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)86) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.025;
                result[3] += 0.95;
                result[4] += 0;
                result[5] += 0.025;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)73) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.13333333333333333;
                result[2] += 0.13333333333333333;
                result[3] += 0.3333333333333333;
                result[4] += 0.06666666666666667;
                result[5] += 0.3333333333333333;
              }
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4375;
                result[4] += 0;
                result[5] += 0.5625;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.34146341463414637;
                result[3] += 0.4878048780487805;
                result[4] += 0.04878048780487805;
                result[5] += 0.12195121951219512;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)97) ) ) {
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
            if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)77.5) ) ) {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)97) ) ) {
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
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8163265306122449;
                result[3] += 0.14285714285714285;
                result[4] += 0;
                result[5] += 0.04081632653061224;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)95) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)115) ) ) {
              if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.65625;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.09375;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.625;
                result[4] += 0.0625;
                result[5] += 0.0625;
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
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)110) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9035087719298246;
                result[3] += 0.09649122807017543;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)90) ) ) {
                result[0] += 0.5454545454545454;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.45454545454545453;
                result[4] += 0;
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
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)86) ) ) {
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
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)85) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
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
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)106) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6976744186046512;
                result[3] += 0.27906976744186046;
                result[4] += 0;
                result[5] += 0.023255813953488372;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9444444444444444;
                result[3] += 0.05555555555555555;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9116022099447514;
                result[3] += 0.08839779005524862;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)86) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)111) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
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
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)85) ) ) {
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
            if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)91) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.1;
                result[1] += 0;
                result[2] += 0.9;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)80.5) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0;
                result[2] += 0.6666666666666666;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9928400954653938;
                result[3] += 0.007159904534606206;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)55) ) ) {
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
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)60) ) ) {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)59.5) ) ) {
            if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)68) ) ) {
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
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
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
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
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
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)58.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.007142857142857143;
                result[4] += 0.0017857142857142857;
                result[5] += 0.9910714285714286;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.06796116504854369;
                result[4] += 0.009708737864077669;
                result[5] += 0.9223300970873787;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)61.5) ) ) {
            if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)92.5) ) ) {
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
            if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
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
        if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)57.5) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)75.5) ) ) {
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
            if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)62) ) ) {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)84) ) ) {
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
              if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)82.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.01818181818181818;
                result[4] += 0.09090909090909091;
                result[5] += 0.8909090909090909;
              } else {
                result[0] += 0;
                result[1] += 0.030716723549488054;
                result[2] += 0.04778156996587031;
                result[3] += 0.27303754266211605;
                result[4] += 0.05802047781569966;
                result[5] += 0.590443686006826;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)84.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9363636363636364;
                result[4] += 0;
                result[5] += 0.06363636363636363;
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
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)45.5) ) ) {
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
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)47.5) ) ) {
              if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)47) ) ) {
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
              if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)115) ) ) {
                result[0] += 0.03389830508474576;
                result[1] += 0.00847457627118644;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9491525423728814;
                result[5] += 0.00847457627118644;
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
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)93.5) ) ) {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)48.5) ) ) {
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
                result[4] += 0.8571428571428571;
                result[5] += 0.14285714285714285;
              }
            } else {
              if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)59) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
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
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)107) ) ) {
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
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
            if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)67) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.9615384615384616;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.038461538461538464;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.030303030303030304;
                result[3] += 0.06060606060606061;
                result[4] += 0.15151515151515152;
                result[5] += 0.7575757575757576;
              } else {
                result[0] += 0.018867924528301886;
                result[1] += 0.03773584905660377;
                result[2] += 0.1320754716981132;
                result[3] += 0.5283018867924528;
                result[4] += 0.07547169811320754;
                result[5] += 0.20754716981132076;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
                result[0] += 0.9;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.025;
                result[2] += 0.075;
                result[3] += 0.025;
                result[4] += 0.775;
                result[5] += 0.1;
              }
            } else {
              if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
                result[0] += 0.9537856440511308;
                result[1] += 0.003933136676499509;
                result[2] += 0;
                result[3] += 0.007866273352999017;
                result[4] += 0.032448377581120944;
                result[5] += 0.0019665683382497543;
              } else {
                result[0] += 0.4375;
                result[1] += 0;
                result[2] += 0.09821428571428571;
                result[3] += 0.125;
                result[4] += 0.0625;
                result[5] += 0.2767857142857143;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
            if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
                result[0] += 0.21739130434782608;
                result[1] += 0.21739130434782608;
                result[2] += 0;
                result[3] += 0.15217391304347827;
                result[4] += 0.32608695652173914;
                result[5] += 0.08695652173913043;
              } else {
                result[0] += 0.025210084033613446;
                result[1] += 0;
                result[2] += 0.03361344537815126;
                result[3] += 0.3949579831932773;
                result[4] += 0.008403361344537815;
                result[5] += 0.5378151260504201;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7352941176470589;
                result[3] += 0.08823529411764706;
                result[4] += 0;
                result[5] += 0.17647058823529413;
              } else {
                result[0] += 0.4444444444444444;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5555555555555556;
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
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
              if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
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
                result[3] += 0.2608695652173913;
                result[4] += 0;
                result[5] += 0.7391304347826086;
              }
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06896551724137931;
                result[3] += 0.8620689655172413;
                result[4] += 0;
                result[5] += 0.06896551724137931;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.33333333333333337;
                result[3] += 0.5111111111111112;
                result[4] += 0;
                result[5] += 0.15555555555555559;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
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
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)103.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)105) ) ) {
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
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)114.5) ) ) {
            if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8947368421052632;
                result[4] += 0.05263157894736842;
                result[5] += 0.05263157894736842;
              } else {
                result[0] += 0.15384615384615385;
                result[1] += 0.07692307692307693;
                result[2] += 0.38461538461538464;
                result[3] += 0.07692307692307693;
                result[4] += 0.3076923076923077;
                result[5] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)72.5) ) ) {
                result[0] += 0.3076923076923077;
                result[1] += 0.38461538461538464;
                result[2] += 0;
                result[3] += 0.07692307692307693;
                result[4] += 0.23076923076923078;
                result[5] += 0;
              } else {
                result[0] += 0.014705882352941178;
                result[1] += 0;
                result[2] += 0.823529411764706;
                result[3] += 0.1544117647058824;
                result[4] += 0;
                result[5] += 0.007352941176470589;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)91.5) ) ) {
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
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
                result[0] += 0.4;
                result[1] += 0;
                result[2] += 0.6;
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
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
            if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)119) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.017857142857142856;
                result[2] += 0.6964285714285714;
                result[3] += 0.25;
                result[4] += 0;
                result[5] += 0.03571428571428571;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.918918918918919;
                result[3] += 0.08108108108108109;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)85) ) ) {
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
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)71) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
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
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)101) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.965183752417795;
                result[3] += 0.03481624758220503;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.23529411764705882;
                result[1] += 0;
                result[2] += 0.7647058823529411;
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
  if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)69) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)69) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
                result[0] += 0;
                result[1] += 0.09090909090909091;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6363636363636364;
                result[5] += 0.2727272727272727;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1;
                result[5] += 0.9;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)80) ) ) {
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
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)44) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
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
                result[4] += 1;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)86.5) ) ) {
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
      if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
        if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)57.5) ) ) {
            if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)79) ) ) {
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
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)51.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.0011547344110854503;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.03695150115473441;
                result[4] += 0.017321016166281754;
                result[5] += 0.9445727482678984;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
                result[0] += 0;
                result[1] += 0.10526315789473684;
                result[2] += 0;
                result[3] += 0.6842105263157895;
                result[4] += 0;
                result[5] += 0.21052631578947367;
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
            if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)111) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)72.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.09090909090909093;
                result[1] += 0.2272727272727273;
                result[2] += 0.13636363636363638;
                result[3] += 0.2272727272727273;
                result[4] += 0.18181818181818185;
                result[5] += 0.13636363636363638;
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
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)72) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)74) ) ) {
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
                result[3] += 0.03389830508474576;
                result[4] += 0;
                result[5] += 0.9661016949152542;
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)73) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)72) ) ) {
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
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
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
                result[3] += 0.9310344827586207;
                result[4] += 0;
                result[5] += 0.06896551724137931;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)40) ) ) {
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
                result[3] += 0.23529411764705882;
                result[4] += 0;
                result[5] += 0.7647058823529411;
              }
            }
          } else {
            if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
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
              if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
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
    }
  } else {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)102.5) ) ) {
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)52.5) ) ) {
                result[0] += 0.4375;
                result[1] += 0.020833333333333332;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.4791666666666667;
                result[5] += 0.0625;
              } else {
                result[0] += 0;
                result[1] += 0.01639344262295082;
                result[2] += 0;
                result[3] += 0.02459016393442623;
                result[4] += 0.9180327868852459;
                result[5] += 0.040983606557377046;
              }
            } else {
              if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.06666666666666667;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9333333333333333;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)66.5) ) ) {
              if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)67.5) ) ) {
                result[0] += 0.9235474006116208;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.01529051987767584;
                result[4] += 0.05198776758409786;
                result[5] += 0.009174311926605505;
              } else {
                result[0] += 0.14285714285714285;
                result[1] += 0.08571428571428572;
                result[2] += 0.11428571428571428;
                result[3] += 0.14285714285714285;
                result[4] += 0.17142857142857143;
                result[5] += 0.34285714285714286;
              }
            } else {
              if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
                result[0] += 0.022556390977443608;
                result[1] += 0.015037593984962405;
                result[2] += 0.015037593984962405;
                result[3] += 0.42105263157894735;
                result[4] += 0.11278195488721804;
                result[5] += 0.41353383458646614;
              } else {
                result[0] += 0.4565217391304348;
                result[1] += 0.10869565217391305;
                result[2] += 0.19565217391304351;
                result[3] += 0.06521739130434784;
                result[4] += 0.04347826086956522;
                result[5] += 0.13043478260869568;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
            if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)103) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)91) ) ) {
                result[0] += 0.1;
                result[1] += 0.2;
                result[2] += 0.15;
                result[3] += 0.25;
                result[4] += 0.25;
                result[5] += 0.05;
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
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)72) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
                result[0] += 0.8;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1111111111111111;
                result[3] += 0.1111111111111111;
                result[4] += 0.7777777777777778;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
                result[0] += 0.9610215053763441;
                result[1] += 0.004032258064516129;
                result[2] += 0.002688172043010753;
                result[3] += 0.008064516129032258;
                result[4] += 0.024193548387096774;
                result[5] += 0;
              } else {
                result[0] += 0.42857142857142855;
                result[1] += 0;
                result[2] += 0.32142857142857145;
                result[3] += 0;
                result[4] += 0.25;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)82.5) ) ) {
              if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
                result[0] += 0;
                result[1] += 0.5714285714285714;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.42857142857142855;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.9976905311778291;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.0023094688221709007;
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
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)105.5) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)73.5) ) ) {
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
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)91.5) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
            if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
              if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)71) ) ) {
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
                result[3] += 0.5625;
                result[4] += 0.0625;
                result[5] += 0.375;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)89) ) ) {
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
            if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)106) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)58.5) ) ) {
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
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)106) ) ) {
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
            if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
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
                result[3] += 0.9696969696969697;
                result[4] += 0;
                result[5] += 0.030303030303030304;
              }
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.19230769230769232;
                result[3] += 0.46153846153846156;
                result[4] += 0;
                result[5] += 0.34615384615384615;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5454545454545454;
                result[3] += 0.18181818181818182;
                result[4] += 0;
                result[5] += 0.2727272727272727;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)98) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
              if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0.09090909090909091;
                result[2] += 0;
                result[3] += 0.18181818181818182;
                result[4] += 0.5454545454545454;
                result[5] += 0.18181818181818182;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1;
                result[4] += 0.03333333333333333;
                result[5] += 0.8666666666666667;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)64.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.4;
                result[3] += 0;
                result[4] += 0.6;
                result[5] += 0;
              } else {
                result[0] += 0.875;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.125;
                result[5] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.16666666666666666;
                result[4] += 0;
                result[5] += 0.8333333333333334;
              } else {
                result[0] += 0.03448275862068966;
                result[1] += 0;
                result[2] += 0.8620689655172414;
                result[3] += 0.06896551724137932;
                result[4] += 0;
                result[5] += 0.03448275862068966;
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
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.44047619047619047;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0.05952380952380952;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7894736842105263;
                result[3] += 0.21052631578947367;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)118) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.96875;
                result[3] += 0.03125;
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
            if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)75) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
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
              if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8853503184713376;
                result[3] += 0.09872611464968153;
                result[4] += 0;
                result[5] += 0.01592356687898089;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9795501022494888;
                result[3] += 0.02044989775051125;
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
  result[0] /= 15;
  result[1] /= 15;
  result[2] /= 15;
  result[3] /= 15;
  result[4] /= 15;
  result[5] /= 15;
  
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
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
