
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
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x422a0000))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
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
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42810000))) ) ) {
                result[0] += 0;
                result[1] += 0.0043859649122807015;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9956140350877193;
                result[5] += 0;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            } else {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425c0000))) ) ) {
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
                result[4] += 0.6923076923076923;
                result[5] += 0.3076923076923077;
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42980000))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x427e0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426a0000))) ) ) {
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
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42720000))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42960000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9333333333333333;
                result[5] += 0.06666666666666667;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42830000))) ) ) {
                result[0] += 0;
                result[1] += 0.2;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6;
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
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42560000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a70000))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42990000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42600000))) ) ) {
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
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42500000))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42820000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7272727272727273;
                result[5] += 0.2727272727272727;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0012706480304955528;
                result[3] += 0.044472681067344345;
                result[4] += 0.0241423125794155;
                result[5] += 0.9301143583227446;
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42910000))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.19047619047619047;
                result[5] += 0.8095238095238095;
              } else {
                result[0] += 0.02857142857142857;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9142857142857143;
                result[5] += 0.05714285714285714;
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
                result[0] += 0.13043478260869565;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.43478260869565216;
                result[4] += 0.30434782608695654;
                result[5] += 0.13043478260869565;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.17006802721088435;
                result[4] += 0.10204081632653061;
                result[5] += 0.7278911564625851;
              }
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429c0000))) ) ) {
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
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
                result[0] += 0.01694915254237288;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.4067796610169492;
                result[4] += 0;
                result[5] += 0.576271186440678;
              } else {
                result[0] += 0.0041841004184100415;
                result[1] += 0;
                result[2] += 0.016736401673640166;
                result[3] += 0.8242677824267782;
                result[4] += 0;
                result[5] += 0.15481171548117154;
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a60000))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
                result[0] += 0.9411764705882353;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.058823529411764705;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.016666666666666666;
                result[1] += 0;
                result[2] += 0.2;
                result[3] += 0.38333333333333336;
                result[4] += 0;
                result[5] += 0.4;
              }
            } else {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428a0000))) ) ) {
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
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427e0000))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.5714285714285714;
                result[1] += 0.09523809523809523;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.3333333333333333;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42910000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0.52;
                result[2] += 0;
                result[3] += 0.04;
                result[4] += 0.44;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x427c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42880000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
                result[0] += 0;
                result[1] += 0.06666666666666667;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.9333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.42857142857142855;
                result[4] += 0.14285714285714285;
                result[5] += 0.42857142857142855;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42900000))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cb0000))) ) ) {
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
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c70000))) ) ) {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6785714285714286;
                result[5] += 0.07142857142857142;
              } else {
                result[0] += 0.125;
                result[1] += 0.75;
                result[2] += 0;
                result[3] += 0.0625;
                result[4] += 0.0625;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
                result[0] += 0.9558985667034179;
                result[1] += 0;
                result[2] += 0.007717750826901874;
                result[3] += 0.004410143329658214;
                result[4] += 0.025358324145534728;
                result[5] += 0.006615214994487321;
              } else {
                result[0] += 0.43661971830985913;
                result[1] += 0;
                result[2] += 0.22535211267605634;
                result[3] += 0.14084507042253522;
                result[4] += 0.1267605633802817;
                result[5] += 0.07042253521126761;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.01818181818181818;
                result[3] += 0.01818181818181818;
                result[4] += 0;
                result[5] += 0.9636363636363636;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.10526315789473684;
                result[3] += 0.42105263157894735;
                result[4] += 0;
                result[5] += 0.47368421052631576;
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
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ac0000))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a60000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.08333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1111111111111111;
                result[4] += 0;
                result[5] += 0.8888888888888888;
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e10000))) ) ) {
                result[0] += 0.02127659574468085;
                result[1] += 0;
                result[2] += 0.19148936170212766;
                result[3] += 0.5319148936170213;
                result[4] += 0;
                result[5] += 0.2553191489361702;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3;
                result[3] += 0.3;
                result[4] += 0;
                result[5] += 0.4;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9347826086956522;
                result[3] += 0.06521739130434782;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
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
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
                result[0] += 0.5909090909090909;
                result[1] += 0;
                result[2] += 0.36363636363636365;
                result[3] += 0.045454545454545456;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.010948905109489052;
                result[1] += 0;
                result[2] += 0.7992700729927007;
                result[3] += 0.16058394160583941;
                result[4] += 0.0036496350364963502;
                result[5] += 0.025547445255474453;
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
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ac0000))) ) ) {
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
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e00000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8571428571428571;
                result[3] += 0.14285714285714285;
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
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.922077922077922;
                result[3] += 0.07792207792207792;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.003875968992248062;
                result[1] += 0;
                result[2] += 0.9883720930232558;
                result[3] += 0.005813953488372093;
                result[4] += 0;
                result[5] += 0.001937984496124031;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428f0000))) ) ) {
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
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42810000))) ) ) {
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
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8235294117647058;
                result[5] += 0.17647058823529413;
              } else {
                result[0] += 0;
                result[1] += 0.08;
                result[2] += 0;
                result[3] += 0.08;
                result[4] += 0.12;
                result[5] += 0.72;
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ae0000))) ) ) {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426a0000))) ) ) {
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
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42520000))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42970000))) ) ) {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
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
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42920000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.45454545454545453;
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
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
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
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.015082956259426848;
                result[4] += 0.012066365007541479;
                result[5] += 0.9728506787330317;
              } else {
                result[0] += 0.003246753246753247;
                result[1] += 0.012987012987012988;
                result[2] += 0.025974025974025976;
                result[3] += 0.21753246753246752;
                result[4] += 0.06168831168831169;
                result[5] += 0.6785714285714286;
              }
            }
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42850000))) ) ) {
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
                result[3] += 0.975609756097561;
                result[4] += 0;
                result[5] += 0.024390243902439025;
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
                result[0] += 0;
                result[1] += 0.030303030303030304;
                result[2] += 0.12121212121212122;
                result[3] += 0.30303030303030304;
                result[4] += 0;
                result[5] += 0.5454545454545454;
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
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b60000))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42360000))) ) ) {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5;
                result[5] += 0;
              } else {
                result[0] += 0.009433962264150943;
                result[1] += 0.009433962264150943;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9811320754716981;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42830000))) ) ) {
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
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42960000))) ) ) {
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
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
                result[0] += 0;
                result[1] += 0.42857142857142855;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.5714285714285714;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.8947368421052632;
                result[2] += 0;
                result[3] += 0.10526315789473684;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42880000))) ) ) {
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429c0000))) ) ) {
                result[0] += 0.06666666666666667;
                result[1] += 0.1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7666666666666667;
                result[5] += 0.06666666666666667;
              } else {
                result[0] += 0.25;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.625;
                result[4] += 0;
                result[5] += 0.125;
              }
            } else {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
                result[0] += 0;
                result[1] += 0.8235294117647058;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.17647058823529413;
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
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
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
                result[3] += 0.05263157894736842;
                result[4] += 0.10526315789473684;
                result[5] += 0.8421052631578947;
              }
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
                result[0] += 0.935;
                result[1] += 0.002;
                result[2] += 0;
                result[3] += 0.005;
                result[4] += 0.055;
                result[5] += 0.003;
              } else {
                result[0] += 0.5929203539823009;
                result[1] += 0.061946902654867256;
                result[2] += 0.17699115044247787;
                result[3] += 0.08849557522123894;
                result[4] += 0.061946902654867256;
                result[5] += 0.017699115044247787;
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d60000))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
                result[0] += 0;
                result[1] += 0.015503875968992248;
                result[2] += 0;
                result[3] += 0.20930232558139536;
                result[4] += 0.09302325581395349;
                result[5] += 0.6821705426356589;
              } else {
                result[0] += 0.030927835051546393;
                result[1] += 0.03608247422680412;
                result[2] += 0.08762886597938144;
                result[3] += 0.4948453608247423;
                result[4] += 0.061855670103092786;
                result[5] += 0.28865979381443296;
              }
            } else {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c30000))) ) ) {
                result[0] += 0.22580645161290322;
                result[1] += 0;
                result[2] += 0.12903225806451613;
                result[3] += 0;
                result[4] += 0.6129032258064516;
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
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.46153846153846156;
                result[3] += 0.23076923076923078;
                result[4] += 0;
                result[5] += 0.3076923076923077;
              } else {
                result[0] += 0.03278688524590164;
                result[1] += 0;
                result[2] += 0.9016393442622951;
                result[3] += 0.03278688524590164;
                result[4] += 0;
                result[5] += 0.03278688524590164;
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ac0000))) ) ) {
                result[0] += 0.92;
                result[1] += 0;
                result[2] += 0.04;
                result[3] += 0;
                result[4] += 0.04;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.037037037037037035;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.9629629629629629;
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.2857142857142857;
                result[4] += 0.2857142857142857;
                result[5] += 0.42857142857142855;
              } else {
                result[0] += 0.2222222222222222;
                result[1] += 0;
                result[2] += 0.7777777777777778;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d50000))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a90000))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42aa0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.96875;
                result[4] += 0;
                result[5] += 0.03125;
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42f10000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d90000))) ) ) {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.6;
                result[3] += 0.04;
                result[4] += 0;
                result[5] += 0.36;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9166666666666666;
                result[3] += 0.08333333333333333;
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
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42da0000))) ) ) {
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
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c90000))) ) ) {
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
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ac0000))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
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
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b90000))) ) ) {
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
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b40000))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a50000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42da0000))) ) ) {
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
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c40000))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
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
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42df0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7948717948717948;
                result[3] += 0.20512820512820512;
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
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2857142857142857;
                result[3] += 0.5714285714285714;
                result[4] += 0;
                result[5] += 0.14285714285714285;
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
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
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
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cf0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9574468085106383;
                result[3] += 0.03546099290780142;
                result[4] += 0;
                result[5] += 0.0070921985815602835;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.797752808988764;
                result[3] += 0.20224719101123595;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8478260869565217;
                result[3] += 0.15217391304347827;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42db0000))) ) ) {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.7727272727272727;
                result[3] += 0.22727272727272727;
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
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
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
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42460000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42910000))) ) ) {
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
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42910000))) ) ) {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42840000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.2727272727272727;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.2727272727272727;
                result[5] += 0.45454545454545453;
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
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42810000))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428f0000))) ) ) {
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
              result[4] += 0;
              result[5] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42870000))) ) ) {
                result[0] += 0.03225806451612903;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.967741935483871;
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
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42400000))) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a20000))) ) ) {
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
                result[3] += 0.25;
                result[4] += 0.75;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ca0000))) ) ) {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426a0000))) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42aa0000))) ) ) {
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
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cd0000))) ) ) {
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42800000))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42830000))) ) ) {
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
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42850000))) ) ) {
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
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42600000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42800000))) ) ) {
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
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x423c0000))) ) ) {
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
                result[3] += 0.011146496815286623;
                result[4] += 0.011146496815286623;
                result[5] += 0.9777070063694268;
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429c0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.15789473684210525;
                result[4] += 0.17543859649122806;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08955223880597014;
                result[4] += 0.007462686567164179;
                result[5] += 0.9029850746268657;
              }
            }
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c00000))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x426e0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.125;
                result[4] += 0.5;
                result[5] += 0.375;
              } else {
                result[0] += 0.02040816326530612;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1326530612244898;
                result[4] += 0.01020408163265306;
                result[5] += 0.8367346938775511;
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
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b20000))) ) ) {
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
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.1276595744680851;
                result[4] += 0.06382978723404255;
                result[5] += 0.8085106382978723;
              } else {
                result[0] += 0.010526315789473684;
                result[1] += 0.031578947368421054;
                result[2] += 0;
                result[3] += 0.4421052631578947;
                result[4] += 0.042105263157894736;
                result[5] += 0.47368421052631576;
              }
            }
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a90000))) ) ) {
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
                result[3] += 0.9060402684563759;
                result[4] += 0.006711409395973154;
                result[5] += 0.087248322147651;
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a60000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.06976744186046512;
                result[3] += 0.3023255813953488;
                result[4] += 0;
                result[5] += 0.627906976744186;
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
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b40000))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42740000))) ) ) {
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
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
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
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c60000))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42260000))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ac0000))) ) ) {
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
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a60000))) ) ) {
                result[0] += 0.06097560975609756;
                result[1] += 0.012195121951219513;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9024390243902439;
                result[5] += 0.024390243902439025;
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
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42af0000))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42780000))) ) ) {
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
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
                result[0] += 0.2682926829268293;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.024390243902439025;
                result[4] += 0.6341463414634146;
                result[5] += 0.07317073170731707;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.045454545454545456;
                result[3] += 0.38636363636363635;
                result[4] += 0.022727272727272728;
                result[5] += 0.5454545454545454;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x425a0000))) ) ) {
                result[0] += 0.2727272727272727;
                result[1] += 0.6363636363636364;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.09090909090909091;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.07142857142857142;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0.7857142857142857;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
                result[0] += 0.8675496688741722;
                result[1] += 0.006622516556291391;
                result[2] += 0.002207505518763797;
                result[3] += 0.03090507726269316;
                result[4] += 0.08830022075055188;
                result[5] += 0.004415011037527594;
              } else {
                result[0] += 0.9981412639405205;
                result[1] += 0.0018587360594795538;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
                result[0] += 0;
                result[1] += 0.1875;
                result[2] += 0;
                result[3] += 0.6875;
                result[4] += 0.125;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.10638297872340426;
                result[2] += 0.02127659574468085;
                result[3] += 0.14893617021276595;
                result[4] += 0.02127659574468085;
                result[5] += 0.7021276595744681;
              }
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d60000))) ) ) {
                result[0] += 0;
                result[1] += 0.14285714285714285;
                result[2] += 0.7142857142857143;
                result[3] += 0.05714285714285714;
                result[4] += 0;
                result[5] += 0.08571428571428572;
              } else {
                result[0] += 0.31818181818181823;
                result[1] += 0;
                result[2] += 0.09090909090909093;
                result[3] += 0.18181818181818185;
                result[4] += 0.3636363636363637;
                result[5] += 0.04545454545454546;
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cf0000))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428e0000))) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
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
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a00000))) ) ) {
                result[0] += 0;
                result[1] += 0.75;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
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
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.11290322580645161;
                result[3] += 0.6612903225806451;
                result[4] += 0;
                result[5] += 0.22580645161290322;
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a00000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07142857142857142;
                result[4] += 0.7857142857142857;
                result[5] += 0.14285714285714285;
              } else {
                result[0] += 0;
                result[1] += 0.75;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.18181818181818182;
                result[2] += 0.18181818181818182;
                result[3] += 0.13636363636363635;
                result[4] += 0;
                result[5] += 0.5;
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.04938271604938272;
                result[1] += 0;
                result[2] += 0.617283950617284;
                result[3] += 0.2592592592592593;
                result[4] += 0;
                result[5] += 0.07407407407407408;
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b60000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.96875;
                result[3] += 0.015625;
                result[4] += 0;
                result[5] += 0.015625;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42dc0000))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42860000))) ) ) {
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
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c20000))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42db0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.21875;
                result[3] += 0.6875;
                result[4] += 0;
                result[5] += 0.09375;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.96;
                result[3] += 0.04;
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
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d50000))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c10000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
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
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42df0000))) ) ) {
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
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d30000))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ec0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.8942731277533039;
                result[3] += 0.0881057268722467;
                result[4] += 0.004405286343612335;
                result[5] += 0.013215859030837005;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.2857142857142857;
                result[3] += 0.7142857142857143;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bd0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                result[0] += 0.0032948929159802307;
                result[1] += 0;
                result[2] += 0.9752883031301482;
                result[3] += 0.0214168039538715;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b80000))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428e0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9951923076923077;
                result[5] += 0.004807692307692308;
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
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42760000))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42660000))) ) ) {
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
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x425e0000))) ) ) {
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
                result[4] += 0.9090909090909091;
                result[5] += 0.09090909090909091;
              }
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x425a0000))) ) ) {
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
              result[4] += 0;
              result[5] += 1;
            }
          } else {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42890000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
                result[0] += 0;
                result[1] += 0.6666666666666666;
                result[2] += 0;
                result[3] += 0.3333333333333333;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429c0000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
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
                result[3] += 0;
                result[4] += 0.4782608695652174;
                result[5] += 0.5217391304347826;
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42500000))) ) ) {
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
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42850000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.008347245409015025;
                result[4] += 0.00333889816360601;
                result[5] += 0.988313856427379;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.08588957055214724;
                result[4] += 0.1165644171779141;
                result[5] += 0.7975460122699386;
              }
            } else {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.13157894736842105;
                result[4] += 0.02631578947368421;
                result[5] += 0.8421052631578947;
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
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x426e0000))) ) ) {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429d0000))) ) ) {
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
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x429f0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.962962962962963;
                result[1] += 0.01851851851851852;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.01851851851851852;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42600000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.058823529411764705;
                result[4] += 0.9411764705882353;
                result[5] += 0;
              } else {
                result[0] += 0.004524886877828055;
                result[1] += 0.02262443438914027;
                result[2] += 0.004524886877828055;
                result[3] += 0.19457013574660634;
                result[4] += 0.1085972850678733;
                result[5] += 0.665158371040724;
              }
            } else {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.0330188679245283;
                result[3] += 0.7594339622641509;
                result[4] += 0;
                result[5] += 0.20754716981132076;
              } else {
                result[0] += 0.05;
                result[1] += 0;
                result[2] += 0.35;
                result[3] += 0.05;
                result[4] += 0;
                result[5] += 0.55;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42260000))) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a80000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9848484848484849;
                result[5] += 0.015151515151515152;
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
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426a0000))) ) ) {
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42860000))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429b0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.8888888888888888;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.1111111111111111;
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
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a00000))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425a0000))) ) ) {
                result[0] += 0;
                result[1] += 0.25;
                result[2] += 0;
                result[3] += 0.75;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.03225806451612903;
                result[1] += 0.03225806451612903;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.9032258064516129;
                result[5] += 0.03225806451612903;
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42780000))) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.6363636363636364;
                result[2] += 0;
                result[3] += 0.22727272727272727;
                result[4] += 0.13636363636363635;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42740000))) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.14285714285714285;
                result[2] += 0;
                result[3] += 0.14285714285714285;
                result[4] += 0.17857142857142858;
                result[5] += 0.5357142857142857;
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
                result[0] += 0.125;
                result[1] += 0;
                result[2] += 0.25;
                result[3] += 0;
                result[4] += 0.625;
                result[5] += 0;
              } else {
                result[0] += 0.9367088607594934;
                result[1] += 0.006815968841285295;
                result[2] += 0.005842259006815968;
                result[3] += 0.014605647517039919;
                result[4] += 0.032132424537487825;
                result[5] += 0.003894839337877312;
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42be0000))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
                result[0] += 0.016574585635359115;
                result[1] += 0.0055248618784530384;
                result[2] += 0.11049723756906077;
                result[3] += 0.19337016574585636;
                result[4] += 0.09392265193370165;
                result[5] += 0.580110497237569;
              } else {
                result[0] += 0.03636363636363636;
                result[1] += 0;
                result[2] += 0.18181818181818182;
                result[3] += 0.6363636363636364;
                result[4] += 0;
                result[5] += 0.14545454545454545;
              }
            } else {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
                result[0] += 0.4375;
                result[1] += 0.125;
                result[2] += 0;
                result[3] += 0.25;
                result[4] += 0.1875;
                result[5] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.875;
                result[3] += 0.03409090909090909;
                result[4] += 0;
                result[5] += 0.09090909090909091;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c00000))) ) ) {
              if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c20000))) ) ) {
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
                result[4] += 0.5;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42830000))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426c0000))) ) ) {
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
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
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
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.6666666666666666;
              } else {
                result[0] += 0.022727272727272728;
                result[1] += 0;
                result[2] += 0.11363636363636363;
                result[3] += 0.8409090909090909;
                result[4] += 0;
                result[5] += 0.022727272727272728;
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42da0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42dc0000))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ec0000))) ) ) {
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
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b00000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.38461538461538464;
                result[3] += 0.3076923076923077;
                result[4] += 0;
                result[5] += 0.3076923076923077;
              } else {
                result[0] += 0.01818181818181818;
                result[1] += 0;
                result[2] += 0.9272727272727272;
                result[3] += 0.05454545454545454;
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
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a00000))) ) ) {
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
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42bc0000))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
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
                result[3] += 0.42857142857142855;
                result[4] += 0;
                result[5] += 0.42857142857142855;
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c00000))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429e0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a80000))) ) ) {
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
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b60000))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ec0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9607843137254902;
                result[3] += 0.0392156862745098;
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
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42b10000))) ) ) {
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
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42930000))) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
                result[0] += 0.004132231404958679;
                result[1] += 0;
                result[2] += 0.9132231404958678;
                result[3] += 0.07438016528925621;
                result[4] += 0;
                result[5] += 0.008264462809917357;
              } else {
                result[0] += 0.001890359168241966;
                result[1] += 0;
                result[2] += 0.9773156899810964;
                result[3] += 0.015122873345935728;
                result[4] += 0;
                result[5] += 0.005671077504725898;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bd0000))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8888888888888888;
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
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x429c0000))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42860000))) ) ) {
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
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429a0000))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x425a0000))) ) ) {
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
                result[4] += 0.9285714285714286;
                result[5] += 0.07142857142857142;
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.3333333333333333;
                result[3] += 0.3333333333333333;
                result[4] += 0;
                result[5] += 0.3333333333333333;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426a0000))) ) ) {
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
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42600000))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42820000))) ) ) {
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
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b80000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.025034770514603615;
                result[4] += 0.008344923504867872;
                result[5] += 0.9666203059805285;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.7777777777777778;
                result[4] += 0;
                result[5] += 0.2222222222222222;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426c0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.75;
                result[5] += 0.25;
              } else {
                result[0] += 0.9565217391304348;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.043478260869565216;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.012048192771084338;
                result[3] += 0;
                result[4] += 0.10843373493975904;
                result[5] += 0.8795180722891566;
              } else {
                result[0] += 0;
                result[1] += 0.16831683168316833;
                result[2] += 0;
                result[3] += 0.2871287128712871;
                result[4] += 0.10891089108910891;
                result[5] += 0.43564356435643564;
              }
            }
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.28125;
                result[4] += 0.03125;
                result[5] += 0.6875;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cd0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.9239130434782609;
                result[4] += 0;
                result[5] += 0.07608695652173914;
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c70000))) ) ) {
                result[0] += 0.14736842105263157;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.8210526315789474;
                result[5] += 0.031578947368421054;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.02857142857142857;
                result[1] += 0.04285714285714286;
                result[2] += 0;
                result[3] += 0.2857142857142857;
                result[4] += 0.05714285714285714;
                result[5] += 0.5857142857142857;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42300000))) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.13333333333333333;
                result[1] += 0.11666666666666667;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.7166666666666667;
                result[5] += 0.03333333333333333;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
                result[0] += 0.14545454545454545;
                result[1] += 0.10909090909090909;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.6363636363636364;
                result[5] += 0.10909090909090909;
              } else {
                result[0] += 0.9088176352705412;
                result[1] += 0.01402805611222445;
                result[2] += 0;
                result[3] += 0.007014028056112225;
                result[4] += 0.062124248496993995;
                result[5] += 0.008016032064128258;
              }
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42df0000))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42700000))) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.028037383177570097;
                result[1] += 0.004672897196261683;
                result[2] += 0.01869158878504673;
                result[3] += 0.5046728971962617;
                result[4] += 0.03738317757009346;
                result[5] += 0.4065420560747664;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.09090909090909091;
                result[3] += 0.36363636363636365;
                result[4] += 0;
                result[5] += 0.5454545454545454;
              } else {
                result[0] += 0.07246376811594203;
                result[1] += 0;
                result[2] += 0.7971014492753623;
                result[3] += 0.057971014492753624;
                result[4] += 0;
                result[5] += 0.07246376811594203;
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e30000))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42aa0000))) ) ) {
                result[0] += 0.02857142857142857;
                result[1] += 0;
                result[2] += 0.7428571428571429;
                result[3] += 0;
                result[4] += 0.14285714285714285;
                result[5] += 0.08571428571428572;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.9565217391304348;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0.043478260869565216;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
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
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a20000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.8;
                result[4] += 0;
                result[5] += 0.2;
              } else {
                result[0] += 0.2857142857142857;
                result[1] += 0.7142857142857143;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bd0000))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c60000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.07317073170731707;
                result[4] += 0;
                result[5] += 0.926829268292683;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0.6666666666666666;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5555555555555556;
                result[3] += 0.1111111111111111;
                result[4] += 0;
                result[5] += 0.3333333333333333;
              }
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d30000))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.1724137931034483;
                result[3] += 0.3793103448275862;
                result[4] += 0;
                result[5] += 0.4482758620689655;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.07142857142857142;
                result[3] += 0.9285714285714286;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b50000))) ) ) {
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
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a10000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.20689655172413796;
                result[3] += 0.7586206896551725;
                result[4] += 0;
                result[5] += 0.03448275862068966;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.68;
                result[3] += 0.28;
                result[4] += 0;
                result[5] += 0.04;
              }
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.5882352941176471;
                result[3] += 0.4117647058823529;
                result[4] += 0;
                result[5] += 0;
              } else {
                result[0] += 0.058823529411764705;
                result[1] += 0;
                result[2] += 0.9411764705882353;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
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
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cb0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
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
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42940000))) ) ) {
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
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d30000))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42aa0000))) ) ) {
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
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42fe0000))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
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
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
                result[0] += 0;
                result[1] += 0.043478260869565216;
                result[2] += 0.6086956521739131;
                result[3] += 0.30434782608695654;
                result[4] += 0;
                result[5] += 0.043478260869565216;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9411764705882353;
                result[3] += 0.058823529411764705;
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
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42de0000))) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42880000))) ) ) {
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b50000))) ) ) {
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
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a70000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9848484848484849;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0.015151515151515152;
              } else {
                result[0] += 0.00847457627118644;
                result[1] += 0;
                result[2] += 0.7796610169491526;
                result[3] += 0.211864406779661;
                result[4] += 0;
                result[5] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0.9190751445086706;
                result[3] += 0.07514450867052024;
                result[4] += 0;
                result[5] += 0.005780346820809248;
              } else {
                result[0] += 0.004158004158004158;
                result[1] += 0;
                result[2] += 0.9833679833679834;
                result[3] += 0.012474012474012475;
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
