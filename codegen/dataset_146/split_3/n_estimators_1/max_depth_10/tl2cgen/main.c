
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
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)65.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)57.5) ) ) {
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
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)64) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)69) ) ) {
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)61.5) ) ) {
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
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
                  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)63.5) ) ) {
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
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
                  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)83) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.010432190760059613;
                      result[4] += 0.004470938897168405;
                      result[5] += 0.9850968703427719;
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
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)70) ) ) {
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
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)54.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)62) ) ) {
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
                if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)58) ) ) {
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)60) ) ) {
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
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
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
                      result[3] += 0.1595744680851064;
                      result[4] += 0.0425531914893617;
                      result[5] += 0.7978723404255319;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)72.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.1111111111111111;
                      result[4] += 0;
                      result[5] += 0.8888888888888888;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8;
                      result[4] += 0;
                      result[5] += 0.2;
                    }
                  }
                }
              }
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
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)56.5) ) ) {
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
                if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)69.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
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
                      result[3] += 0.047619047619047616;
                      result[4] += 0;
                      result[5] += 0.9523809523809523;
                    }
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
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
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)77) ) ) {
                      result[0] += 0;
                      result[1] += 0.04;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.8;
                      result[5] += 0.16;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.1;
                      result[3] += 0.7;
                      result[4] += 0;
                      result[5] += 0.2;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.4;
                      result[4] += 0.04;
                      result[5] += 0.56;
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
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.16666666666666666;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.8333333333333334;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
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
                    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9296875;
                      result[4] += 0;
                      result[5] += 0.0703125;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.42857142857142855;
                      result[4] += 0;
                      result[5] += 0.5714285714285714;
                    }
                  }
                } else {
                  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)89.5) ) ) {
                    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69.5) ) ) {
                      result[0] += 0.4285714285714286;
                      result[1] += 0;
                      result[2] += 0.28571428571428575;
                      result[3] += 0.28571428571428575;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.07142857142857142;
                      result[3] += 0.07142857142857142;
                      result[4] += 0;
                      result[5] += 0.8571428571428571;
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
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)73) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)108) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)51.5) ) ) {
                if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96) ) ) {
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
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)64.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)81) ) ) {
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
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)113) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)61.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.6666666666666666;
                      result[5] += 0.3333333333333333;
                    } else {
                      result[0] += 0;
                      result[1] += 0.010309278350515464;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.9896907216494846;
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
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
            }
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)60) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)82.5) ) ) {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
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
                      result[4] += 0;
                      result[5] += 0.9444444444444444;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    } else {
                      result[0] += 0.125;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.375;
                      result[4] += 0;
                      result[5] += 0.5;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)76) ) ) {
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
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
                  } else {
                    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8;
                      result[4] += 0;
                      result[5] += 0.2;
                    } else {
                      result[0] += 0.5714285714285714;
                      result[1] += 0.42857142857142855;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)77) ) ) {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
                      result[0] += 0.8;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.2;
                    } else {
                      result[0] += 0;
                      result[1] += 0.15384615384615385;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.8461538461538461;
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
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
                      result[0] += 0.1;
                      result[1] += 0.05;
                      result[2] += 0;
                      result[3] += 0.15;
                      result[4] += 0.7;
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
                    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)54.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                    } else {
                      result[0] += 0.9692765113974232;
                      result[1] += 0;
                      result[2] += 0.0019821605550049554;
                      result[3] += 0.003964321110009911;
                      result[4] += 0.02180376610505451;
                      result[5] += 0.002973240832507433;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)70.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                } else {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)103.5) ) ) {
                    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88) ) ) {
                      result[0] += 0;
                      result[1] += 0.4;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.6;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.6666666666666666;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
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
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
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
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)64.5) ) ) {
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
                      result[3] += 0.08333333333333333;
                      result[4] += 0;
                      result[5] += 0.9166666666666666;
                    }
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)107.5) ) ) {
                    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)67.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8333333333333334;
                      result[4] += 0.16666666666666666;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.421875;
                      result[4] += 0.03125;
                      result[5] += 0.546875;
                    }
                  } else {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)81.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
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
                }
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                  } else {
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
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
                  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
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
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.13953488372093023;
                      result[3] += 0.6976744186046512;
                      result[4] += 0;
                      result[5] += 0.16279069767441862;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.1;
                      result[3] += 0.1;
                      result[4] += 0.1;
                      result[5] += 0.7;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)97) ) ) {
                    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
                      result[0] += 0;
                      result[1] += 0.4;
                      result[2] += 0.4;
                      result[3] += 0;
                      result[4] += 0.2;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.09523809523809523;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.9047619047619048;
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
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)90.5) ) ) {
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
                if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)67.5) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)103.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)69.5) ) ) {
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
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)114.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
                  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
                    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
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
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)81) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0.5;
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
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)81) ) ) {
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
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)114) ) ) {
                  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)102) ) ) {
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
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)105.5) ) ) {
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
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
              } else {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)90.5) ) ) {
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
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89) ) ) {
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
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
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
                      result[2] += 0.1;
                      result[3] += 0.9;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79) ) ) {
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
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
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
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)113.5) ) ) {
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
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
                if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105) ) ) {
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
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86) ) ) {
                  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77.5) ) ) {
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
                    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99.5) ) ) {
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
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)116.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)103.5) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
                if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83) ) ) {
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
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)116.5) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
                  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
                    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)81.5) ) ) {
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
                      result[2] += 0.7857142857142857;
                      result[3] += 0.17857142857142858;
                      result[4] += 0;
                      result[5] += 0.03571428571428571;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9230769230769231;
                      result[3] += 0.07692307692307693;
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
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)105) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
              } else {
                if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)88.5) ) ) {
                  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)104) ) ) {
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
                    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)90) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0;
                      result[2] += 0.6666666666666666;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)106.5) ) ) {
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)106.5) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)114) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)112.5) ) ) {
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
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)101.5) ) ) {
                  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)91) ) ) {
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
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)111) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
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
            }
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81.5) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)106.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86.5) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)116.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)118.5) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)110) ) ) {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9863013698630136;
                      result[3] += 0.0136986301369863;
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
                  } else {
                    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.5833333333333334;
                      result[3] += 0.4166666666666667;
                      result[4] += 0;
                      result[5] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.9523809523809523;
                      result[3] += 0.047619047619047616;
                      result[4] += 0;
                      result[5] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)114.5) ) ) {
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
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)110) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
              } else {
                if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85) ) ) {
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
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)122.5) ) ) {
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
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)120.5) ) ) {
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
