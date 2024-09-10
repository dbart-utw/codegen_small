
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)67.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                    result[6] += 0;
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
              result[6] += 0;
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
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)76) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-3) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)66) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)150) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-12.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-209.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-420) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-17) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0;
                      result[2] += 0.5;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)13) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)51) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)23) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.09090909090909091;
                      result[3] += 0.9090909090909091;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.7544642857142857;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.24553571428571427;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.2857142857142857;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.7142857142857143;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                      result[0] += 0.9630252100840336;
                      result[1] += 0;
                      result[2] += 0.005042016806722689;
                      result[3] += 0.031932773109243695;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.6666666666666666;
                      result[4] += 0;
                      result[5] += 0.3333333333333333;
                      result[6] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.7857142857142857;
                      result[1] += 0;
                      result[2] += 0.21428571428571427;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3) ) ) {
                      result[0] += 0.8181818181818182;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.18181818181818182;
                    } else {
                      result[0] += 0.13333333333333336;
                      result[1] += 0;
                      result[2] += 0.7333333333333334;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.13333333333333336;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9565217391304348;
                      result[1] += 0;
                      result[2] += 0.043478260869565216;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.5555555555555556;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.4444444444444444;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)75.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9676616915422885;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.03233830845771144;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)44) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.7619047619047619;
                      result[1] += 0;
                      result[2] += 0.23809523809523808;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9907894736842106;
                      result[1] += 0;
                      result[2] += 0.007894736842105263;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.0013157894736842105;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
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
              result[6] += 0;
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
                      result[0] += 0.9690721649484536;
                      result[1] += 0;
                      result[2] += 0.010309278350515464;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.020618556701030927;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)24) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
                      result[0] += 0.9361702127659575;
                      result[1] += 0;
                      result[2] += 0.047872340425531915;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.015957446808510637;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                      result[0] += 0.9411764705882353;
                      result[1] += 0;
                      result[2] += 0.058823529411764705;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)36) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
                      result[0] += 0.7916666666666666;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.20833333333333334;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9961300309597523;
                      result[1] += 0;
                      result[2] += 0.0030959752321981426;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.0007739938080495357;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)57) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)122) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.0058997050147492625;
                      result[2] += 0;
                      result[3] += 0.9941002949852508;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
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
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.9521276595744681;
                      result[1] += 0;
                      result[2] += 0.03723404255319149;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.010638297872340425;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9854014598540146;
                      result[1] += 0;
                      result[2] += 0.014598540145985401;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-2) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
                      result[0] += 0.9974554707379135;
                      result[1] += 0;
                      result[2] += 0.002544529262086514;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
                      result[0] += 0.9929356357927787;
                      result[1] += 0;
                      result[2] += 0.00706436420722135;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9708029197080292;
                      result[1] += 0;
                      result[2] += 0.021897810218978103;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.0072992700729927005;
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
                result[6] += 0;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                      result[0] += 0.9696969696969697;
                      result[1] += 0;
                      result[2] += 0.030303030303030304;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)30.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.9927360774818402;
                      result[1] += 0.007263922518159807;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
                      result[0] += 0.9976580796252927;
                      result[1] += 0;
                      result[2] += 0.00234192037470726;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0.5;
                  result[3] += 0.5;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
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
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)102) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)108) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)29) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)17.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
                      result[0] += 0.8;
                      result[1] += 0;
                      result[2] += 0.2;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.5789473684210527;
                      result[1] += 0;
                      result[2] += 0.3684210526315789;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.05263157894736842;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)53.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-195.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                      result[0] += 0.7058823529411765;
                      result[1] += 0;
                      result[2] += 0.17647058823529413;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.11764705882352941;
                    } else {
                      result[0] += 0.8983050847457628;
                      result[1] += 0;
                      result[2] += 0.1016949152542373;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
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
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)11.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-18.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50.5) ) ) {
                      result[0] += 0.8125;
                      result[1] += 0;
                      result[2] += 0.1875;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)17) ) ) {
                      result[0] += 0.9230769230769231;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.07692307692307693;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9984962406015038;
                      result[1] += 0;
                      result[2] += 0.0015037593984962407;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)18) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-14) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6.5) ) ) {
                      result[0] += 0.71875;
                      result[1] += 0;
                      result[2] += 0.28125;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)73) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)16) ) ) {
                      result[0] += 0.85;
                      result[1] += 0;
                      result[2] += 0.05;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.1;
                    } else {
                      result[0] += 0.6;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.4;
                    }
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                      result[0] += 0.4;
                      result[1] += 0;
                      result[2] += 0.4;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.2;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70) ) ) {
                      result[0] += 0.7777777777777778;
                      result[1] += 0;
                      result[2] += 0.2222222222222222;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)64) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)66) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)72) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
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
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)5.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-37) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)68) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0.5;
                    result[3] += 0.5;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.5714285714285714;
                      result[1] += 0.42857142857142855;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
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
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)122) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)22.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)35.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)52) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0.5;
                result[2] += 0;
                result[3] += 0.5;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-4.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)56) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.9838709677419355;
                      result[1] += 0;
                      result[2] += 0.016129032258064516;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9871794871794872;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.01282051282051282;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)26) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.65;
                      result[2] += 0;
                      result[3] += 0.35;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
                      result[0] += 0.9797297297297297;
                      result[1] += 0;
                      result[2] += 0.013513513513513514;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.006756756756756757;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                      result[0] += 0.9888178913738019;
                      result[1] += 0;
                      result[2] += 0.009584664536741214;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.001597444089456869;
                    } else {
                      result[0] += 0.9980191482337405;
                      result[1] += 0.0006602839220864972;
                      result[2] += 0.0013205678441729944;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)44.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)195) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)42) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9836601307189542;
                      result[1] += 0;
                      result[2] += 0.016339869281045753;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)92.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.8909090909090909;
                      result[1] += 0;
                      result[2] += 0.10909090909090909;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)4) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)1) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.90625;
                      result[1] += 0;
                      result[2] += 0.09375;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
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
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)35.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
                      result[0] += 0.8235294117647058;
                      result[1] += 0;
                      result[2] += 0.17647058823529413;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9863013698630136;
                      result[1] += 0;
                      result[2] += 0.0136986301369863;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
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
              result[6] += 0;
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
                      result[0] += 0.9911504424778761;
                      result[1] += 0;
                      result[2] += 0.008849557522123894;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
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
                result[6] += 0;
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
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.1;
                      result[3] += 0.9;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
                      result[0] += 0.4722222222222222;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.5277777777777778;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.024096385542168676;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9759036144578314;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)12) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
                      result[0] += 0;
                      result[1] += 0.6;
                      result[2] += 0;
                      result[3] += 0.4;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.0021152829190904283;
                      result[1] += 0.007932310946589107;
                      result[2] += 0.020624008461131677;
                      result[3] += 0.965097831835008;
                      result[4] += 0.0015864621893178213;
                      result[5] += 0.0026441036488630354;
                      result[6] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)5.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-10) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)52.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)122) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
                      result[0] += 0.8666666666666667;
                      result[1] += 0;
                      result[2] += 0.06666666666666667;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.06666666666666667;
                    } else {
                      result[0] += 0.2;
                      result[1] += 0;
                      result[2] += 0.6;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.2;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50.5) ) ) {
                      result[0] += 0.98;
                      result[1] += 0;
                      result[2] += 0.02;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
                      result[0] += 0.9953051643192489;
                      result[1] += 0;
                      result[2] += 0.004694835680751174;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.94;
                      result[1] += 0;
                      result[2] += 0.06;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)26) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)11.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)26.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)911) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)3.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.8148148148148148;
                      result[1] += 0;
                      result[2] += 0.18518518518518517;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9846153846153847;
                      result[1] += 0;
                      result[2] += 0.015384615384615385;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)8) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
                      result[0] += 0.8333333333333334;
                      result[1] += 0;
                      result[2] += 0.16666666666666666;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)32.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                      result[0] += 0.9915611814345991;
                      result[1] += 0;
                      result[2] += 0.008438818565400843;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
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
              result[6] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-188.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                      result[0] += 0.9978179551122195;
                      result[1] += 0.0006234413965087282;
                      result[2] += 0.0015586034912718205;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9849537037037037;
                      result[1] += 0.003472222222222222;
                      result[2] += 0.009259259259259259;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.0023148148148148147;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
                      result[0] += 0.8899082568807339;
                      result[1] += 0;
                      result[2] += 0.08256880733944955;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.027522935779816515;
                    } else {
                      result[0] += 0.9932821497120922;
                      result[1] += 0;
                      result[2] += 0.005758157389635317;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.0009596928982725527;
                    }
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)1185.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                      result[0] += 0.9880478087649402;
                      result[1] += 0;
                      result[2] += 0.01195219123505976;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)10) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
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
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-19) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)56) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.10810810810810811;
                      result[3] += 0.8918918918918919;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-4) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.875;
                      result[1] += 0;
                      result[2] += 0.125;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)28.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.15;
                      result[3] += 0.85;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)79.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                      result[0] += 0.24369747899159663;
                      result[1] += 0;
                      result[2] += 0.03361344537815126;
                      result[3] += 0.7226890756302521;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.16666666666666666;
                      result[3] += 0.8333333333333334;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)50) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
                      result[0] += 0.84375;
                      result[1] += 0;
                      result[2] += 0.15625;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)32) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)45) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)45) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.8888888888888888;
                      result[1] += 0;
                      result[2] += 0.1111111111111111;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
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
                result[6] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
                      result[0] += 0.996268656716418;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.0037313432835820895;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8888888888888888;
                      result[4] += 0.1111111111111111;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)29) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)58) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9966159052453468;
                      result[4] += 0;
                      result[5] += 0.00338409475465313;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)24.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
                      result[0] += 0.991044776119403;
                      result[1] += 0;
                      result[2] += 0.008955223880597015;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)107) ) ) {
                      result[0] += 0.4444444444444445;
                      result[1] += 0;
                      result[2] += 0.38888888888888895;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.16666666666666669;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)34) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)53.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
                      result[0] += 0.9855072463768116;
                      result[1] += 0;
                      result[2] += 0.014492753623188406;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.8333333333333334;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.16666666666666666;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9916666666666667;
                      result[1] += 0;
                      result[2] += 0.008333333333333333;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)35.5) ) ) {
                      result[0] += 0.9807692307692307;
                      result[1] += 0;
                      result[2] += 0.019230769230769232;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9952380952380953;
                      result[4] += 0;
                      result[5] += 0.004761904761904762;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.02666666666666667;
                      result[2] += 0;
                      result[3] += 0.9733333333333334;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                      result[0] += 0.9950248756218906;
                      result[1] += 0;
                      result[2] += 0.004975124378109453;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
                      result[0] += 0.9430051813471503;
                      result[1] += 0;
                      result[2] += 0.05699481865284974;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)20) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.020833333333333332;
                      result[2] += 0;
                      result[3] += 0.9791666666666666;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)26) ) ) {
                      result[0] += 0.9960278053624627;
                      result[1] += 0;
                      result[2] += 0.003972194637537239;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.8;
                      result[4] += 0.2;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.8;
                      result[2] += 0;
                      result[3] += 0.2;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.5;
                      result[3] += 0.5;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
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
              result[6] += 0;
            }
          }
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)24.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)48) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)30) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0.3333333333333333;
                  result[2] += 0;
                  result[3] += 0.6666666666666666;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
                result[6] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)62) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                      result[0] += 0.9492753623188406;
                      result[1] += 0;
                      result[2] += 0.050724637681159424;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9880952380952381;
                      result[1] += 0.011904761904761904;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
                      result[0] += 0.9930922389272654;
                      result[1] += 0.0008126777732629012;
                      result[2] += 0.004469727752945957;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.0016253555465258025;
                    } else {
                      result[0] += 0.9519650655021834;
                      result[1] += 0;
                      result[2] += 0.034934497816593885;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.013100436681222707;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
                      result[0] += 0.9974587039390089;
                      result[1] += 0;
                      result[2] += 0.0025412960609911056;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9994931576279777;
                      result[1] += 0;
                      result[2] += 0.0005068423720223011;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)76) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)45) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0.6666666666666666;
                    result[3] += 0.3333333333333333;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)26) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)26.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.7222222222222222;
                      result[1] += 0;
                      result[2] += 0.25;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.027777777777777776;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.956896551724138;
                      result[1] += 0;
                      result[2] += 0.03448275862068966;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.008620689655172415;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)4) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)109) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)2) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)89.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)1058) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.8461538461538461;
                      result[1] += 0;
                      result[2] += 0.15384615384615385;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9295774647887324;
                      result[1] += 0;
                      result[2] += 0.07042253521126761;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
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
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.5833333333333334;
                      result[1] += 0;
                      result[2] += 0.4166666666666667;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
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
                result[6] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-141) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-52.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-21) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)10) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)28.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.0003459010722933241;
                      result[3] += 0.9996540989277066;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.4827586206896552;
                      result[2] += 0.5172413793103449;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.017777777777777778;
                      result[1] += 0.006666666666666667;
                      result[2] += 0.0044444444444444444;
                      result[3] += 0.9711111111111111;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)123.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)118) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-11) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-18.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-19.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.4;
                      result[1] += 0;
                      result[2] += 0.6;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
                      result[0] += 0.95;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.05;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.9375;
                      result[1] += 0;
                      result[2] += 0.03125;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.03125;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)3) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)179) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.5;
                      result[3] += 0.5;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                      result[0] += 0.9877862595419847;
                      result[1] += 0;
                      result[2] += 0.010687022900763359;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.0015267175572519084;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
              result[6] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)42) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)73) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9142857142857143;
                      result[1] += 0;
                      result[2] += 0.05714285714285714;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.02857142857142857;
                    }
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                      result[0] += 0.33333333333333337;
                      result[1] += 0;
                      result[2] += 0.5000000000000001;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.16666666666666669;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-191) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)107) ) ) {
                      result[0] += 0.8823529411764706;
                      result[1] += 0;
                      result[2] += 0.11764705882352941;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)110.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)16.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9130434782608695;
                      result[1] += 0;
                      result[2] += 0.08695652173913043;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)20) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
                      result[0] += 0.95;
                      result[1] += 0;
                      result[2] += 0.05;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9787234042553191;
                      result[1] += 0;
                      result[2] += 0.02127659574468085;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
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
                result[6] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-79) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)57) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)51) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
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
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0.5;
                    result[3] += 0.5;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
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
              result[6] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6419.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                      result[0] += 0.9978070175438597;
                      result[1] += 0;
                      result[2] += 0.0021929824561403508;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9855907780979827;
                      result[1] += 0;
                      result[2] += 0.01440922190201729;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9978339350180505;
                      result[1] += 0;
                      result[2] += 0.0007220216606498195;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.001444043321299639;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                      result[0] += 0.9322033898305084;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.06779661016949153;
                    } else {
                      result[0] += 0.996268656716418;
                      result[1] += 0;
                      result[2] += 0.0037313432835820895;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)12) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.8461538461538461;
                      result[2] += 0;
                      result[3] += 0.15384615384615385;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                      result[0] += 0.9813084112149533;
                      result[1] += 0;
                      result[2] += 0.018691588785046728;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)17) ) ) {
                      result[0] += 0.9536784741144414;
                      result[1] += 0;
                      result[2] += 0.04087193460490463;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.005449591280653951;
                    } else {
                      result[0] += 0.9980988593155894;
                      result[1] += 0;
                      result[2] += 0.0019011406844106464;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9931972789115646;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.006802721088435374;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9751434034416826;
                      result[1] += 0.0076481835564053535;
                      result[2] += 0.0028680688336520078;
                      result[3] += 0.014340344168260038;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)30.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.96;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.04;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
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
                result[6] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)16) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)19.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)19) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)108) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
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
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)29) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)27.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)4.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)20) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
                      result[0] += 0.8947368421052632;
                      result[1] += 0;
                      result[2] += 0.08421052631578947;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.021052631578947368;
                    } else {
                      result[0] += 0.8051948051948052;
                      result[1] += 0;
                      result[2] += 0.18181818181818182;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.012987012987012988;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)90) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)79.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-101) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)246) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0.5;
                  result[3] += 0.5;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
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
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)911) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)75) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.07692307692307693;
                      result[2] += 0;
                      result[3] += 0.9230769230769231;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
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
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9876543209876543;
                      result[1] += 0;
                      result[2] += 0.012345679012345678;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-13.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.4;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.6;
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
                result[6] += 0;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.967032967032967;
                      result[1] += 0;
                      result[2] += 0.03296703296703297;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
                      result[0] += 0.9992464204973625;
                      result[1] += 0;
                      result[2] += 0.0007535795026375283;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9977011494252873;
                      result[1] += 0;
                      result[2] += 0.0022988505747126436;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)12) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9230769230769231;
                      result[1] += 0;
                      result[2] += 0.05128205128205128;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.02564102564102564;
                    }
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.9960159362549801;
                      result[1] += 0;
                      result[2] += 0.00398406374501992;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
                      result[0] += 0.9798165137614679;
                      result[1] += 0;
                      result[2] += 0.01651376146788991;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.003669724770642202;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
                      result[0] += 0.9984012789768185;
                      result[1] += 0;
                      result[2] += 0.0015987210231814548;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)48) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)30) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)28.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
                      result[0] += 0.9459459459459459;
                      result[1] += 0;
                      result[2] += 0.04054054054054054;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.013513513513513514;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)53.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 1;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)216) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0;
                      result[2] += 0.6666666666666666;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-12.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-106) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-14) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)46.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)171) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-15.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
                      result[0] += 0.8666666666666667;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.13333333333333333;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.42857142857142855;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.5714285714285714;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
                      result[0] += 0.8402061855670103;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.15979381443298968;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.6;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.4;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                      result[0] += 0.9993224932249323;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.0006775067750677507;
                    } else {
                      result[0] += 0.956989247311828;
                      result[1] += 0;
                      result[2] += 0.043010752688172046;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 1;
                      result[6] += 0;
                    } else {
                      result[0] += 0.8928571428571429;
                      result[1] += 0;
                      result[2] += 0.07142857142857142;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.03571428571428571;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.02531645569620253;
                      result[3] += 0.9746835443037974;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)2.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)40) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.6666666666666666;
                      result[4] += 0;
                      result[5] += 0.3333333333333333;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.006896551724137931;
                      result[2] += 0;
                      result[3] += 0.993103448275862;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.8222222222222222;
                      result[1] += 0;
                      result[2] += 0.17777777777777778;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.926829268292683;
                      result[1] += 0;
                      result[2] += 0.07317073170731707;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.6666666666666666;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9891304347826086;
                      result[1] += 0;
                      result[2] += 0.010869565217391304;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.6666666666666666;
                      result[1] += 0;
                      result[2] += 0.3333333333333333;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                      result[0] += 0;
                      result[1] += 0.5714285714285714;
                      result[2] += 0;
                      result[3] += 0.42857142857142855;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9405405405405406;
                      result[1] += 0;
                      result[2] += 0.05405405405405406;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.005405405405405406;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                      result[0] += 0.9893617021276596;
                      result[1] += 0;
                      result[2] += 0.005319148936170213;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.005319148936170213;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)75.5) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.9607843137254902;
                      result[1] += 0;
                      result[2] += 0.0392156862745098;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)1055.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4918.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.8;
                      result[1] += 0;
                      result[2] += 0.2;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
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
              result[6] += 0;
            }
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.5;
                      result[1] += 0;
                      result[2] += 0.5;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.8846153846153846;
                      result[1] += 0;
                      result[2] += 0.11538461538461539;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
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
              result[6] += 0;
            }
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.96;
                      result[1] += 0;
                      result[2] += 0.04;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.5) ) ) {
                      result[0] += 0.8666666666666667;
                      result[1] += 0;
                      result[2] += 0.13333333333333333;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
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
              result[6] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)11631) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)24) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)95) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)58) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)34) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)29) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.03333333333333333;
                      result[2] += 0.06666666666666667;
                      result[3] += 0.9;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.2;
                      result[4] += 0.2;
                      result[5] += 0.6;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.7777777777777778;
                      result[3] += 0;
                      result[4] += 0.2222222222222222;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.0012492192379762648;
                      result[2] += 0;
                      result[3] += 0.9987507807620237;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.005431093007467753;
                      result[1] += 0;
                      result[2] += 0.013577732518669382;
                      result[3] += 0.9809911744738629;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)7.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9943502824858758;
                      result[1] += 0;
                      result[2] += 0.005649717514124294;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
                      result[0] += 0.9502487562189055;
                      result[1] += 0;
                      result[2] += 0.03482587064676617;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.014925373134328358;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)4.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.04285714285714286;
                      result[3] += 0.9571428571428572;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
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
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
                      result[0] += 0.9918032786885246;
                      result[1] += 0;
                      result[2] += 0.00819672131147541;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-186.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)20) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
                      result[0] += 0.8352941176470589;
                      result[1] += 0;
                      result[2] += 0.12941176470588237;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.03529411764705882;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.6666666666666666;
                    }
                  }
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
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5536) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)11.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)67.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
                    result[0] += 0;
                    result[1] += 0.6;
                    result[2] += 0;
                    result[3] += 0.4;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
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
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.7894736842105263;
                      result[1] += 0;
                      result[2] += 0.21052631578947367;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.975;
                      result[1] += 0;
                      result[2] += 0.025;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
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
                result[6] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.6923076923076924;
                      result[1] += 0;
                      result[2] += 0.2692307692307693;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.03846153846153847;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 1;
                }
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9;
                      result[1] += 0;
                      result[2] += 0.1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.978021978021978;
                      result[1] += 0;
                      result[2] += 0.02197802197802198;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
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
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)3) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.5;
                      result[1] += 0;
                      result[2] += 0.5;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
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
              result[6] += 0;
            }
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-18.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                      result[0] += 0.8518518518518519;
                      result[1] += 0;
                      result[2] += 0.14814814814814814;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                      result[0] += 0.9327354260089686;
                      result[1] += 0;
                      result[2] += 0.04932735426008968;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.017937219730941704;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
                      result[0] += 0.9975026757046022;
                      result[1] += 0;
                      result[2] += 0.0024973242953977882;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9829059829059829;
                      result[1] += 0;
                      result[2] += 0.017094017094017096;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-105) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)45) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)73) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                      result[0] += 0.9;
                      result[1] += 0;
                      result[2] += 0.05;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.05;
                    } else {
                      result[0] += 0.5833333333333334;
                      result[1] += 0;
                      result[2] += 0.25;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.16666666666666666;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-14.5) ) ) {
                      result[0] += 0.8;
                      result[1] += 0;
                      result[2] += 0.2;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.7727272727272727;
                      result[1] += 0;
                      result[2] += 0.22727272727272727;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.967741935483871;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.03225806451612903;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)2.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-45.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)42) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 1;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 1;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9880952380952381;
                      result[4] += 0;
                      result[5] += 0.011904761904761904;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0.5;
                    result[2] += 0;
                    result[3] += 0.5;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)2) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0;
                      result[2] += 0.6666666666666666;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
                      result[0] += 0.9568345323741008;
                      result[1] += 0;
                      result[2] += 0.04316546762589928;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.9507042253521126;
                      result[1] += 0;
                      result[2] += 0.04929577464788732;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)4) ) ) {
                      result[0] += 0.3333333333333333;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.6666666666666666;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
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
              result[6] += 0;
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6.5) ) ) {
                      result[0] += 0.8;
                      result[1] += 0;
                      result[2] += 0.2;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
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
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                      result[0] += 0.9886363636363636;
                      result[1] += 0;
                      result[2] += 0.011363636363636364;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
                      result[0] += 0.9597523219814241;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.04024767801857585;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.8390243902439024;
                      result[1] += 0;
                      result[2] += 0.14634146341463414;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.014634146341463415;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)14) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)10) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.14285714285714285;
                      result[3] += 0.8571428571428571;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)17) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9375;
                      result[1] += 0;
                      result[2] += 0.05;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.0125;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.94;
                      result[1] += 0;
                      result[2] += 0.06;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9975308641975309;
                      result[1] += 0;
                      result[2] += 0.0024691358024691358;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-19.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.9534883720930233;
                      result[4] += 0;
                      result[5] += 0.046511627906976744;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.03404255319148936;
                      result[3] += 0.9659574468085106;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
                      result[0] += 0.9722222222222222;
                      result[1] += 0;
                      result[2] += 0.027777777777777776;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0.25;
                    result[3] += 0.75;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.5833333333333334;
                      result[1] += 0;
                      result[2] += 0.4166666666666667;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)35.5) ) ) {
                      result[0] += 0.8333333333333334;
                      result[1] += 0;
                      result[2] += 0.16666666666666666;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
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
                result[6] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9736842105263158;
                      result[1] += 0;
                      result[2] += 0.02631578947368421;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
                      result[0] += 0.9952380952380953;
                      result[1] += 0;
                      result[2] += 0.004761904761904762;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.8095238095238095;
                      result[1] += 0;
                      result[2] += 0.19047619047619047;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)2) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 1;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
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
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)28.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)14) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.06153846153846154;
                      result[2] += 0;
                      result[3] += 0.9384615384615385;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.017543859649122806;
                      result[2] += 0;
                      result[3] += 0.9824561403508771;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
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
                result[6] += 0;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)28) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.01;
                      result[2] += 0;
                      result[3] += 0.99;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                      result[0] += 0.75;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0.25;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.010416666666666666;
                      result[3] += 0.9895833333333334;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.010416666666666666;
                      result[3] += 0.9895833333333334;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)19) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)21.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 1;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-18.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.8;
                      result[1] += 0;
                      result[2] += 0.2;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)17) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.8431372549019608;
                      result[1] += 0;
                      result[2] += 0.09803921568627451;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.058823529411764705;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
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
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.8837209302325582;
                      result[1] += 0;
                      result[2] += 0.09302325581395349;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.023255813953488372;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                      result[0] += 0.9940828402366864;
                      result[1] += 0;
                      result[2] += 0.005917159763313609;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)2) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0.3333333333333333;
              result[3] += 0.6666666666666666;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)53) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)20) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.7746478873239436;
                      result[1] += 0;
                      result[2] += 0.16901408450704225;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.056338028169014086;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)16) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9444444444444444;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.05555555555555555;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)109.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)11.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)123.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)126.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)118) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)19) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
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
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)110) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)11) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)6.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-18.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)49.5) ) ) {
                      result[0] += 0.4;
                      result[1] += 0;
                      result[2] += 0.6;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)13) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)34) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
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
                result[6] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)30) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-10.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9743589743589743;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.02564102564102564;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.8928571428571429;
                      result[1] += 0;
                      result[2] += 0.10714285714285714;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                      result[0] += 0.9803921568627451;
                      result[1] += 0;
                      result[2] += 0.0196078431372549;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
                      result[0] += 0.33333333333333337;
                      result[1] += 0;
                      result[2] += 0.5000000000000001;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.16666666666666669;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)107) ) ) {
                      result[0] += 0.5;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.5;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
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
              result[6] += 0;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)60) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-43.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)24.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0.25;
                    result[2] += 0;
                    result[3] += 0.75;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)114.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)23.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)31) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)29) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)18) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.9936603269936604;
                      result[1] += 0.002002002002002002;
                      result[2] += 0.004004004004004004;
                      result[3] += 0.000333667000333667;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9988873435326843;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.0011126564673157164;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.9986301369863013;
                      result[1] += 0;
                      result[2] += 0.0013698630136986301;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.890909090909091;
                      result[1] += 0;
                      result[2] += 0.10000000000000002;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.009090909090909092;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                      result[0] += 0.7272727272727273;
                      result[1] += 0;
                      result[2] += 0.2727272727272727;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9986962190352021;
                      result[1] += 0;
                      result[2] += 0.001303780964797914;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)62) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.2857142857142857;
                      result[3] += 0.7142857142857143;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)50.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)16.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)6.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.9444444444444444;
                      result[1] += 0;
                      result[2] += 0.05555555555555555;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)46) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-3.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)20) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)46.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0.6666666666666666;
              result[3] += 0.3333333333333333;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-6) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-12) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)28.5) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104.5) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
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
                result[6] += 0;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9512195121951219;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.04878048780487805;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9866071428571429;
                      result[1] += 0;
                      result[2] += 0.013392857142857142;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.8656716417910447;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.13432835820895522;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
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
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.09375;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.90625;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)45.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
                      result[0] += 0.29577464788732394;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.704225352112676;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
                      result[0] += 0.7317073170731707;
                      result[1] += 0;
                      result[2] += 0.24390243902439024;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.024390243902439025;
                    } else {
                      result[0] += 0.96875;
                      result[1] += 0;
                      result[2] += 0.03125;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
                      result[0] += 0.625;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.375;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0;
                      result[2] += 0.5;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)60.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-21.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 1;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9891891891891892;
                      result[1] += 0;
                      result[2] += 0.010810810810810811;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9973544973544974;
                      result[1] += 0.001322751322751323;
                      result[2] += 0;
                      result[3] += 0.001322751322751323;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9636363636363636;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.03636363636363636;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                      result[0] += 0.9976359338061466;
                      result[1] += 0;
                      result[2] += 0.002364066193853428;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)17) ) ) {
                      result[0] += 0.9727272727272728;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.02727272727272727;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
                      result[0] += 0.8260869565217391;
                      result[1] += 0;
                      result[2] += 0.17391304347826086;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9629629629629629;
                      result[1] += 0;
                      result[2] += 0.037037037037037035;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)19) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)26) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)13) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)54) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)17) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.7894736842105263;
                      result[1] += 0;
                      result[2] += 0.21052631578947367;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)79.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.98;
                      result[1] += 0;
                      result[2] += 0.02;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.994535519125683;
                      result[1] += 0;
                      result[2] += 0.00546448087431694;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)33.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9593220338983051;
                      result[1] += 0;
                      result[2] += 0.020338983050847456;
                      result[3] += 0;
                      result[4] += 0.006779661016949152;
                      result[5] += 0.013559322033898305;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)6.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)56.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)89.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.7575757575757576;
                      result[1] += 0;
                      result[2] += 0.24242424242424243;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.8387096774193549;
                      result[1] += 0;
                      result[2] += 0.16129032258064516;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
                      result[0] += 0.6923076923076923;
                      result[1] += 0;
                      result[2] += 0.3076923076923077;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
                      result[0] += 0.975609756097561;
                      result[1] += 0;
                      result[2] += 0.024390243902439025;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9951807228915662;
                      result[1] += 0;
                      result[2] += 0.004819277108433735;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
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
                result[6] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)4) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-102.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)25.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)17.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-16) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-29.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.038461538461538464;
                      result[3] += 0.9615384615384616;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
                      result[0] += 0;
                      result[1] += 0.06716417910447761;
                      result[2] += 0;
                      result[3] += 0.9328358208955224;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.55;
                      result[2] += 0;
                      result[3] += 0.45;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
                      result[0] += 0;
                      result[1] += 0.0017064846416382253;
                      result[2] += 0.010238907849829351;
                      result[3] += 0.984641638225256;
                      result[4] += 0;
                      result[5] += 0.0034129692832764505;
                      result[6] += 0;
                    } else {
                      result[0] += 0.05309734513274336;
                      result[1] += 0.10619469026548672;
                      result[2] += 0.19469026548672566;
                      result[3] += 0.6460176991150443;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-18.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50.5) ) ) {
                      result[0] += 0.5;
                      result[1] += 0;
                      result[2] += 0.5;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)28) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
                      result[0] += 0.9401709401709402;
                      result[1] += 0;
                      result[2] += 0.042735042735042736;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.017094017094017096;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.796875;
                      result[1] += 0;
                      result[2] += 0.15625;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.046875;
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
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9855072463768116;
                      result[1] += 0;
                      result[2] += 0.014492753623188406;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)52) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
            result[6] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-191) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.8476190476190476;
                      result[1] += 0;
                      result[2] += 0.12380952380952381;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.02857142857142857;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)55) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
              result[6] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)11.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-21) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0.5;
                  result[2] += 0;
                  result[3] += 0.5;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 1;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 1;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)103.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-10) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)46) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-33) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-35.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 1;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)52) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)25.5) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)4.5) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
                      result[0] += 0.9606299212598425;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0.03937007874015748;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)107) ) ) {
                      result[0] += 0.8108108108108109;
                      result[1] += 0;
                      result[2] += 0.08108108108108109;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.10810810810810811;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-4) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.4418604651162791;
                      result[1] += 0;
                      result[2] += 0.46511627906976744;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.09302325581395349;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8.5) ) ) {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)49.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.946236559139785;
                      result[1] += 0;
                      result[2] += 0.053763440860215055;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
                      result[0] += 0.9970059880239521;
                      result[1] += 0.0029940119760479044;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
                    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                      result[0] += 0.9930313588850174;
                      result[1] += 0;
                      result[2] += 0.006968641114982578;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9997354497354497;
                      result[1] += 0;
                      result[2] += 0.00026455026455026457;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
                      result[0] += 0.9863945578231292;
                      result[1] += 0;
                      result[2] += 0.013605442176870748;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.998587570621469;
                      result[1] += 0.0014124293785310734;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9941176470588236;
                      result[1] += 0;
                      result[2] += 0.0058823529411764705;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.8932038834951457;
                      result[1] += 0;
                      result[2] += 0.10679611650485436;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
                if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.5;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.5;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)81.5) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 1;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.4;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.6;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)45) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37) ) ) {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0.5;
                      result[3] += 0.5;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
                    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9705882352941176;
                      result[1] += 0;
                      result[2] += 0.029411764705882353;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
                result[0] += 0;
                result[1] += 1;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)122) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)23) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)50) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)77) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)17) ) ) {
                      result[0] += 0.95;
                      result[1] += 0;
                      result[2] += 0.02142857142857143;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.02857142857142857;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.7692307692307693;
                      result[1] += 0;
                      result[2] += 0.23076923076923078;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)24) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
                  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9090909090909091;
                      result[1] += 0;
                      result[2] += 0.09090909090909091;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
                      result[0] += 0.989103101424979;
                      result[1] += 0;
                      result[2] += 0.010896898575020955;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)4) ) ) {
                      result[0] += 0.998;
                      result[1] += 0;
                      result[2] += 0.002;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0.10526315789473684;
                      result[2] += 0;
                      result[3] += 0.8947368421052632;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)13) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9920634920634921;
                      result[1] += 0.007936507936507936;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 1;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
                    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9767441860465116;
                      result[1] += 0;
                      result[2] += 0.023255813953488372;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 1;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 1;
              result[3] += 0;
              result[4] += 0;
              result[5] += 0;
              result[6] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 1;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)13) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 1;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
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
              result[6] += 0;
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)46.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)58) ) ) {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)4) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 1;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    }
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                    result[2] += 0;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  }
                } else {
                  if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-190) ) ) {
                    result[0] += 0;
                    result[1] += 0;
                    result[2] += 1;
                    result[3] += 0;
                    result[4] += 0;
                    result[5] += 0;
                    result[6] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                      result[2] += 0;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0;
                    } else {
                      result[0] += 0.9359267734553777;
                      result[1] += 0;
                      result[2] += 0.048054919908466824;
                      result[3] += 0;
                      result[4] += 0;
                      result[5] += 0;
                      result[6] += 0.01601830663615561;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
                if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
                  result[0] += 0;
                  result[1] += 0;
                  result[2] += 1;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                } else {
                  result[0] += 1;
                  result[1] += 0;
                  result[2] += 0;
                  result[3] += 0;
                  result[4] += 0;
                  result[5] += 0;
                  result[6] += 0;
                }
              } else {
                result[0] += 1;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56) ) ) {
                result[0] += 0;
                result[1] += 0;
                result[2] += 1;
                result[3] += 0;
                result[4] += 0;
                result[5] += 0;
                result[6] += 0;
              } else {
                result[0] += 0;
                result[1] += 0;
                result[2] += 0;
                result[3] += 0;
                result[4] += 0;
                result[5] += 1;
                result[6] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 0;
              result[5] += 1;
              result[6] += 0;
            } else {
              result[0] += 0;
              result[1] += 0;
              result[2] += 0;
              result[3] += 0;
              result[4] += 1;
              result[5] += 0;
              result[6] += 0;
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
  result[6] /= 20;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  result[6] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
